obj-y += irq.o arch_init.o arch_lock.o \
         reserve.o efuse.o common.o glb.o

obj-$(CONFIG_SC_INTERNAL_ADI) += adi.o adie_irq.o
obj-$(CONFIG_SC_INTERNAL_ADC) += adc.o
obj-$(CONFIG_SC_INTERNAL_WATCHDOG) += watchdog.o
ifeq ($(CONFIG_OF),y)
obj-$(CONFIG_ARCH_SCX35) += clock-sc8830_dt.o
else
obj-$(CONFIG_ARCH_SCX35) += clock-sc8830.o
endif
obj-$(CONFIG_ARCH_SCX35) += devices-sc8830.o io-sc8830.o arch_misc.o pin_switch.o
obj-$(CONFIG_ARCH_SCX35) += timer_sc8830.o dma_r4p0.o
obj-$(CONFIG_MACH_SCX35_DT) += mach-scx35-dt.o

ifeq ($(CONFIG_ARCH_SCX30G),y)
obj-$(CONFIG_PM_DEVFREQ) += dmc_freq_28nm.o dmc_dfs_test.o
obj-$(CONFIG_SCX35_DMC_FREQ_AP) += dmc_freq_ap_28nm.o
	CFLAGS_dmc_freq_ap_28nm.o += -fPIC
else
ifeq ($(CONFIG_ARCH_SCX35L),y)
obj-y += dmc_freq_28nm.o
else
obj-$(CONFIG_PM_DEVFREQ) += dmc_freq.o
obj-$(CONFIG_SCX35_DMC_FREQ_AP) += dmc_freq_ap.o
endif
endif

obj-$(CONFIG_PM) += pm.o
obj-$(CONFIG_FIX_V7TAGRAM_BUG) += fix_v7_tag_ram_bug.o
obj-$(CONFIG_CPU_FREQ) += cpufreq-scx35.o
ifeq ($(CONFIG_BUS_MONITOR),y)
obj-$(CONFIG_ARCH_SCX35) += sc8830_bm.o
endif

ifeq ($(CONFIG_CPU_IDLE),y)
	obj-$(CONFIG_ARCH_SCX35) += cpuidle-scx35.o
endif

ifeq ($(CONFIG_PM),y)
	obj-$(CONFIG_ARCH_SCX35) += pm-scx35.o standby-scx35.o pm_debug_scx35.o
endif
obj-$(CONFIG_SPRD_DCDC_DEBUG) += dcdc_debug.o
obj-$(CONFIG_SMP) += platsmp.o headsmp.o
obj-$(CONFIG_HOTPLUG_CPU) += hotplug.o
obj-$(CONFIG_SC_VIBRATOR) += vibrator.o
obj-$(CONFIG_SPRD_VIBRATOR_2723) += sprd_vibrator_2723.o
obj-$(CONFIG_SIPC) += sipc.o
ifeq ($(CONFIG_BCMDHD),m)
obj-y += dhd_adapter.o
endif

