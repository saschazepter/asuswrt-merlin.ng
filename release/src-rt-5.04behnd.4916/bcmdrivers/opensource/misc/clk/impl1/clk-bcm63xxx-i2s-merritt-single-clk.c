/*
 * Copyright (c) 2020 Broadcom Corporation
 * All Rights Reserved
 *
 * <:label-BRCM:2020:DUAL/GPL:standard
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation (the "GPL").
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * 
 * A copy of the GPL is available at http://www.broadcom.com/licenses/GPLv2.php, or by
 * writing to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 * 
 * :>
*/

#include <linux/clk.h>
#include <linux/clk-provider.h>
#include <linux/mfd/syscon.h>
#include <linux/slab.h>
#include <linux/regmap.h>

#define I2S_TX_CFG			( 0x0000 ) /* 0x00 -- 0x2080 cfg */
#define I2S_TX_MCLK_RATIO_SHIFT		20
#define I2S_TX_MCLK_RATIO_MASK		( 0x0F << I2S_TX_MCLK_RATIO_SHIFT )

#define I2S_MISC			( 0x003C ) /* 0x3X -- 0x20BC */
#define I2S_TX_CLKNUMER_CFG		( 0x0070 ) /* 0x70 -- 0x20f0  */
#define I2S_TX_CLKDENOM_CFG		( 0x0074 ) /* 0x74 -- 0x20f4  */

#define CLK_NUMERATOR (0xFFFF + 1)

#define CLK_DENOM_MASK			0xFFFFFFFF
#define CLK_NUMER_MASK			0xFFFFFFFF

struct clk_i2s_data {
  struct regmap *regmap_i2scfg;
};

struct clk_i2s {
  struct clk_hw hw;
  struct clk_i2s_data *i2s_data;
};

#define to_clk_i2s(_hw) container_of(_hw, struct clk_i2s, hw)

static int bcm_i2s_clk_set_rate(struct clk_hw *hw, unsigned long rate, 
				unsigned long parent_rate)
{
	unsigned int denominator;
	struct clk_i2s *i2s = to_clk_i2s(hw);
	struct clk_i2s_data *pdata = i2s->i2s_data;

	denominator = div_u64((uint64_t)parent_rate * CLK_NUMERATOR,rate);

	regmap_update_bits(pdata->regmap_i2scfg, I2S_TX_CLKNUMER_CFG,
			   CLK_NUMER_MASK,
			   CLK_NUMERATOR);
	regmap_update_bits(pdata->regmap_i2scfg, I2S_TX_CLKDENOM_CFG, 
			   CLK_DENOM_MASK,
			   denominator);

printk("Entering %s. rate = %d\n, the denominator=0x%x(%d) parent_rate=%d",__func__,(int)rate,denominator,(int)denominator,(int)parent_rate);

	return 0;
}

/* based on parent rate, re-calculate the rate and returns*/
static unsigned long bcm_i2s_clk_recalc_rate(struct clk_hw *hw, 
					     unsigned long parent_rate)
{
	struct clk_i2s *i2s = to_clk_i2s(hw);
	struct clk_i2s_data *pdata = i2s->i2s_data;
	unsigned int numerator, denominator, rate;

	regmap_read(pdata->regmap_i2scfg,I2S_TX_CLKNUMER_CFG, &numerator);
	regmap_read(pdata->regmap_i2scfg,I2S_TX_CLKDENOM_CFG, &denominator);
	rate = div_u64((uint64_t)parent_rate * CLK_NUMERATOR, denominator);

	return rate;
}

static long bcm_i2s_clk_round_rate(struct clk_hw *hw, unsigned long rate, 
				   unsigned long *parent_rate)
{
   return rate;
}

static const struct clk_ops clk_i2s_ops = {
	.set_rate = bcm_i2s_clk_set_rate,
	.recalc_rate = bcm_i2s_clk_recalc_rate,
	.round_rate = bcm_i2s_clk_round_rate,
};

static struct clk *bcm_i2s_tx_clk_register(struct device *dev,
					const char *name,
					const char *parent_name,
					struct clk_i2s_data *i2s_data)
{
	struct clk_init_data init;
	struct clk_i2s *clki2s;
	struct clk *clk;

	clki2s = kzalloc(sizeof(*clki2s), GFP_KERNEL);
	if (!clki2s) {
		pr_err("%s: Out of memory\n", __func__);
		return ERR_PTR(-ENOMEM);
	}
	init.name = name;
	init.ops = &clk_i2s_ops;
	init.flags = 0;
	init.parent_names = (parent_name ? &parent_name : NULL);
	init.num_parents = (parent_name ? 1 : 0);

	clki2s->i2s_data = i2s_data;
	clki2s->hw.init = &init;

	clk = clk_register(NULL, &clki2s->hw);
	if (IS_ERR(clk)) 
		kfree(clki2s);
	return clk;
}

static void __init bcm_i2s_tx_clk_init(struct device_node *node)
{
	const char *clk_name = node->name;
	const char *parent_name;
	struct clk_i2s_data *data;
	struct clk *clk;

	data = kzalloc(sizeof(*data), GFP_KERNEL);
	if (!data) {
		pr_err("%s: Out of memory\n", __func__);
		return;
	}

	data->regmap_i2scfg =
		syscon_regmap_lookup_by_phandle(node, "clk-mclk-syscon");
	if (IS_ERR(data->regmap_i2scfg))
		goto out ;

	of_property_read_string(node, "clock-tx-output-names", &clk_name);
	parent_name = of_clk_get_parent_name(node, 0);
	if (!parent_name) {
		pr_err("%s(): %s: of_clk_get_parent_name() failed\n",
			__func__, node->name);
		goto out;
	}

	clk = bcm_i2s_tx_clk_register(NULL, clk_name, parent_name, data);
	if (!IS_ERR(clk)) {
		of_clk_add_provider(node, of_clk_src_simple_get, clk);
		pr_err("%s(): %s: clock register success.\n",
		       __func__, node->name);
		return;
	}
out:
	kfree(data);
	return;
}

static void __init of_bcm_i2s_tx_clk_init(struct device_node *node)
{
	bcm_i2s_tx_clk_init(node);
}
CLK_OF_DECLARE(bcm_gate_clk, "brcm,i2s-tx-clock", of_bcm_i2s_tx_clk_init);
