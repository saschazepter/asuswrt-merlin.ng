/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright 2019 Broadcom Ltd.
 */

#include <common.h>
#include <asm/arch/cpu.h>
#include <asm/io.h>
#include <spl.h>
#include <asm/arch/ddr.h>
#if defined(CONFIG_BCMBCA_PMC)
#include "pmc_drv.h"
#include "asm/arch/BPCM.h"
#endif
#include "tpl_params.h"
#include "spl_ddrinit.h"
int pll_ch_freq_set(unsigned int pll_addr, unsigned int ch, unsigned int mdiv);
int pll_ch_reset(unsigned int pll_addr, unsigned int ch, unsigned int pll_reg_offset);
int set_cpu_freq(int freqMHz);

DECLARE_GLOBAL_DATA_PTR;

#if defined(CONFIG_SPL_BUILD)

#if !defined(CONFIG_TPL_BUILD)
static void enable_ts0_couner(void)
{
	BIUCFG->ts0_ctrl.CNTCR |= 0x1;
}

static void enable_upper_memory_access(void)
{
	/* enable the 8G to 16G address range for memc */ 	
	BIUCFG->bac.bac_cciaddr = 0x55550055;
	CCI500->ctrl_ovr |= (1 << 29);
}
#else
static void cci500_enable(void)
{
	/*Enable access from E2 and below */
	CCI500->secr_acc |= SECURE_ACCESS_UNSECURE_ENABLE;
}

static void enable_ns_access(void)
{
	BIUCFG->bac.bac_permission |= 0x33; // Linux access to BAC_CPU_THERM_TEMP
}

static void setup_ubus_rangechk(void)
{
	/* Size in MB. First 2GB is set up by default */  
	int size_left = tplparams->ddr_size - 2048;
	int size, size_bit, i = 1;
#ifdef PHYS_SDRAM_2
	uint64_t addr = PHYS_SDRAM_2;
#else
	uint64_t addr = 0x100000000UL;
#endif
	
	/* Fix the default of RC0 to only enable lower 2G memory for ubus master */
	UBUS4_RANGE_CHK_SETUP->cfg[0].base = 0x13;
	
	/* setup the second range check for the top DDR region */
	while (size_left > 0 && i < 16) {
		/* each range checker can support up to 4GB size */  
		if (size_left > 4096 )
			size = 4096;
		else
			size = size_left;
		size_left -= size;
		size_bit = 0;
		size = (size << 8);  /* MB to # of 4KB */
		while (size) {
			size = (size >> 1);
			if (size)
				size_bit++;
		}

		UBUS4_RANGE_CHK_SETUP->cfg[i].control = 0x1f0;
		UBUS4_RANGE_CHK_SETUP->cfg[i].srcpid[0] = 0xffffffff;
		UBUS4_RANGE_CHK_SETUP->cfg[i].seclev = 0xffffffff;
		UBUS4_RANGE_CHK_SETUP->cfg[i].base = (addr&0xffffffe0) | size_bit;
		UBUS4_RANGE_CHK_SETUP->cfg[i].base_up = addr >> 32;

		addr += 4096UL << size_bit;
		i++;
	}
}
#endif
#endif

#if defined(CONFIG_BCMBCA_PMC)
void boost_cpu_clock(void)
{
	printf("set cpu freq to 2000MHz\n");
	set_cpu_freq(2000);
	pll_ch_freq_set(PMB_ADDR_BIU_PLL, 1, 4000/800); // raise ACEBIU clock rate to 800 MHz
}

int set_cpu_freq(int freqMHz)
{
	int mdiv;

	if( freqMHz > 2000 || freqMHz < 400 )
	{
		printf("%dMHz is not supported\n", freqMHz);
		return -1;
	}

	/* VCO at 4GHz, mdiv = Fvco/target frequency */
	mdiv = 4000/freqMHz;

	pll_ch_freq_set(PMB_ADDR_BIU_PLL, 0, mdiv);

	return 4000/mdiv;
}
#endif