obj-$(CONFIG_MACH_SPX15) += board-spx15.o board_common_battery.o
obj-$(CONFIG_MACH_SPX35EB) += board-sp8830eb.o board_common_battery.o
obj-$(CONFIG_MACH_SP8835EB) += board-sp8835eb.o board_common_battery.o
obj-$(CONFIG_MACH_SPX15FPGA) += board-sp8830fpga.o pinmap-sp8830fpga.o board_common_battery.o
obj-$(CONFIG_MACH_SPX35EC) += board-sp8830ec.o board_common_battery.o
obj-$(CONFIG_MACH_SC9620OPENPHONE) += board-sc9620openphone.o board_common_battery.o
obj-$(CONFIG_MACH_SC9620OPENPHONE_ZT) += board-sc9620openphone_zt.o board_common_battery.o
obj-$(CONFIG_MACH_SC9620FPGA) += board-sc9620fpga.o board_common_battery.o
obj-$(CONFIG_MACH_SP8830GEA) += board-sp8830gea.o dma_r4p0.o board_common_battery.o
obj-$(CONFIG_MACH_SP8730SEA) += board-sp8730sea.o dma_r4p0.o board_common_battery.o
obj-$(CONFIG_MACH_SP7730GGA_LC) += board-sp7730gga_lc.o dma_r4p0.o board_common_battery.o
obj-$(CONFIG_MACH_SP7731GGA_LC) += board-sp7731gga_lc.o dma_r4p0.o board_common_battery.o
obj-$(CONFIG_MACH_SP7730GGA) += board-sp7730gga.o dma_r4p0.o board_common_battery.o
obj-$(CONFIG_MACH_SP7730GGAOPENPHONE) += board-sp7730ggaopenphone.o dma_r4p0.o board_common_battery.o
obj-$(CONFIG_MACH_SP7731GEAOPENPHONE) += board-sp7731geaopenphone.o dma_r4p0.o board_common_battery.o
obj-$(CONFIG_MACH_SP7731GEA_FWVGA) += board-sp7731gea_fwvga.o dma_r4p0.o board_common_battery.o
obj-$(CONFIG_MACH_SP7731GEA) += board-sp7731gea.o dma_r4p0.o board_common_battery.o
obj-$(CONFIG_MACH_SP7731GEA_LC) += board-sp7731gea_lc.o dma_r4p0.o board_common_battery.o
obj-$(CONFIG_MACH_PIKEAYOUNG2DTV) += dma_r4p0.o board_common_battery.o
obj-$(CONFIG_MACH_TSHARKWSAMSUNG) += board-tsharkwsamsung.o dma_r4p0.o board_common_battery.o
obj-$(CONFIG_MACH_CORE3) += dma_r4p0.o board_common_battery.o
obj-$(CONFIG_MACH_KANAS_W) += board-kanas_w.o board_common_battery.o
obj-$(CONFIG_MACH_KANAS_TD) += board-kanas_td.o board_common_battery.o
obj-$(CONFIG_MACH_SP7715EATRISIM) += board-sp7715eatrisim.o board_common_battery.o
obj-$(CONFIG_MACH_SP7715EA) += board-sp7715ea.o board_common_battery.o
obj-$(CONFIG_MACH_SP7715EAOPENPHONE) += board-sp7715eaopenphone.o board_common_battery.o
obj-$(CONFIG_MACH_SP7715GATRISIM) += board-sp7715gatrisim.o board_common_battery.o
obj-$(CONFIG_MACH_SP7715GA) += board-sp7715ga.o board_common_battery.o
obj-$(CONFIG_MACH_SP6815GA) += board-sp6815ga.o board_common_battery.o
obj-$(CONFIG_MACH_SP8815GA) += board-sp8815ga.o board_common_battery.o
obj-$(CONFIG_MACH_SP8815GAOPENPHONE) += board-sp8815gaopenphone.o board_common_battery.o
obj-$(CONFIG_MACH_POCKET2) += board-pocket2.o board_common_battery.o
obj-$(CONFIG_MACH_CORSICA_VE) += board-corsica_ve.o board_common_battery.o
obj-$(CONFIG_MACH_YOUNG2) += board-young2.o board_common_battery.o
obj-$(CONFIG_MACH_HIGGS) += board-higgs.o board_common_battery.o
obj-$(CONFIG_MACH_VIVALTO) += board-vivalto.o board_common_battery.o
obj-$(CONFIG_MACH_SP5735EA) += board-sp5735ea.o board_common_battery.o
obj-$(CONFIG_MACH_SP5735C1EA) += board-sp5735c1ea.o board_common_battery.o
obj-$(CONFIG_MACH_SP8830GA) += board-sp8830ga.o board_common_battery.o
obj-$(CONFIG_MACH_SP7730GA) += board-sp7730ga.o board_common_battery.o
obj-$(CONFIG_MACH_SP7730EC) += board-sp7730ec.o board_common_battery.o
obj-$(CONFIG_MACH_SP7730ECTRISIM) += board-sp7730ectrisim.o board_common_battery.o

obj-$(CONFIG_SPRD_DEBUG) += sprd_debug.o
obj-$(CONFIG_SPRD_MEM_POOL) += sprd_mem_pool.o
ifeq ($(CONFIG_ARCH_SCX35L),y)
obj-$(CONFIG_SPRD_AVS_DEBUG) += avs_debug_scx30g.o
else
obj-$(CONFIG_SPRD_AVS_DEBUG) += avs_debug.o
endif
obj-$(CONFIG_SPRD_AUX_DEBUG) += aux_debug.o
obj-$(CONFIG_MACH_SPX35LFPGA) += board-sp8830fpga.o dma_r4p0.o mailbox.o
obj-$(CONFIG_MACH_PIKELFPGA) += board-sp8830fpga.o dma_r4p0.o mailbox.o
obj-$(CONFIG_MACH_SP9630EA_4MOD) += board-sp9630ea_4mod.o dma_r4p0.o mailbox.o
obj-$(CONFIG_MACH_COREPRIMELITE_MARLIN) += board-coreprimelite_marlin.o dma_r4p0.o mailbox.o
obj-$(CONFIG_MACH_COREPRIMELITE) += board-coreprimelite.o dma_r4p0.o mailbox.o
obj-$(CONFIG_MACH_SP9630EA_3592M_3MOD) += board-sp9630ea_3592m_3mod.o dma_r4p0.o mailbox.o
obj-$(CONFIG_MACH_SP9630EA3MN) += board-sp9630ea3mn.o dma_r4p0.o mailbox.o
obj-$(CONFIG_MACH_SP9630EA4MN) += board-sp9630ea4mn.o dma_r4p0.o mailbox.o
obj-$(CONFIG_MACH_SP9630EA) += board-sp9630ea.o dma_r4p0.o mailbox.o
obj-$(CONFIG_GPS_LSI_S5N6420)		+= sec_gps_s5n6420.o

