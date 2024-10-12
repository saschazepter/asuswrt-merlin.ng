/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright 2019 Broadcom Ltd.
 */

#include <common.h>
#include <asm/arch/cpu.h>
#include <asm/arch/ddr.h>
#include <spl.h>
#if defined(CONFIG_BCMBCA_PMC)
#include "pmc_drv.h"
#include "asm/arch/BPCM.h"
#endif

#include "bcm_otp.h"

DECLARE_GLOBAL_DATA_PTR;

#if defined(CONFIG_BCMBCA_DDRC)
#include "spl_ddrinit.h"
#include "clk_rst.h"
#endif
#if defined(CONFIG_BCMBCA_UBUS4)
#include "bcm_ubus4.h"
#endif

int set_cpu_freq(int freqMHz);

#if defined(CONFIG_TPL_BUILD)
static void enable_ns_access(void)
{
	BIUCFG->bac.bac_permission |= 0x33;     // Linux access to BAC_CPU_THERM_TEMP
}
/*this function is used to turn on CCI from secure mode
 *   it also turns snooping enable for S5 CPU interface*/
static void cci500_enable(void)
{
	/*Enable access from E2 and below */
	CCI500->secr_acc |= SECURE_ACCESS_UNSECURE_ENABLE;
}
#endif

#if defined(CONFIG_BCMBCA_PMC)

void boost_cpu_clock(void)
{
	printf("set cpu freq to 1500MHz\n");
	set_cpu_freq(1500);
	pll_ch_freq_set(PMB_ADDR_BIU_PLL, 1, 3000/600); // raise ACEBIU clock rate to 600 MHz
}

int set_cpu_freq(int freqMHz)
{
	int mdiv;

	if( freqMHz > 1500 || freqMHz < 300 )
	{
		printf("%dMHz is not supported\n", freqMHz);
		return -1;
	}

	/* VCO at 3GHz, mdiv = Fvco/target frequency */
	mdiv = 3000/freqMHz;

	pll_ch_freq_set(PMB_ADDR_BIU_PLL, 0, mdiv);

	return 3000/mdiv;	
}
#endif

void bcmbca_disable_memc_sram(void)
{
	MEMC->SRAM_REMAP_CTRL = 0;
	MEMC->SRAM_REMAP_CTRL;
}

int arch_cpu_init(void)
{
#if defined(CONFIG_BCMBCA_IKOS)
	icache_enable();
#endif
#if defined(CONFIG_SPL_BUILD)
#if !defined(CONFIG_TPL_BUILD) /* SPL */
	u32 frq = COUNTER_FREQUENCY;

	/* always disable memc sram first in case btrm keeps it enabled */
	bcmbca_disable_memc_sram();

	spl_ddrinit_prepare();

	// set arch timer frequency
	asm volatile("mcr p15, 0, %0, c14, c0, 0" : : "r" (frq));
	// enable system timer
	BIUCFG->TSO_CNTCR |= 1;

	/* enable unalgined access */
	set_cr(get_cr() & ~CR_A);
#else /* TPL */
	cci500_enable();
	enable_ns_access();
#endif
#else /* u-boot proper */
	/* u-boot proper to fixup arbiter setting in case SPL of lockdown */
	MEMC->ARB_CFG |= MC_ARB_CFG_ARB_MODE1_MASK;
#endif

#ifdef CONFIG_DISABLE_CONSOLE
        gd->flags |= GD_FLG_DISABLE_CONSOLE;
#endif
#ifdef CONFIG_SILENT_CONSOLE
	gd->flags |= GD_FLG_SILENT;
#endif

	return 0;
}

void arch_cpu_deinit(void)
{
#if defined(CONFIG_SPL_BUILD) && !defined(CONFIG_TPL_BUILD)
#if defined(CONFIG_BCMBCA_UBUS4)
	/* restore axi write cache when we spl does not need to use wifi memory */
	ubus_master_cpu_enable_axi_write_cache(1);
#endif
#endif
}

int get_nr_cpus(void)
{
	uint32_t nr_cpus;

	if (bcm_otp_get_nr_cpus(&nr_cpus)) {
		printf("Error: failed to read cpu core from OTP\n");
		nr_cpus = 3;
	} else {
			nr_cpus = 3 - nr_cpus;
	}
	return nr_cpus;
}

#if !defined(CONFIG_TPL_ATF)
void boot_secondary_cpu(unsigned long vector)
{
	uint32_t cpu = 1; 
	uint32_t nr_cpus = get_nr_cpus();
	ARM_CONTROL_REG ctrl_reg;

	printf("boot secondary cpu from 0x%lx\n", vector);

	*(volatile uint32_t*)(BOOTLUT_BASE+0x20) = vector;
	
	while (cpu < nr_cpus) {
		int stat;

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