void reset_plls(void)
{
	/* Software workaround for non-resetting eMMC PLL */
	pll_ch_reset(PMB_ADDR_BIU_PLL, 5, PLLBPCMRegOffset(ch45_cfg));
}

void bcmbca_enable_memc_sram(u64 addr, u64 size)
{
	uint32_t *reg;
	uint64_t end_addr;

	reg  = (uint32_t *)(MEMC_BASE + mc2_afx_sram_match_cfg_sram_end_addr_lo);
	end_addr = addr + size - 1;
	writel((uint32_t)end_addr, reg);
	reg  = (uint32_t *)(MEMC_BASE + mc2_afx_sram_match_cfg_sram_end_addr_hi);
	writel((uint32_t)(end_addr>>32), reg);

	reg  = (uint32_t *)(MEMC_BASE + mc2_afx_sram_match_cfg_sram_start_addr_lo);
	writel((uint32_t)addr, reg);
	reg  = (uint32_t *)(MEMC_BASE + mc2_afx_sram_match_cfg_sram_start_addr_hi);
	writel(((uint32_t)(addr>>32))|mc2_afx_sram_match_cfg_sram_start_addr_hi_enable_MASK, reg);
}

void bcmbca_disable_memc_sram(void)
{
	uint32_t *reg = (uint32_t *)(MEMC_BASE + mc2_afx_sram_match_cfg_sram_start_addr_hi);
	
	writel(readl(reg)&~mc2_afx_sram_match_cfg_sram_start_addr_hi_enable_MASK, reg);
}

int arch_cpu_init(void)
{
#if defined(CONFIG_BCMBCA_IKOS)
	icache_enable();
#endif
#if defined(CONFIG_SPL_BUILD) && !defined(CONFIG_TPL_BUILD)
	/* always disable memc sram first in case btrm keeps it enabled */
	bcmbca_disable_memc_sram();

	enable_ts0_couner();
#if defined(CONFIG_BCMBCA_DDRC)
	spl_ddrinit_prepare();
#endif
	enable_upper_memory_access();
	/* enable unalgined access */
	set_sctlr(get_sctlr() & ~CR_A);
#endif

#if defined(CONFIG_TPL_BUILD)
	enable_ns_access();
	setup_ubus_rangechk();
	cci500_enable();
#endif

#ifdef CONFIG_DISABLE_CONSOLE
        gd->flags |= GD_FLG_DISABLE_CONSOLE;
#endif
#ifdef CONFIG_SILENT_CONSOLE
	gd->flags |= GD_FLG_SILENT;
#endif

    return 0;
}

#if !defined(CONFIG_TPL_ATF)
void boot_secondary_cpu(unsigned long vector)
{
	uint32_t cpu, nr_cpus = 4;
	ARM_CONTROL_REG ctrl_reg;
	uint64_t rvbar = vector;

	printf("boot secondary cpu from 0x%lx\n", vector);

	cpu = 1;
	while (cpu < nr_cpus) {
		int stat;

		BIUCFG->cluster[0].rvbar_addr[cpu] = rvbar;
		stat = PowerOnDevice(PMB_ADDR_ORION_CPU0 + cpu);
		if (stat != kPMC_NO_ERROR)
			printf("failed to power on secondary cpu %d - sts %d\n", cpu, stat);

		stat = ReadBPCMRegister(PMB_ADDR_BIU_BPCM, ARMBPCMRegOffset(arm_control), &ctrl_reg.Reg32);
		ctrl_reg.Bits.cpu_reset_n &= ~(0x1 << cpu);
		stat |= WriteBPCMRegister(PMB_ADDR_BIU_BPCM, ARMBPCMRegOffset(arm_control), ctrl_reg.Reg32);
		if (stat != kPMC_NO_ERROR)
			printf("failed to boot secondary cpu %d - sts %d\n", cpu, stat);
		cpu++;
	}

	return;
}
#endif
