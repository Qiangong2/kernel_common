/*
 * Copyright (C) 2012 Spreadtrum Communications Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ASM_ARCH_BOARD_H
#define __ASM_ARCH_BOARD_H

#include <asm/sizes.h>


#ifdef CONFIG_MACH_SP8825_FPGA
#include <mach/gpio-sp8810ga.h>
#endif
#include "memory.h"

/*
 * pmem area definition
 */

#ifdef CONFIG_ANDROID_PMEM
#define SPRD_PMEM_SIZE		(CONFIG_SPRD_PMEM_SIZE*SZ_1M)
#define SPRD_PMEM_ADSP_SIZE	(CONFIG_SPRD_PMEM_ADSP_SIZE*SZ_1M)
#else
#define SPRD_PMEM_SIZE		(0*SZ_1M)
#define SPRD_PMEM_ADSP_SIZE	(0*SZ_1M)
#endif
#define SPRD_ROT_MEM_SIZE	(0)
#define SPRD_SCALE_MEM_SIZE	(0)
#ifdef CONFIG_ION
#define SPRD_ION_SIZE           (CONFIG_SPRD_ION_SIZE*SZ_1M)
#define SPRD_ION_OVERLAY_SIZE   (CONFIG_SPRD_ION_OVERLAY_SIZE*SZ_1M)
#else
#define SPRD_ION_SIZE           (0*SZ_1M)
#define SPRD_ION_OVERLAY_SIZE   (0*SZ_1M)
#endif
#define SPRD_IO_MEM_SIZE	(SPRD_PMEM_SIZE+SPRD_PMEM_ADSP_SIZE+ \
				SPRD_ROT_MEM_SIZE+SPRD_SCALE_MEM_SIZE+ \
				SPRD_ION_SIZE+SPRD_ION_OVERLAY_SIZE)

#define SPRD_PMEM_BASE		(PLAT_PHYS_OFFSET + (256*SZ_1M)-SPRD_IO_MEM_SIZE)
#define SPRD_PMEM_ADSP_BASE	(SPRD_PMEM_BASE+SPRD_PMEM_SIZE)
#define SPRD_ROT_MEM_BASE	(SPRD_PMEM_ADSP_BASE+SPRD_PMEM_ADSP_SIZE)
#define SPRD_SCALE_MEM_BASE	(SPRD_ROT_MEM_BASE+SPRD_ROT_MEM_SIZE)
#define SPRD_ION_BASE           (SPRD_SCALE_MEM_BASE+SPRD_SCALE_MEM_SIZE)
#define SPRD_ION_OVERLAY_BASE   (SPRD_ION_BASE+SPRD_ION_SIZE)

#endif