/*
 *#############################################################################
 *
 * Copyright (c) 2006-2014 MStar Semiconductor, Inc.
 * All rights reserved.
 *
 * Unless otherwise stipulated in writing, any and all information contained
 * herein regardless in any format shall remain the sole proprietary of
 * MStar Semiconductor Inc. and be kept in strict confidence
 * (��MStar Confidential Information��) by the recipient.
 * Any unauthorized act including without limitation unauthorized disclosure,
 * copying, use, reproduction, sale, distribution, modification, disassembling,
 * reverse engineering and compiling of the contents of MStar Confidential
 * Information is unlawful and strictly prohibited. MStar hereby reserves the
 * rights to any and all damages, losses, costs and expenses resulting therefrom.
 *
 *#############################################################################
 */

#ifndef _BOOT_INC_
#include "boot.inc"
#endif

    .text
    .global     BootRom_InitPll

BootRom_InitPll:

    @//AVD reset
    ldr         r1, =(MS_BUS_RIU_ADDR + (0x103600 << 1))
    ldr         r0, [r1, #(0x2a << 1)]
    orr         r0, r0, #0x10
    str         r0, [r1, #(0x2a << 1)]

    ldr         r1, =(MS_BUS_RIU_ADDR + (0x102500 << 1))
    ldr         r0, =0x7f                   @//Soft-reset for DAC/ATOP/PLLB/ADCB/PLLA/ADCA
    strb        r0, [r1, #(0x0e << 1)]
    ldr         r0, =0x00
    strb        r0, [r1, #(0x0e << 1)]

    ldr         r0, =0x0000                 @//Power-on for related adc_atop IPs
    str         r0, [r1, #(0x08 << 1)]
    ldr         r0, =0x0000
    str         r0, [r1, #(0x0a << 1)]
    ldr         r0, =0x0000
    str         r0, [r1, #(0x0c << 1)]
    ldr         r0, =0x0030
    str         r0, [r1, #(0x7e << 1)]

    ldr         r0, =0x08
    strb        r0, [r1, #(0x90 << 1)]
    ldr         r0, =0x08
    strb        r0, [r1, #(0x92 << 1)]
    ldr         r0, =0x00
    strb        r0, [r1, #(0xa0 << 1)]
    ldr         r0, =0x00
    strb        r0, [r1, #(0xa4 << 1)]

@//================================================================================================
    ldr         r1, =(MS_BUS_RIU_ADDR + (0x101e00 << 1))
    ldr         r0, =0x0000                 @//Power-on for PD_3P3_1, PD_3P3_0 and PD_3P3_USB1
    str         r0, [r1, #(0x38 << 1)]

@//================================================================================================
@//Module: ana_misc (0x110C)
    ldr         r1, =(MS_BUS_RIU_ADDR + (0x110c00 << 1))
    ldr         r0, =0x0000                 @//reg_mpll_pd = 0
                                            @//reg_mpll_clk_adc216m_pd = 0
                                            @//Module: ana_misc (0x110C)
                                            @//reg_mpll_clk_adc432m_pd = 0
    str         r0, [r1, #(0x02 << 1)]

    WREG_B      (MS_BUS_RIU_ADDR + (0x110C62 << 1) + 1), 0x00   @//miu128_pll_pd

@//================================================================================================

    WREG        (MS_BUS_RIU_ADDR + (0x110C22 << 1)), 0x1E80
    WREG_B      (MS_BUS_RIU_ADDR + (0x110C24 << 1)), 0x00
    WREG_B      (MS_BUS_RIU_ADDR + (0x110C26 << 1)), 0x0C
    WREG        (MS_BUS_RIU_ADDR + (0x110CB0 << 1)), 0x0000
    WREG        (MS_BUS_RIU_ADDR + (0x110CD0 << 1)), 0x0001

#ifdef CONFIG_MSTAR_DVFS_ENABLE
    WREG        (MS_BUS_RIU_ADDR + (0x110CC0 << 1)), (CONFIG_DVFS_CPU_CLOCK_INIT & 0xFFFF)
    WREG        (MS_BUS_RIU_ADDR + (0x110CC2 << 1)), ((CONFIG_DVFS_CPU_CLOCK_INIT >> 16) & 0xFFFF)
#else
    WREG        (MS_BUS_RIU_ADDR + (0x110CC0 << 1)), (CONFIG_CPU_CLOCK & 0xFFFF)
    WREG        (MS_BUS_RIU_ADDR + (0x110CC2 << 1)), ((CONFIG_CPU_CLOCK >> 16) & 0xFFFF)
#endif
    WREG        (MS_BUS_RIU_ADDR + (0x110CC4 << 1)), 0x0001

@//================================================================================================
                                                                @//Module: usb0 (0x1007)
    WREG_B      (MS_BUS_RIU_ADDR + (0x100700 << 1)), 0x0a       @//Disable MAC initial suspend, Reset UHC
    WREG_B      (MS_BUS_RIU_ADDR + (0x100700 << 1)), 0x28       @//Release UHC reset, enable UHC and OTG XIU function

@//================================================================================================
                                                                @//Module: utmi (0x103A)
    WREG        (MS_BUS_RIU_ADDR + (0x103AA2 << 1)), 0x2088     @// PLL_TEST[30:28]:
                                                                @// PLL_TEST[23] CLK480 to digital output source selection
    WREG        (MS_BUS_RIU_ADDR + (0x103AA0 << 1)), 0x8051     @// PLL_TEST[15]: Bypass 480MHz clock divider
                                                                @// PLL_TEST[7:4]: 5b01010 for 1.0x
                                                                @// PLL_TEST[0]: 1: synthesizer clock, 2b11, 0: XIN_C

    WREG        (MS_BUS_RIU_ADDR + (0x103A82 << 1)), 0x2084     @//Enable CLK12_SEL bit <2> for select low voltage crystal clock
    WREG        (MS_BUS_RIU_ADDR + (0x103A88 << 1)), 0x040f     @//#7=0 Enable band-gap current  #3=0 Disable force_pll_on
    WREG        (MS_BUS_RIU_ADDR + (0x103A80 << 1)), 0x6bc3     @//reg_pdn: bit<15>, bit <2> ref_pdn # Turn on reference voltage and regulator
    DELAYUS     1000

    WREG        (MS_BUS_RIU_ADDR + (0x103A80 << 1)), 0x69c3     @//Turn on UPLL, reg_pdn: bit<9>
    DELAYUS     2000

    WREG        (MS_BUS_RIU_ADDR + (0x103A80 << 1)), 0x0001     @//Turn all (including hs_current) use override mode

@//================================================================================================
                                                                @//Module: usb1 (0x1007)
    WREG_B      (MS_BUS_RIU_ADDR + (0x100780 << 1)), 0x0a       @//Disable MAC initial suspend, Reset UHC
    WREG_B      (MS_BUS_RIU_ADDR + (0x100780 << 1)), 0x28       @//Release UHC reset, enable UHC and OTG XIU function

@//================================================================================================
                                                                @//Module: utmi1 (0x103A)
    WREG        (MS_BUS_RIU_ADDR + (0x103A22 << 1)), 0x2088     @// PLL_TEST[30:28]:
                                                                @// PLL_TEST[23] CLK480 to digital output source selection
    WREG        (MS_BUS_RIU_ADDR + (0x103A20 << 1)), 0x8051     @// PLL_TEST[15]: Bypass 480MHz clock divider
                                                                @// PLL_TEST[7:4]: 5b0101_0 for 1.0x
                                                                @// PLL_TEST[0]: 1: synthesizer clock, 2b11, 0: XIN_C

    WREG        (MS_BUS_RIU_ADDR + (0x103A02 << 1)), 0x2084     @//Enable CLK12_SEL bit <2> for select low voltage crystal clock
    WREG        (MS_BUS_RIU_ADDR + (0x103A08 << 1)), 0x040f     @//Enable band-gap current
    WREG        (MS_BUS_RIU_ADDR + (0x103A00 << 1)), 0x6bc3     @//reg_pdn: bit<15>, bit <2> ref_pdn  # Turn on reference voltage and regulator
    DELAYUS     1000

    WREG        (MS_BUS_RIU_ADDR + (0x103A00 << 1)), 0x69c3     @//Turn on UPLL, reg_pdn: bit<9>
    DELAYUS     2000

    WREG        (MS_BUS_RIU_ADDR + (0x103A00 << 1)), 0x0001     @//Turn all (including hs_current) use override mode


@//================================================================================================
                                                                @//Module: usb2 (0x1138)
    WREG_B      (MS_BUS_RIU_ADDR + (0x113800 << 1)), 0x0a       @//Disable MAC initial suspend, Reset UHC
    WREG_B      (MS_BUS_RIU_ADDR + (0x113800 << 1)), 0x28       @//Release UHC reset, enable UHC and OTG XIU function

@//================================================================================================
                                                                @//Module: utmi1 (0x1039)
    WREG        (MS_BUS_RIU_ADDR + (0x103922 << 1)), 0x2088     @// PLL_TEST[30:28]:
                                                                @// PLL_TEST[23] CLK480 to digital output source selection
    WREG        (MS_BUS_RIU_ADDR + (0x103920 << 1)), 0x8051     @// PLL_TEST[15]: Bypass 480MHz clock divider
                                                                @// PLL_TEST[7:4]: 5b0101_0 for 1.0x
                                                                @// PLL_TEST[0]: 1: synthesizer clock, 2b11, 0: XIN_C

    WREG        (MS_BUS_RIU_ADDR + (0x103902 << 1)), 0x2084     @//Enable CLK12_SEL bit <2> for select low voltage crystal clock
    WREG        (MS_BUS_RIU_ADDR + (0x103908 << 1)), 0x040f     @//Enable band-gap current
    WREG        (MS_BUS_RIU_ADDR + (0x103900 << 1)), 0x6bc3     @//reg_pdn: bit<15>, bit <2> ref_pdn  # Turn on reference voltage and regulator
    DELAYUS     1000

    WREG        (MS_BUS_RIU_ADDR + (0x103900 << 1)), 0x69c3     @//Turn on UPLL, reg_pdn: bit<9>
    DELAYUS     2000

    WREG        (MS_BUS_RIU_ADDR + (0x103900 << 1)), 0x0001     @//Turn all (including hs_current) use override mode

@//================================================================================================
                                                                @//Module: usb3.0
                                                                @//Module: utmi (0x1223)
    WREG        (MS_BUS_RIU_ADDR + (0x122322 << 1)), 0x2088     @// PLL_TEST[30:28]:
                                                                @// PLL_TEST[23] CLK480 to digital output source selection
    WREG        (MS_BUS_RIU_ADDR + (0x122320 << 1)), 0x8051     @// PLL_TEST[15]: Bypass 480MHz clock divider
                                                                @// PLL_TEST[7:4]: 5b0101_0 for 1.0x
                                                                @// PLL_TEST[0]: 1: synthesizer clock, 2b11, 0: XIN_C

    WREG        (MS_BUS_RIU_ADDR + (0x122302 << 1)), 0x2084     @//Enable CLK12_SEL bit <2> for select low voltage crystal clock
    WREG        (MS_BUS_RIU_ADDR + (0x122308 << 1)), 0x040f     @//Enable band-gap current
    WREG        (MS_BUS_RIU_ADDR + (0x122300 << 1)), 0x6bc3     @//reg_pdn: bit<15>, bit <2> ref_pdn  # Turn on reference voltage and regulator
    DELAYUS     1000

    WREG        (MS_BUS_RIU_ADDR + (0x122300 << 1)), 0x69c3     @//Turn on UPLL, reg_pdn: bit<9>
    DELAYUS     2000

    WREG        (MS_BUS_RIU_ADDR + (0x122300 << 1)), 0x0001     @//Turn all (including hs_current) use override mode

@//================================================================================================

    bx          lr

    .size       BootRom_InitPll,.-BootRom_InitPll

    .end

