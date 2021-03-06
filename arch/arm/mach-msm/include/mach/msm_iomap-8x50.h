/*
 * Copyright (C) 2007 Google, Inc.
 * Copyright (c) 2008-2010, Code Aurora Forum. All rights reserved.
 * Author: Brian Swetland <swetland@google.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *
 * The MSM peripherals are spread all over across 768MB of physical
 * space, which makes just having a simple IO_ADDRESS macro to slide
 * them into the right virtual location rough.  Instead, we will
 * provide a master phys->virt mapping for peripherals here.
 *
 */

#ifndef __ASM_ARCH_MSM_IOMAP_8X50_H
#define __ASM_ARCH_MSM_IOMAP_8X50_H

/* Physical base address and size of peripherals.
 * Ordered by the virtual base addresses they will be mapped at.
 *
 * MSM_VIC_BASE must be an value that can be loaded via a "mov"
 * instruction, otherwise entry-macro.S will not compile.
 *
 * If you add or remove entries here, you'll want to edit the
 * msm_io_desc array in arch/arm/mach-msm/io.c to reflect your
 * changes.
 *
 */

#define MSM_VIC_BASE          IOMEM(0xFA000000)
#define MSM_VIC_PHYS          0xAC000000
#define MSM_VIC_SIZE          SZ_4K

#define MSM_CSR_BASE          IOMEM(0xFA001000)
#define MSM_CSR_PHYS          0xAC100000
#define MSM_CSR_SIZE          SZ_4K

#define MSM_TMR_PHYS          MSM_CSR_PHYS
#define MSM_TMR_BASE          MSM_CSR_BASE
#define MSM_TMR_SIZE          SZ_4K

#define MSM_GPIO1_BASE        IOMEM(0xFA003000)
#define MSM_GPIO1_PHYS        0xA9000000
#define MSM_GPIO1_SIZE        SZ_4K

#define MSM_GPIO2_BASE        IOMEM(0xFA004000)
#define MSM_GPIO2_PHYS        0xA9100000
#define MSM_GPIO2_SIZE        SZ_4K

#define MSM_CLK_CTL_BASE      IOMEM(0xFA005000)
#define MSM_CLK_CTL_PHYS      0xA8600000
#define MSM_CLK_CTL_SIZE      SZ_4K

#define MSM_SIRC_BASE         IOMEM(0xFB006000)
#define MSM_SIRC_PHYS         0xAC200000
#define MSM_SIRC_SIZE         SZ_4K

#define MSM_SCPLL_BASE        IOMEM(0xFB007000)
#define MSM_SCPLL_PHYS        0xA8800000
#define MSM_SCPLL_SIZE        SZ_4K

#define MSM_TCSR_BASE         IOMEM(0xFB008000)
#define MSM_TCSR_PHYS         0xA8700000
#define MSM_TCSR_SIZE         SZ_4K

#define MSM_SHARED_RAM_BASE   IOMEM(0xFA100000)
#define MSM_SHARED_RAM_SIZE   SZ_1M
#define MSM_SHARED_RAM_PHYS   0x00100000

#define MSM_VFE_PHYS          0xA0F00000
#define MSM_VFE_SIZE          SZ_1M

#define MSM_UART1_PHYS        0xA9A00000
#define MSM_UART1_SIZE        SZ_4K

#define MSM_UART2_PHYS        0xA9B00000
#define MSM_UART2_SIZE        SZ_4K

#define MSM_UART3_PHYS        0xA9C00000
#define MSM_UART3_SIZE        SZ_4K

#define MSM_HSUSB_PHYS        0xA0800000
#define MSM_HSUSB_SIZE        SZ_4K

#define MSM_UART1DM_PHYS      0xA0200000
#define MSM_UART2DM_PHYS      0xA0300000

#define MSM_I2C_PHYS          0xA9900000
#define MSM_I2C_SIZE          SZ_4K

#define MSM_MDC_BASE	      IOMEM(0xFA200000)
#define MSM_MDC_PHYS	      0xAA500000
#define MSM_MDC_SIZE	      SZ_1M

#define MSM_AD5_BASE          IOMEM(0xFA300000)
#define MSM_AD5_PHYS          0xAC000000
#define MSM_AD5_SIZE          (SZ_1M*13)

#define MSM_RAM_CONSOLE_BASE IOMEM(0xF9100000)
#define MSM_RAM_CONSOLE_PHYS 0x2FFC0000
#define MSM_RAM_CONSOLE_SIZE 0x00040000

#define MSM_SPI_PHYS          0xA1200000
#define MSM_SPI_SIZE          SZ_4K

#define MSM_GPIOCFG1_BASE IOMEM(0xF9004000)
#define MSM_GPIOCFG1_PHYS 0xA8E00000
#define MSM_GPIOCFG1_SIZE SZ_4K

#define MSM_GPIOCFG2_BASE IOMEM(0xF9005000)
#define MSM_GPIOCFG2_PHYS 0xA8F00000
#define MSM_GPIOCFG2_SIZE SZ_4K
	
#define MSM_TMR0_BASE		IOMEM(0xFA001000)	
#define MSM_QGIC_CPU_BASE	IOMEM(0xFA003000)		
#define MSM_APCS_GCC_BASE	IOMEM(0xFA006000)	
#define MSM_SAW_L2_BASE		IOMEM(0xFA007000)	
#define MSM_SAW0_BASE		IOMEM(0xFA008000)	
#define MSM_SAW1_BASE		IOMEM(0xFA009000)	
#define MSM_IMEM_BASE		IOMEM(0xFA00A000)	
#define MSM_ACC0_BASE		IOMEM(0xFA00B000)	
#define MSM_ACC1_BASE		IOMEM(0xFA00C000)	
#define MSM_ACC2_BASE		IOMEM(0xFA00D000)	
#define MSM_ACC3_BASE		IOMEM(0xFA00E000)		
#define MSM_MMSS_CLK_CTL_BASE	IOMEM(0xFA014000)	
#define MSM_LPASS_CLK_CTL_BASE	IOMEM(0xFA015000)	
#define MSM_HFPLL_BASE		IOMEM(0xFA016000)	
#define MSM_TLMM_BASE		IOMEM(0xFA017000)		
#define MSM_SIC_NON_SECURE_BASE	IOMEM(0xFA600000)	
#define MSM_HDMI_BASE		IOMEM(0xFA800000)	
#define MSM_RPM_BASE		IOMEM(0xFA801000)	
#define MSM_RPM_MPM_BASE	IOMEM(0xFA802000)	
#define MSM_QFPROM_BASE		IOMEM(0xFA700000)	
#define MSM_L2CC_BASE		IOMEM(0xFA701000)	
#define MSM_APCS_GLB_BASE	IOMEM(0xFA702000)	
#define MSM_SAW2_BASE		IOMEM(0xFA703000)	
#define MSM_SAW3_BASE		IOMEM(0xFA704000)				
#define MSM_CLK_CTL_SH2_BASE	IOMEM(0xFA106000)		

#define MSM_SHARED_RAM_SIZE	SZ_1M

#endif
