//<MStar Software>
//******************************************************************************
// MStar Software
// Copyright (c) 2010 - 2012 MStar Semiconductor, Inc. All rights reserved.
// All software, firmware and related documentation herein ("MStar Software") are
// intellectual property of MStar Semiconductor, Inc. ("MStar") and protected by
// law, including, but not limited to, copyright law and international treaties.
// Any use, modification, reproduction, retransmission, or republication of all 
// or part of MStar Software is expressly prohibited, unless prior written 
// permission has been granted by MStar. 
//
// By accessing, browsing and/or using MStar Software, you acknowledge that you
// have read, understood, and agree, to be bound by below terms ("Terms") and to
// comply with all applicable laws and regulations:
//
// 1. MStar shall retain any and all right, ownership and interest to MStar
//    Software and any modification/derivatives thereof.
//    No right, ownership, or interest to MStar Software and any
//    modification/derivatives thereof is transferred to you under Terms.
//
// 2. You understand that MStar Software might include, incorporate or be
//    supplied together with third party`s software and the use of MStar
//    Software may require additional licenses from third parties.  
//    Therefore, you hereby agree it is your sole responsibility to separately
//    obtain any and all third party right and license necessary for your use of
//    such third party`s software. 
//
// 3. MStar Software and any modification/derivatives thereof shall be deemed as
//    MStar`s confidential information and you agree to keep MStar`s 
//    confidential information in strictest confidence and not disclose to any
//    third party.  
//
// 4. MStar Software is provided on an "AS IS" basis without warranties of any
//    kind. Any warranties are hereby expressly disclaimed by MStar, including
//    without limitation, any warranties of merchantability, non-infringement of
//    intellectual property rights, fitness for a particular purpose, error free
//    and in conformity with any international standard.  You agree to waive any
//    claim against MStar for any loss, damage, cost or expense that you may
//    incur related to your use of MStar Software.
//    In no event shall MStar be liable for any direct, indirect, incidental or
//    consequential damages, including without limitation, lost of profit or
//    revenues, lost or damage of data, and unauthorized system use.
//    You agree that this Section 4 shall still apply without being affected
//    even if MStar Software has been modified by MStar in accordance with your
//    request or instruction for your use, except otherwise agreed by both
//    parties in writing.
//
// 5. If requested, MStar may from time to time provide technical supports or
//    services in relation with MStar Software to you for your use of
//    MStar Software in conjunction with your or your customer`s product
//    ("Services").
//    You understand and agree that, except otherwise agreed by both parties in
//    writing, Services are provided on an "AS IS" basis and the warranty
//    disclaimer set forth in Section 4 above shall apply.  
//
// 6. Nothing contained herein shall be construed as by implication, estoppels
//    or otherwise:
//    (a) conferring any license or right to use MStar name, trademark, service
//        mark, symbol or any other identification;
//    (b) obligating MStar or any of its affiliates to furnish any person,
//        including without limitation, you and your customers, any assistance
//        of any kind whatsoever, or any information; or 
//    (c) conferring any license or right under any intellectual property right.
//
// 7. These terms shall be governed by and construed in accordance with the laws
//    of Taiwan, R.O.C., excluding its conflict of law rules.
//    Any and all dispute arising out hereof or related hereto shall be finally
//    settled by arbitration referred to the Chinese Arbitration Association,
//    Taipei in accordance with the ROC Arbitration Law and the Arbitration
//    Rules of the Association by three (3) arbitrators appointed in accordance
//    with the said Rules.
//    The place of arbitration shall be in Taipei, Taiwan and the language shall
//    be English.  
//    The arbitration award shall be final and binding to both parties.
//
//******************************************************************************
//<MStar Software>
////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2006-2009 MStar Semiconductor, Inc.
// All rights reserved.
//
// Unless otherwise stipulated in writing, any and all information contained
// herein regardless in any format shall remain the sole proprietary of
// MStar Semiconductor Inc. and be kept in strict confidence
// ("MStar Confidential Information") by the recipient.
// Any unauthorized act including without limitation unauthorized disclosure,
// copying, use, reproduction, sale, distribution, modification, disassembling,
// reverse engineering and compiling of the contents of MStar Confidential
// Information is unlawful and strictly prohibited. MStar hereby reserves the
// rights to any and all damages, losses, costs and expenses resulting therefrom.
//
////////////////////////////////////////////////////////////////////////////////

// This file is generated by script, please do not edit it directly 
#ifndef _MSD804KKX_H_
#define _MSD804KKX_H_

#define PAD_NC 9999
#define PAD_GND 0

#define BALL_R5 PAD_HOTPLUGD
#define PAD_HOTPLUGD 26
#define GPIO_PAD_26 GPIO25
#ifndef BALL_R5_IS_GPIO
#define BALL_R5_IS_GPIO 0
#endif 
#ifndef PAD_HOTPLUGD_IS_GPIO
#define PAD_HOTPLUGD_IS_GPIO BALL_R5_IS_GPIO
#endif 

#define BALL_U5 PAD_GPIO_PM15
#define PAD_GPIO_PM15 22
#define GPIO_PAD_22 GPIO21
#ifndef BALL_U5_IS_GPIO
#define BALL_U5_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM15_IS_GPIO
#define PAD_GPIO_PM15_IS_GPIO BALL_U5_IS_GPIO
#endif 

#define BALL_AB2 PAD_TGPIO0
#define PAD_TGPIO0 77
#define GPIO_PAD_77 GPIO76
#ifndef BALL_AB2_IS_GPIO
#define BALL_AB2_IS_GPIO 0
#endif 
#ifndef PAD_TGPIO0_IS_GPIO
#define PAD_TGPIO0_IS_GPIO BALL_AB2_IS_GPIO
#endif 

#define BALL_AC2 PAD_TGPIO1
#define PAD_TGPIO1 78
#define GPIO_PAD_78 GPIO77
#ifndef BALL_AC2_IS_GPIO
#define BALL_AC2_IS_GPIO 0
#endif 
#ifndef PAD_TGPIO1_IS_GPIO
#define PAD_TGPIO1_IS_GPIO BALL_AC2_IS_GPIO
#endif 

#define BALL_AE6 PAD_TGPIO2
#define PAD_TGPIO2 79
#define GPIO_PAD_79 GPIO78
#ifndef BALL_AE6_IS_GPIO
#define BALL_AE6_IS_GPIO 0
#endif 
#ifndef PAD_TGPIO2_IS_GPIO
#define PAD_TGPIO2_IS_GPIO BALL_AE6_IS_GPIO
#endif 

#define BALL_AD6 PAD_TGPIO3
#define PAD_TGPIO3 80
#define GPIO_PAD_80 GPIO79
#ifndef BALL_AD6_IS_GPIO
#define BALL_AD6_IS_GPIO 0
#endif 
#ifndef PAD_TGPIO3_IS_GPIO
#define PAD_TGPIO3_IS_GPIO BALL_AD6_IS_GPIO
#endif 

#define BALL_AE8 PAD_DDCDC_DA
#define PAD_DDCDC_DA 32
#define GPIO_PAD_32 GPIO31
#ifndef BALL_AE8_IS_GPIO
#define BALL_AE8_IS_GPIO 0
#endif 
#ifndef PAD_DDCDC_DA_IS_GPIO
#define PAD_DDCDC_DA_IS_GPIO BALL_AE8_IS_GPIO
#endif 

#define BALL_AD8 PAD_DDCDC_CK
#define PAD_DDCDC_CK 31
#define GPIO_PAD_31 GPIO30
#ifndef BALL_AD8_IS_GPIO
#define BALL_AD8_IS_GPIO 0
#endif 
#ifndef PAD_DDCDC_CK_IS_GPIO
#define PAD_DDCDC_CK_IS_GPIO BALL_AD8_IS_GPIO
#endif 

#define BALL_AC8 PAD_HOTPLUGC
#define PAD_HOTPLUGC 25
#define GPIO_PAD_25 GPIO24
#ifndef BALL_AC8_IS_GPIO
#define BALL_AC8_IS_GPIO 0
#endif 
#ifndef PAD_HOTPLUGC_IS_GPIO
#define PAD_HOTPLUGC_IS_GPIO BALL_AC8_IS_GPIO
#endif 

#define BALL_AC19 PAD_NAND_REZ
#define PAD_NAND_REZ 143
#define GPIO_PAD_143 GPIO142
#ifndef BALL_AC19_IS_GPIO
#define BALL_AC19_IS_GPIO 0
#endif 
#ifndef PAD_NAND_REZ_IS_GPIO
#define PAD_NAND_REZ_IS_GPIO BALL_AC19_IS_GPIO
#endif 

#define BALL_AC18 PAD_NAND_CLE
#define PAD_NAND_CLE 140
#define GPIO_PAD_140 GPIO139
#ifndef BALL_AC18_IS_GPIO
#define BALL_AC18_IS_GPIO 0
#endif 
#ifndef PAD_NAND_CLE_IS_GPIO
#define PAD_NAND_CLE_IS_GPIO BALL_AC18_IS_GPIO
#endif 

#define BALL_AE17 PAD_NAND_ALE
#define PAD_NAND_ALE 145
#define GPIO_PAD_145 GPIO144
#ifndef BALL_AE17_IS_GPIO
#define BALL_AE17_IS_GPIO 0
#endif 
#ifndef PAD_NAND_ALE_IS_GPIO
#define PAD_NAND_ALE_IS_GPIO BALL_AE17_IS_GPIO
#endif 

#define BALL_AD18 PAD_NAND_CEZ
#define PAD_NAND_CEZ 141
#define GPIO_PAD_141 GPIO140
#ifndef BALL_AD18_IS_GPIO
#define BALL_AD18_IS_GPIO 0
#endif 
#ifndef PAD_NAND_CEZ_IS_GPIO
#define PAD_NAND_CEZ_IS_GPIO BALL_AD18_IS_GPIO
#endif 

#define BALL_AA10 PAD_TS0_VLD
#define PAD_TS0_VLD 89
#define GPIO_PAD_89 GPIO88
#ifndef BALL_AA10_IS_GPIO
#define BALL_AA10_IS_GPIO 0
#endif 
#ifndef PAD_TS0_VLD_IS_GPIO
#define PAD_TS0_VLD_IS_GPIO BALL_AA10_IS_GPIO
#endif 

#define BALL_AE18 PAD_NAND_CEZ1
#define PAD_NAND_CEZ1 142
#define GPIO_PAD_142 GPIO141
#ifndef BALL_AE18_IS_GPIO
#define BALL_AE18_IS_GPIO 0
#endif 
#ifndef PAD_NAND_CEZ1_IS_GPIO
#define PAD_NAND_CEZ1_IS_GPIO BALL_AE18_IS_GPIO
#endif 

#define BALL_Y14 PAD_TS0_CLK
#define PAD_TS0_CLK 91
#define GPIO_PAD_91 GPIO90
#ifndef BALL_Y14_IS_GPIO
#define BALL_Y14_IS_GPIO 0
#endif 
#ifndef PAD_TS0_CLK_IS_GPIO
#define PAD_TS0_CLK_IS_GPIO BALL_Y14_IS_GPIO
#endif 

#define BALL_AC17 PAD_NAND_WPZ
#define PAD_NAND_WPZ 197
#define GPIO_PAD_197 GPIO196
#ifndef BALL_AC17_IS_GPIO
#define BALL_AC17_IS_GPIO 0
#endif 
#ifndef PAD_NAND_WPZ_IS_GPIO
#define PAD_NAND_WPZ_IS_GPIO BALL_AC17_IS_GPIO
#endif 

#define BALL_Y12 PAD_TS0_SYNC
#define PAD_TS0_SYNC 90
#define GPIO_PAD_90 GPIO89
#ifndef BALL_Y12_IS_GPIO
#define BALL_Y12_IS_GPIO 0
#endif 
#ifndef PAD_TS0_SYNC_IS_GPIO
#define PAD_TS0_SYNC_IS_GPIO BALL_Y12_IS_GPIO
#endif 

#define BALL_AD17 PAD_NAND_WEZ
#define PAD_NAND_WEZ 144
#define GPIO_PAD_144 GPIO143
#ifndef BALL_AD17_IS_GPIO
#define BALL_AD17_IS_GPIO 0
#endif 
#ifndef PAD_NAND_WEZ_IS_GPIO
#define PAD_NAND_WEZ_IS_GPIO BALL_AD17_IS_GPIO
#endif 

#define BALL_AB12 PAD_TS0_D3
#define PAD_TS0_D3 84
#define GPIO_PAD_84 GPIO83
#ifndef BALL_AB12_IS_GPIO
#define BALL_AB12_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D3_IS_GPIO
#define PAD_TS0_D3_IS_GPIO BALL_AB12_IS_GPIO
#endif 

#define BALL_AD19 PAD_NAND_RBZ
#define PAD_NAND_RBZ 146
#define GPIO_PAD_146 GPIO145
#ifndef BALL_AD19_IS_GPIO
#define BALL_AD19_IS_GPIO 0
#endif 
#ifndef PAD_NAND_RBZ_IS_GPIO
#define PAD_NAND_RBZ_IS_GPIO BALL_AD19_IS_GPIO
#endif 

#define BALL_AA14 PAD_TS0_D4
#define PAD_TS0_D4 85
#define GPIO_PAD_85 GPIO84
#ifndef BALL_AA14_IS_GPIO
#define BALL_AA14_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D4_IS_GPIO
#define PAD_TS0_D4_IS_GPIO BALL_AA14_IS_GPIO
#endif 

#define BALL_Y11 PAD_TS0_D1
#define PAD_TS0_D1 82
#define GPIO_PAD_82 GPIO81
#ifndef BALL_Y11_IS_GPIO
#define BALL_Y11_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D1_IS_GPIO
#define PAD_TS0_D1_IS_GPIO BALL_Y11_IS_GPIO
#endif 

#define BALL_Y13 PAD_TS0_D0
#define PAD_TS0_D0 81
#define GPIO_PAD_81 GPIO80
#ifndef BALL_Y13_IS_GPIO
#define BALL_Y13_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D0_IS_GPIO
#define PAD_TS0_D0_IS_GPIO BALL_Y13_IS_GPIO
#endif 

#define BALL_AA12 PAD_TS0_D2
#define PAD_TS0_D2 83
#define GPIO_PAD_83 GPIO82
#ifndef BALL_AA12_IS_GPIO
#define BALL_AA12_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D2_IS_GPIO
#define PAD_TS0_D2_IS_GPIO BALL_AA12_IS_GPIO
#endif 

#define BALL_AA13 PAD_TS0_D6
#define PAD_TS0_D6 87
#define GPIO_PAD_87 GPIO86
#ifndef BALL_AA13_IS_GPIO
#define BALL_AA13_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D6_IS_GPIO
#define PAD_TS0_D6_IS_GPIO BALL_AA13_IS_GPIO
#endif 

#define BALL_AB14 PAD_TS0_D5
#define PAD_TS0_D5 86
#define GPIO_PAD_86 GPIO85
#ifndef BALL_AB14_IS_GPIO
#define BALL_AB14_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D5_IS_GPIO
#define PAD_TS0_D5_IS_GPIO BALL_AB14_IS_GPIO
#endif 

#define BALL_AB11 PAD_TS0_D7
#define PAD_TS0_D7 88
#define GPIO_PAD_88 GPIO87
#ifndef BALL_AB11_IS_GPIO
#define BALL_AB11_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D7_IS_GPIO
#define PAD_TS0_D7_IS_GPIO BALL_AB11_IS_GPIO
#endif 

#define BALL_AD12 PAD_TS1_D5
#define PAD_TS1_D5 97
#define GPIO_PAD_97 GPIO96
#ifndef BALL_AD12_IS_GPIO
#define BALL_AD12_IS_GPIO 0
#endif 
#ifndef PAD_TS1_D5_IS_GPIO
#define PAD_TS1_D5_IS_GPIO BALL_AD12_IS_GPIO
#endif 

#define BALL_AD14 PAD_TS1_D7
#define PAD_TS1_D7 99
#define GPIO_PAD_99 GPIO98
#ifndef BALL_AD14_IS_GPIO
#define BALL_AD14_IS_GPIO 0
#endif 
#ifndef PAD_TS1_D7_IS_GPIO
#define PAD_TS1_D7_IS_GPIO BALL_AD14_IS_GPIO
#endif 

#define BALL_AC14 PAD_TS1_D4
#define PAD_TS1_D4 96
#define GPIO_PAD_96 GPIO95
#ifndef BALL_AC14_IS_GPIO
#define BALL_AC14_IS_GPIO 0
#endif 
#ifndef PAD_TS1_D4_IS_GPIO
#define PAD_TS1_D4_IS_GPIO BALL_AC14_IS_GPIO
#endif 

#define BALL_AD13 PAD_TS1_D6
#define PAD_TS1_D6 98
#define GPIO_PAD_98 GPIO97
#ifndef BALL_AD13_IS_GPIO
#define BALL_AD13_IS_GPIO 0
#endif 
#ifndef PAD_TS1_D6_IS_GPIO
#define PAD_TS1_D6_IS_GPIO BALL_AD13_IS_GPIO
#endif 

#define BALL_AC13 PAD_TS1_D3
#define PAD_TS1_D3 95
#define GPIO_PAD_95 GPIO94
#ifndef BALL_AC13_IS_GPIO
#define BALL_AC13_IS_GPIO 0
#endif 
#ifndef PAD_TS1_D3_IS_GPIO
#define PAD_TS1_D3_IS_GPIO BALL_AC13_IS_GPIO
#endif 

#define BALL_AC15 PAD_TS1_CLK
#define PAD_TS1_CLK 102
#define GPIO_PAD_102 GPIO101
#ifndef BALL_AC15_IS_GPIO
#define BALL_AC15_IS_GPIO 0
#endif 
#ifndef PAD_TS1_CLK_IS_GPIO
#define PAD_TS1_CLK_IS_GPIO BALL_AC15_IS_GPIO
#endif 

#define BALL_AE14 PAD_TS1_D2
#define PAD_TS1_D2 94
#define GPIO_PAD_94 GPIO93
#ifndef BALL_AE14_IS_GPIO
#define BALL_AE14_IS_GPIO 0
#endif 
#ifndef PAD_TS1_D2_IS_GPIO
#define PAD_TS1_D2_IS_GPIO BALL_AE14_IS_GPIO
#endif 

#define BALL_AC16 PAD_TS1_SYNC
#define PAD_TS1_SYNC 101
#define GPIO_PAD_101 GPIO100
#ifndef BALL_AC16_IS_GPIO
#define BALL_AC16_IS_GPIO 0
#endif 
#ifndef PAD_TS1_SYNC_IS_GPIO
#define PAD_TS1_SYNC_IS_GPIO BALL_AC16_IS_GPIO
#endif 

#define BALL_AE15 PAD_TS1_D1
#define PAD_TS1_D1 93
#define GPIO_PAD_93 GPIO92
#ifndef BALL_AE15_IS_GPIO
#define BALL_AE15_IS_GPIO 0
#endif 
#ifndef PAD_TS1_D1_IS_GPIO
#define PAD_TS1_D1_IS_GPIO BALL_AE15_IS_GPIO
#endif 

#define BALL_AD15 PAD_TS1_VLD
#define PAD_TS1_VLD 100
#define GPIO_PAD_100 GPIO99
#ifndef BALL_AD15_IS_GPIO
#define BALL_AD15_IS_GPIO 0
#endif 
#ifndef PAD_TS1_VLD_IS_GPIO
#define PAD_TS1_VLD_IS_GPIO BALL_AD15_IS_GPIO
#endif 

#define BALL_AD16 PAD_TS1_D0
#define PAD_TS1_D0 92
#define GPIO_PAD_92 GPIO91
#ifndef BALL_AD16_IS_GPIO
#define BALL_AD16_IS_GPIO 0
#endif 
#ifndef PAD_TS1_D0_IS_GPIO
#define PAD_TS1_D0_IS_GPIO BALL_AD16_IS_GPIO
#endif 

#define BALL_AA15 PAD_PCM_D4
#define PAD_PCM_D4 123
#define GPIO_PAD_123 GPIO122
#ifndef BALL_AA15_IS_GPIO
#define BALL_AA15_IS_GPIO 0
#endif 
#ifndef PAD_PCM_D4_IS_GPIO
#define PAD_PCM_D4_IS_GPIO BALL_AA15_IS_GPIO
#endif 

#define BALL_AB20 PAD_PCM_A10
#define PAD_PCM_A10 118
#define GPIO_PAD_118 GPIO117
#ifndef BALL_AB20_IS_GPIO
#define BALL_AB20_IS_GPIO 0
#endif 
#ifndef PAD_PCM_A10_IS_GPIO
#define PAD_PCM_A10_IS_GPIO BALL_AB20_IS_GPIO
#endif 

#define BALL_AB21 PAD_PCM_D6
#define PAD_PCM_D6 121
#define GPIO_PAD_121 GPIO120
#ifndef BALL_AB21_IS_GPIO
#define BALL_AB21_IS_GPIO 0
#endif 
#ifndef PAD_PCM_D6_IS_GPIO
#define PAD_PCM_D6_IS_GPIO BALL_AB21_IS_GPIO
#endif 

#define BALL_AB15 PAD_PCM_OE_N
#define PAD_PCM_OE_N 117
#define GPIO_PAD_117 GPIO116
#ifndef BALL_AB15_IS_GPIO
#define BALL_AB15_IS_GPIO 0
#endif 
#ifndef PAD_PCM_OE_N_IS_GPIO
#define PAD_PCM_OE_N_IS_GPIO BALL_AB15_IS_GPIO
#endif 

#define BALL_AB18 PAD_PCM_A3
#define PAD_PCM_A3 125
#define GPIO_PAD_125 GPIO124
#ifndef BALL_AB18_IS_GPIO
#define BALL_AB18_IS_GPIO 0
#endif 
#ifndef PAD_PCM_A3_IS_GPIO
#define PAD_PCM_A3_IS_GPIO BALL_AB18_IS_GPIO
#endif 

#define BALL_AE20 PAD_PCM_D3
#define PAD_PCM_D3 124
#define GPIO_PAD_124 GPIO123
#ifndef BALL_AE20_IS_GPIO
#define BALL_AE20_IS_GPIO 0
#endif 
#ifndef PAD_PCM_D3_IS_GPIO
#define PAD_PCM_D3_IS_GPIO BALL_AE20_IS_GPIO
#endif 

#define BALL_W22 PAD_PCM_A2
#define PAD_PCM_A2 126
#define GPIO_PAD_126 GPIO125
#ifndef BALL_W22_IS_GPIO
#define BALL_W22_IS_GPIO 0
#endif 
#ifndef PAD_PCM_A2_IS_GPIO
#define PAD_PCM_A2_IS_GPIO BALL_W22_IS_GPIO
#endif 

#define BALL_AE21 PAD_PCM_D5
#define PAD_PCM_D5 122
#define GPIO_PAD_122 GPIO121
#ifndef BALL_AE21_IS_GPIO
#define BALL_AE21_IS_GPIO 0
#endif 
#ifndef PAD_PCM_D5_IS_GPIO
#define PAD_PCM_D5_IS_GPIO BALL_AE21_IS_GPIO
#endif 

#define BALL_Y20 PAD_PCM_REG_N
#define PAD_PCM_REG_N 127
#define GPIO_PAD_127 GPIO126
#ifndef BALL_Y20_IS_GPIO
#define BALL_Y20_IS_GPIO 0
#endif 
#ifndef PAD_PCM_REG_N_IS_GPIO
#define PAD_PCM_REG_N_IS_GPIO BALL_Y20_IS_GPIO
#endif 

#define BALL_Y15 PAD_PCM_D7
#define PAD_PCM_D7 120
#define GPIO_PAD_120 GPIO119
#ifndef BALL_Y15_IS_GPIO
#define BALL_Y15_IS_GPIO 0
#endif 
#ifndef PAD_PCM_D7_IS_GPIO
#define PAD_PCM_D7_IS_GPIO BALL_Y15_IS_GPIO
#endif 

#define BALL_V20 PAD_PCM_A1
#define PAD_PCM_A1 128
#define GPIO_PAD_128 GPIO127
#ifndef BALL_V20_IS_GPIO
#define BALL_V20_IS_GPIO 0
#endif 
#ifndef PAD_PCM_A1_IS_GPIO
#define PAD_PCM_A1_IS_GPIO BALL_V20_IS_GPIO
#endif 

#define BALL_AD21 PAD_PCM_CE_N
#define PAD_PCM_CE_N 119
#define GPIO_PAD_119 GPIO118
#ifndef BALL_AD21_IS_GPIO
#define BALL_AD21_IS_GPIO 0
#endif 
#ifndef PAD_PCM_CE_N_IS_GPIO
#define PAD_PCM_CE_N_IS_GPIO BALL_AD21_IS_GPIO
#endif 

#define BALL_W20 PAD_PCM_A0
#define PAD_PCM_A0 129
#define GPIO_PAD_129 GPIO128
#ifndef BALL_W20_IS_GPIO
#define BALL_W20_IS_GPIO 0
#endif 
#ifndef PAD_PCM_A0_IS_GPIO
#define PAD_PCM_A0_IS_GPIO BALL_W20_IS_GPIO
#endif 

#define BALL_AA16 PAD_PCM_A11
#define PAD_PCM_A11 116
#define GPIO_PAD_116 GPIO115
#ifndef BALL_AA16_IS_GPIO
#define BALL_AA16_IS_GPIO 0
#endif 
#ifndef PAD_PCM_A11_IS_GPIO
#define PAD_PCM_A11_IS_GPIO BALL_AA16_IS_GPIO
#endif 

#define BALL_W21 PAD_PCM_D0
#define PAD_PCM_D0 130
#define GPIO_PAD_130 GPIO129
#ifndef BALL_W21_IS_GPIO
#define BALL_W21_IS_GPIO 0
#endif 
#ifndef PAD_PCM_D0_IS_GPIO
#define PAD_PCM_D0_IS_GPIO BALL_W21_IS_GPIO
#endif 

#define BALL_AD22 PAD_PCM_IORD_N
#define PAD_PCM_IORD_N 115
#define GPIO_PAD_115 GPIO114
#ifndef BALL_AD22_IS_GPIO
#define BALL_AD22_IS_GPIO 0
#endif 
#ifndef PAD_PCM_IORD_N_IS_GPIO
#define PAD_PCM_IORD_N_IS_GPIO BALL_AD22_IS_GPIO
#endif 

#define BALL_AA18 PAD_PCM_D1
#define PAD_PCM_D1 131
#define GPIO_PAD_131 GPIO130
#ifndef BALL_AA18_IS_GPIO
#define BALL_AA18_IS_GPIO 0
#endif 
#ifndef PAD_PCM_D1_IS_GPIO
#define PAD_PCM_D1_IS_GPIO BALL_AA18_IS_GPIO
#endif 

#define BALL_AB19 PAD_PCM_A9
#define PAD_PCM_A9 114
#define GPIO_PAD_114 GPIO113
#ifndef BALL_AB19_IS_GPIO
#define BALL_AB19_IS_GPIO 0
#endif 
#ifndef PAD_PCM_A9_IS_GPIO
#define PAD_PCM_A9_IS_GPIO BALL_AB19_IS_GPIO
#endif 

#define BALL_AB22 PAD_PCM_D2
#define PAD_PCM_D2 132
#define GPIO_PAD_132 GPIO131
#ifndef BALL_AB22_IS_GPIO
#define BALL_AB22_IS_GPIO 0
#endif 
#ifndef PAD_PCM_D2_IS_GPIO
#define PAD_PCM_D2_IS_GPIO BALL_AB22_IS_GPIO
#endif 

#define BALL_AD20 PAD_PCM_IOWR_N
#define PAD_PCM_IOWR_N 113
#define GPIO_PAD_113 GPIO112
#ifndef BALL_AD20_IS_GPIO
#define BALL_AD20_IS_GPIO 0
#endif 
#ifndef PAD_PCM_IOWR_N_IS_GPIO
#define PAD_PCM_IOWR_N_IS_GPIO BALL_AD20_IS_GPIO
#endif 

#define BALL_Y16 PAD_PCM_A8
#define PAD_PCM_A8 112
#define GPIO_PAD_112 GPIO111
#ifndef BALL_Y16_IS_GPIO
#define BALL_Y16_IS_GPIO 0
#endif 
#ifndef PAD_PCM_A8_IS_GPIO
#define PAD_PCM_A8_IS_GPIO BALL_Y16_IS_GPIO
#endif 

#define BALL_AA22 PAD_PCM_WE_N
#define PAD_PCM_WE_N 196
#define GPIO_PAD_196 GPIO195
#ifndef BALL_AA22_IS_GPIO
#define BALL_AA22_IS_GPIO 0
#endif 
#ifndef PAD_PCM_WE_N_IS_GPIO
#define PAD_PCM_WE_N_IS_GPIO BALL_AA22_IS_GPIO
#endif 

#define BALL_AC21 PAD_PCM_A13
#define PAD_PCM_A13 111
#define GPIO_PAD_111 GPIO110
#ifndef BALL_AC21_IS_GPIO
#define BALL_AC21_IS_GPIO 0
#endif 
#ifndef PAD_PCM_A13_IS_GPIO
#define PAD_PCM_A13_IS_GPIO BALL_AC21_IS_GPIO
#endif 

#define BALL_Y22 PAD_PCM_RESET
#define PAD_PCM_RESET 133
#define GPIO_PAD_133 GPIO132
#ifndef BALL_Y22_IS_GPIO
#define BALL_Y22_IS_GPIO 0
#endif 
#ifndef PAD_PCM_RESET_IS_GPIO
#define PAD_PCM_RESET_IS_GPIO BALL_Y22_IS_GPIO
#endif 

#define BALL_AA17 PAD_PCM_A14
#define PAD_PCM_A14 110
#define GPIO_PAD_110 GPIO109
#ifndef BALL_AA17_IS_GPIO
#define BALL_AA17_IS_GPIO 0
#endif 
#ifndef PAD_PCM_A14_IS_GPIO
#define PAD_PCM_A14_IS_GPIO BALL_AA17_IS_GPIO
#endif 

#define BALL_AA21 PAD_PCM_A5
#define PAD_PCM_A5 105
#define GPIO_PAD_105 GPIO104
#ifndef BALL_AA21_IS_GPIO
#define BALL_AA21_IS_GPIO 0
#endif 
#ifndef PAD_PCM_A5_IS_GPIO
#define PAD_PCM_A5_IS_GPIO BALL_AA21_IS_GPIO
#endif 

#define BALL_AC20 PAD_PCM_IRQA_N
#define PAD_PCM_IRQA_N 109
#define GPIO_PAD_109 GPIO108
#ifndef BALL_AC20_IS_GPIO
#define BALL_AC20_IS_GPIO 0
#endif 
#ifndef PAD_PCM_IRQA_N_IS_GPIO
#define PAD_PCM_IRQA_N_IS_GPIO BALL_AC20_IS_GPIO
#endif 

#define BALL_Y21 PAD_PCM_WAIT_N
#define PAD_PCM_WAIT_N 104
#define GPIO_PAD_104 GPIO103
#ifndef BALL_Y21_IS_GPIO
#define BALL_Y21_IS_GPIO 0
#endif 
#ifndef PAD_PCM_WAIT_N_IS_GPIO
#define PAD_PCM_WAIT_N_IS_GPIO BALL_Y21_IS_GPIO
#endif 

#define BALL_AA19 PAD_PCM_A12
#define PAD_PCM_A12 108
#define GPIO_PAD_108 GPIO107
#ifndef BALL_AA19_IS_GPIO
#define BALL_AA19_IS_GPIO 0
#endif 
#ifndef PAD_PCM_A12_IS_GPIO
#define PAD_PCM_A12_IS_GPIO BALL_AA19_IS_GPIO
#endif 

#define BALL_AA20 PAD_PCM_A4
#define PAD_PCM_A4 103
#define GPIO_PAD_103 GPIO102
#ifndef BALL_AA20_IS_GPIO
#define BALL_AA20_IS_GPIO 0
#endif 
#ifndef PAD_PCM_A4_IS_GPIO
#define PAD_PCM_A4_IS_GPIO BALL_AA20_IS_GPIO
#endif 

#define BALL_AB17 PAD_PCM_A7
#define PAD_PCM_A7 107
#define GPIO_PAD_107 GPIO106
#ifndef BALL_AB17_IS_GPIO
#define BALL_AB17_IS_GPIO 0
#endif 
#ifndef PAD_PCM_A7_IS_GPIO
#define PAD_PCM_A7_IS_GPIO BALL_AB17_IS_GPIO
#endif 

#define BALL_V21 PAD_PCM2_IRQA_N
#define PAD_PCM2_IRQA_N 136
#define GPIO_PAD_136 GPIO135
#ifndef BALL_V21_IS_GPIO
#define BALL_V21_IS_GPIO 0
#endif 
#ifndef PAD_PCM2_IRQA_N_IS_GPIO
#define PAD_PCM2_IRQA_N_IS_GPIO BALL_V21_IS_GPIO
#endif 

#define BALL_Y19 PAD_PCM_A6
#define PAD_PCM_A6 106
#define GPIO_PAD_106 GPIO105
#ifndef BALL_Y19_IS_GPIO
#define BALL_Y19_IS_GPIO 0
#endif 
#ifndef PAD_PCM_A6_IS_GPIO
#define PAD_PCM_A6_IS_GPIO BALL_Y19_IS_GPIO
#endif 

#define BALL_T20 PAD_PCM2_WAIT_N
#define PAD_PCM2_WAIT_N 137
#define GPIO_PAD_137 GPIO136
#ifndef BALL_T20_IS_GPIO
#define BALL_T20_IS_GPIO 0
#endif 
#ifndef PAD_PCM2_WAIT_N_IS_GPIO
#define PAD_PCM2_WAIT_N_IS_GPIO BALL_T20_IS_GPIO
#endif 

#define BALL_Y18 PAD_PCM_CD_N
#define PAD_PCM_CD_N 134
#define GPIO_PAD_134 GPIO133
#ifndef BALL_Y18_IS_GPIO
#define BALL_Y18_IS_GPIO 0
#endif 
#ifndef PAD_PCM_CD_N_IS_GPIO
#define PAD_PCM_CD_N_IS_GPIO BALL_Y18_IS_GPIO
#endif 

#define BALL_U22 PAD_PCM2_RESET
#define PAD_PCM2_RESET 138
#define GPIO_PAD_138 GPIO137
#ifndef BALL_U22_IS_GPIO
#define BALL_U22_IS_GPIO 0
#endif 
#ifndef PAD_PCM2_RESET_IS_GPIO
#define PAD_PCM2_RESET_IS_GPIO BALL_U22_IS_GPIO
#endif 

#define BALL_U21 PAD_PCM2_CE_N
#define PAD_PCM2_CE_N 135
#define GPIO_PAD_135 GPIO134
#ifndef BALL_U21_IS_GPIO
#define BALL_U21_IS_GPIO 0
#endif 
#ifndef PAD_PCM2_CE_N_IS_GPIO
#define PAD_PCM2_CE_N_IS_GPIO BALL_U21_IS_GPIO
#endif 

#define BALL_R20 PAD_PCM2_CD_N
#define PAD_PCM2_CD_N 139
#define GPIO_PAD_139 GPIO138
#ifndef BALL_R20_IS_GPIO
#define BALL_R20_IS_GPIO 0
#endif 
#ifndef PAD_PCM2_CD_N_IS_GPIO
#define PAD_PCM2_CD_N_IS_GPIO BALL_R20_IS_GPIO
#endif 

#define BALL_AD23 PAD_B_ODD0
#define PAD_B_ODD0 160
#define GPIO_PAD_160 GPIO159
#ifndef BALL_AD23_IS_GPIO
#define BALL_AD23_IS_GPIO 0
#endif 
#ifndef PAD_B_ODD0_IS_GPIO
#define PAD_B_ODD0_IS_GPIO BALL_AD23_IS_GPIO
#endif 

#define BALL_AC22 PAD_B_ODD1
#define PAD_B_ODD1 161
#define GPIO_PAD_161 GPIO160
#ifndef BALL_AC22_IS_GPIO
#define BALL_AC22_IS_GPIO 0
#endif 
#ifndef PAD_B_ODD1_IS_GPIO
#define PAD_B_ODD1_IS_GPIO BALL_AC22_IS_GPIO
#endif 

#define BALL_AC23 PAD_B_ODD2
#define PAD_B_ODD2 162
#define GPIO_PAD_162 GPIO161
#ifndef BALL_AC23_IS_GPIO
#define BALL_AC23_IS_GPIO 0
#endif 
#ifndef PAD_B_ODD2_IS_GPIO
#define PAD_B_ODD2_IS_GPIO BALL_AC23_IS_GPIO
#endif 

#define BALL_AE23 PAD_B_ODD3
#define PAD_B_ODD3 163
#define GPIO_PAD_163 GPIO162
#ifndef BALL_AE23_IS_GPIO
#define BALL_AE23_IS_GPIO 0
#endif 
#ifndef PAD_B_ODD3_IS_GPIO
#define PAD_B_ODD3_IS_GPIO BALL_AE23_IS_GPIO
#endif 

#define BALL_AD24 PAD_B_ODD4
#define PAD_B_ODD4 164
#define GPIO_PAD_164 GPIO163
#ifndef BALL_AD24_IS_GPIO
#define BALL_AD24_IS_GPIO 0
#endif 
#ifndef PAD_B_ODD4_IS_GPIO
#define PAD_B_ODD4_IS_GPIO BALL_AD24_IS_GPIO
#endif 

#define BALL_AE24 PAD_B_ODD5
#define PAD_B_ODD5 165
#define GPIO_PAD_165 GPIO164
#ifndef BALL_AE24_IS_GPIO
#define BALL_AE24_IS_GPIO 0
#endif 
#ifndef PAD_B_ODD5_IS_GPIO
#define PAD_B_ODD5_IS_GPIO BALL_AE24_IS_GPIO
#endif 

#define BALL_AC24 PAD_B_ODD6
#define PAD_B_ODD6 166
#define GPIO_PAD_166 GPIO165
#ifndef BALL_AC24_IS_GPIO
#define BALL_AC24_IS_GPIO 0
#endif 
#ifndef PAD_B_ODD6_IS_GPIO
#define PAD_B_ODD6_IS_GPIO BALL_AC24_IS_GPIO
#endif 

#define BALL_AD25 PAD_B_ODD7
#define PAD_B_ODD7 167
#define GPIO_PAD_167 GPIO166
#ifndef BALL_AD25_IS_GPIO
#define BALL_AD25_IS_GPIO 0
#endif 
#ifndef PAD_B_ODD7_IS_GPIO
#define PAD_B_ODD7_IS_GPIO BALL_AD25_IS_GPIO
#endif 

#define BALL_AB24 PAD_G_ODD0
#define PAD_G_ODD0 168
#define GPIO_PAD_168 GPIO167
#ifndef BALL_AB24_IS_GPIO
#define BALL_AB24_IS_GPIO 0
#endif 
#ifndef PAD_G_ODD0_IS_GPIO
#define PAD_G_ODD0_IS_GPIO BALL_AB24_IS_GPIO
#endif 

#define BALL_AC25 PAD_G_ODD1
#define PAD_G_ODD1 169
#define GPIO_PAD_169 GPIO168
#ifndef BALL_AC25_IS_GPIO
#define BALL_AC25_IS_GPIO 0
#endif 
#ifndef PAD_G_ODD1_IS_GPIO
#define PAD_G_ODD1_IS_GPIO BALL_AC25_IS_GPIO
#endif 

#define BALL_AB23 PAD_G_ODD2
#define PAD_G_ODD2 170
#define GPIO_PAD_170 GPIO169
#ifndef BALL_AB23_IS_GPIO
#define BALL_AB23_IS_GPIO 0
#endif 
#ifndef PAD_G_ODD2_IS_GPIO
#define PAD_G_ODD2_IS_GPIO BALL_AB23_IS_GPIO
#endif 

#define BALL_AB25 PAD_G_ODD3
#define PAD_G_ODD3 171
#define GPIO_PAD_171 GPIO170
#ifndef BALL_AB25_IS_GPIO
#define BALL_AB25_IS_GPIO 0
#endif 
#ifndef PAD_G_ODD3_IS_GPIO
#define PAD_G_ODD3_IS_GPIO BALL_AB25_IS_GPIO
#endif 

#define BALL_AA24 PAD_G_ODD4
#define PAD_G_ODD4 172
#define GPIO_PAD_172 GPIO171
#ifndef BALL_AA24_IS_GPIO
#define BALL_AA24_IS_GPIO 0
#endif 
#ifndef PAD_G_ODD4_IS_GPIO
#define PAD_G_ODD4_IS_GPIO BALL_AA24_IS_GPIO
#endif 

#define BALL_AA25 PAD_G_ODD5
#define PAD_G_ODD5 173
#define GPIO_PAD_173 GPIO172
#ifndef BALL_AA25_IS_GPIO
#define BALL_AA25_IS_GPIO 0
#endif 
#ifndef PAD_G_ODD5_IS_GPIO
#define PAD_G_ODD5_IS_GPIO BALL_AA25_IS_GPIO
#endif 

#define BALL_Y24 PAD_G_ODD6
#define PAD_G_ODD6 174
#define GPIO_PAD_174 GPIO173
#ifndef BALL_Y24_IS_GPIO
#define BALL_Y24_IS_GPIO 0
#endif 
#ifndef PAD_G_ODD6_IS_GPIO
#define PAD_G_ODD6_IS_GPIO BALL_Y24_IS_GPIO
#endif 

#define BALL_AA23 PAD_G_ODD7
#define PAD_G_ODD7 175
#define GPIO_PAD_175 GPIO174
#ifndef BALL_AA23_IS_GPIO
#define BALL_AA23_IS_GPIO 0
#endif 
#ifndef PAD_G_ODD7_IS_GPIO
#define PAD_G_ODD7_IS_GPIO BALL_AA23_IS_GPIO
#endif 

#define BALL_W24 PAD_R_ODD0
#define PAD_R_ODD0 176
#define GPIO_PAD_176 GPIO175
#ifndef BALL_W24_IS_GPIO
#define BALL_W24_IS_GPIO 0
#endif 
#ifndef PAD_R_ODD0_IS_GPIO
#define PAD_R_ODD0_IS_GPIO BALL_W24_IS_GPIO
#endif 

#define BALL_Y23 PAD_R_ODD1
#define PAD_R_ODD1 177
#define GPIO_PAD_177 GPIO176
#ifndef BALL_Y23_IS_GPIO
#define BALL_Y23_IS_GPIO 0
#endif 
#ifndef PAD_R_ODD1_IS_GPIO
#define PAD_R_ODD1_IS_GPIO BALL_Y23_IS_GPIO
#endif 

#define BALL_W23 PAD_R_ODD2
#define PAD_R_ODD2 178
#define GPIO_PAD_178 GPIO177
#ifndef BALL_W23_IS_GPIO
#define BALL_W23_IS_GPIO 0
#endif 
#ifndef PAD_R_ODD2_IS_GPIO
#define PAD_R_ODD2_IS_GPIO BALL_W23_IS_GPIO
#endif 

#define BALL_W25 PAD_R_ODD3
#define PAD_R_ODD3 179
#define GPIO_PAD_179 GPIO178
#ifndef BALL_W25_IS_GPIO
#define BALL_W25_IS_GPIO 0
#endif 
#ifndef PAD_R_ODD3_IS_GPIO
#define PAD_R_ODD3_IS_GPIO BALL_W25_IS_GPIO
#endif 

#define BALL_V24 PAD_R_ODD4
#define PAD_R_ODD4 180
#define GPIO_PAD_180 GPIO179
#ifndef BALL_V24_IS_GPIO
#define BALL_V24_IS_GPIO 0
#endif 
#ifndef PAD_R_ODD4_IS_GPIO
#define PAD_R_ODD4_IS_GPIO BALL_V24_IS_GPIO
#endif 

#define BALL_V25 PAD_R_ODD5
#define PAD_R_ODD5 181
#define GPIO_PAD_181 GPIO180
#ifndef BALL_V25_IS_GPIO
#define BALL_V25_IS_GPIO 0
#endif 
#ifndef PAD_R_ODD5_IS_GPIO
#define PAD_R_ODD5_IS_GPIO BALL_V25_IS_GPIO
#endif 

#define BALL_U24 PAD_R_ODD6
#define PAD_R_ODD6 182
#define GPIO_PAD_182 GPIO181
#ifndef BALL_U24_IS_GPIO
#define BALL_U24_IS_GPIO 0
#endif 
#ifndef PAD_R_ODD6_IS_GPIO
#define PAD_R_ODD6_IS_GPIO BALL_U24_IS_GPIO
#endif 

#define BALL_V23 PAD_R_ODD7
#define PAD_R_ODD7 183
#define GPIO_PAD_183 GPIO182
#ifndef BALL_V23_IS_GPIO
#define BALL_V23_IS_GPIO 0
#endif 
#ifndef PAD_R_ODD7_IS_GPIO
#define PAD_R_ODD7_IS_GPIO BALL_V23_IS_GPIO
#endif 

#define BALL_U23 PAD_LCK
#define PAD_LCK 192
#define GPIO_PAD_192 GPIO191
#ifndef BALL_U23_IS_GPIO
#define BALL_U23_IS_GPIO 0
#endif 
#ifndef PAD_LCK_IS_GPIO
#define PAD_LCK_IS_GPIO BALL_U23_IS_GPIO
#endif 

#define BALL_T24 PAD_LDE
#define PAD_LDE 193
#define GPIO_PAD_193 GPIO192
#ifndef BALL_T24_IS_GPIO
#define BALL_T24_IS_GPIO 0
#endif 
#ifndef PAD_LDE_IS_GPIO
#define PAD_LDE_IS_GPIO BALL_T24_IS_GPIO
#endif 

#define BALL_T23 PAD_LHSYNC
#define PAD_LHSYNC 194
#define GPIO_PAD_194 GPIO193
#ifndef BALL_T23_IS_GPIO
#define BALL_T23_IS_GPIO 0
#endif 
#ifndef PAD_LHSYNC_IS_GPIO
#define PAD_LHSYNC_IS_GPIO BALL_T23_IS_GPIO
#endif 

#define BALL_T25 PAD_LVSYNC
#define PAD_LVSYNC 195
#define GPIO_PAD_195 GPIO194
#ifndef BALL_T25_IS_GPIO
#define BALL_T25_IS_GPIO 0
#endif 
#ifndef PAD_LVSYNC_IS_GPIO
#define PAD_LVSYNC_IS_GPIO BALL_T25_IS_GPIO
#endif 

#define PAD_TCON7 9999
#ifndef PAD_TCON7_IS_GPIO
#define PAD_TCON7_IS_GPIO 0
#endif 

#define PAD_TCON6 9999
#ifndef PAD_TCON6_IS_GPIO
#define PAD_TCON6_IS_GPIO 0
#endif 

#define PAD_TCON5 9999
#ifndef PAD_TCON5_IS_GPIO
#define PAD_TCON5_IS_GPIO 0
#endif 

#define PAD_TCON4 9999
#ifndef PAD_TCON4_IS_GPIO
#define PAD_TCON4_IS_GPIO 0
#endif 

#define PAD_TCON3 9999
#ifndef PAD_TCON3_IS_GPIO
#define PAD_TCON3_IS_GPIO 0
#endif 

#define PAD_TCON2 9999
#ifndef PAD_TCON2_IS_GPIO
#define PAD_TCON2_IS_GPIO 0
#endif 

#define PAD_TCON1 9999
#ifndef PAD_TCON1_IS_GPIO
#define PAD_TCON1_IS_GPIO 0
#endif 

#define PAD_TCON0 9999
#ifndef PAD_TCON0_IS_GPIO
#define PAD_TCON0_IS_GPIO 0
#endif 

#define PAD_mini_LVDS0 9999
#ifndef PAD_mini_LVDS0_IS_GPIO
#define PAD_mini_LVDS0_IS_GPIO 0
#endif 

#define PAD_mini_LVDS1 9999
#ifndef PAD_mini_LVDS1_IS_GPIO
#define PAD_mini_LVDS1_IS_GPIO 0
#endif 

#define PAD_mini_LVDS2 9999
#ifndef PAD_mini_LVDS2_IS_GPIO
#define PAD_mini_LVDS2_IS_GPIO 0
#endif 

#define PAD_mini_LVDS3 9999
#ifndef PAD_mini_LVDS3_IS_GPIO
#define PAD_mini_LVDS3_IS_GPIO 0
#endif 

#define PAD_mini_LVDS4 9999
#ifndef PAD_mini_LVDS4_IS_GPIO
#define PAD_mini_LVDS4_IS_GPIO 0
#endif 

#define PAD_mini_LVDS5 9999
#ifndef PAD_mini_LVDS5_IS_GPIO
#define PAD_mini_LVDS5_IS_GPIO 0
#endif 

#define PAD_mini_LVDS6 9999
#ifndef PAD_mini_LVDS6_IS_GPIO
#define PAD_mini_LVDS6_IS_GPIO 0
#endif 

#define PAD_mini_LVDS7 9999
#ifndef PAD_mini_LVDS7_IS_GPIO
#define PAD_mini_LVDS7_IS_GPIO 0
#endif 

#define BALL_R23 PAD_VSYNC_LIKE
#define PAD_VSYNC_LIKE 147
#define GPIO_PAD_147 GPIO146
#ifndef BALL_R23_IS_GPIO
#define BALL_R23_IS_GPIO 0
#endif 
#ifndef PAD_VSYNC_LIKE_IS_GPIO
#define PAD_VSYNC_LIKE_IS_GPIO BALL_R23_IS_GPIO
#endif 

#define BALL_T22 PAD_SPI2_DI
#define PAD_SPI2_DI 203
#define GPIO_PAD_203 GPIO202
#ifndef BALL_T22_IS_GPIO
#define BALL_T22_IS_GPIO 0
#endif 
#ifndef PAD_SPI2_DI_IS_GPIO
#define PAD_SPI2_DI_IS_GPIO BALL_T22_IS_GPIO
#endif 

#define BALL_T21 PAD_SPI2_CK
#define PAD_SPI2_CK 202
#define GPIO_PAD_202 GPIO201
#ifndef BALL_T21_IS_GPIO
#define BALL_T21_IS_GPIO 0
#endif 
#ifndef PAD_SPI2_CK_IS_GPIO
#define PAD_SPI2_CK_IS_GPIO BALL_T21_IS_GPIO
#endif 

#define BALL_R25 PAD_SPI1_DI
#define PAD_SPI1_DI 201
#define GPIO_PAD_201 GPIO200
#ifndef BALL_R25_IS_GPIO
#define BALL_R25_IS_GPIO 0
#endif 
#ifndef PAD_SPI1_DI_IS_GPIO
#define PAD_SPI1_DI_IS_GPIO BALL_R25_IS_GPIO
#endif 

#define BALL_R24 PAD_SPI1_CK
#define PAD_SPI1_CK 200
#define GPIO_PAD_200 GPIO199
#ifndef BALL_R24_IS_GPIO
#define BALL_R24_IS_GPIO 0
#endif 
#ifndef PAD_SPI1_CK_IS_GPIO
#define PAD_SPI1_CK_IS_GPIO BALL_R24_IS_GPIO
#endif 

#define BALL_P21 PAD_PWM0
#define PAD_PWM0 70
#define GPIO_PAD_70 GPIO69
#ifndef BALL_P21_IS_GPIO
#define BALL_P21_IS_GPIO 0
#endif 
#ifndef PAD_PWM0_IS_GPIO
#define PAD_PWM0_IS_GPIO BALL_P21_IS_GPIO
#endif 

#define BALL_N23 PAD_PWM1
#define PAD_PWM1 71
#define GPIO_PAD_71 GPIO70
#ifndef BALL_N23_IS_GPIO
#define BALL_N23_IS_GPIO 0
#endif 
#ifndef PAD_PWM1_IS_GPIO
#define PAD_PWM1_IS_GPIO BALL_N23_IS_GPIO
#endif 

#define BALL_P22 PAD_PWM2
#define PAD_PWM2 72
#define GPIO_PAD_72 GPIO71
#ifndef BALL_P22_IS_GPIO
#define BALL_P22_IS_GPIO 0
#endif 
#ifndef PAD_PWM2_IS_GPIO
#define PAD_PWM2_IS_GPIO BALL_P22_IS_GPIO
#endif 

#define BALL_R21 PAD_PWM3
#define PAD_PWM3 73
#define GPIO_PAD_73 GPIO72
#ifndef BALL_R21_IS_GPIO
#define BALL_R21_IS_GPIO 0
#endif 
#ifndef PAD_PWM3_IS_GPIO
#define PAD_PWM3_IS_GPIO BALL_R21_IS_GPIO
#endif 

#define BALL_P20 PAD_PWM4
#define PAD_PWM4 74
#define GPIO_PAD_74 GPIO73
#ifndef BALL_P20_IS_GPIO
#define BALL_P20_IS_GPIO 0
#endif 
#ifndef PAD_PWM4_IS_GPIO
#define PAD_PWM4_IS_GPIO BALL_P20_IS_GPIO
#endif 

#define BALL_P23 PAD_DDCR_CK
#define PAD_DDCR_CK 76
#define GPIO_PAD_76 GPIO75
#ifndef BALL_P23_IS_GPIO
#define BALL_P23_IS_GPIO 0
#endif 
#ifndef PAD_DDCR_CK_IS_GPIO
#define PAD_DDCR_CK_IS_GPIO BALL_P23_IS_GPIO
#endif 

#define BALL_P24 PAD_DDCR_DA
#define PAD_DDCR_DA 75
#define GPIO_PAD_75 GPIO74
#ifndef BALL_P24_IS_GPIO
#define BALL_P24_IS_GPIO 0
#endif 
#ifndef PAD_DDCR_DA_IS_GPIO
#define PAD_DDCR_DA_IS_GPIO BALL_P24_IS_GPIO
#endif 

#define BALL_N24 PAD_UART_RX2
#define PAD_UART_RX2 68
#define GPIO_PAD_68 GPIO67
#ifndef BALL_N24_IS_GPIO
#define BALL_N24_IS_GPIO 0
#endif 
#ifndef PAD_UART_RX2_IS_GPIO
#define PAD_UART_RX2_IS_GPIO BALL_N24_IS_GPIO
#endif 

#define BALL_N25 PAD_UART_TX2
#define PAD_UART_TX2 69
#define GPIO_PAD_69 GPIO68
#ifndef BALL_N25_IS_GPIO
#define BALL_N25_IS_GPIO 0
#endif 
#ifndef PAD_UART_TX2_IS_GPIO
#define PAD_UART_TX2_IS_GPIO BALL_N25_IS_GPIO
#endif 

#define BALL_D9 PAD_I2S_IN_WS
#define PAD_I2S_IN_WS 148
#define GPIO_PAD_148 GPIO147
#ifndef BALL_D9_IS_GPIO
#define BALL_D9_IS_GPIO 0
#endif 
#ifndef PAD_I2S_IN_WS_IS_GPIO
#define PAD_I2S_IN_WS_IS_GPIO BALL_D9_IS_GPIO
#endif 

#define BALL_C8 PAD_I2S_IN_BCK
#define PAD_I2S_IN_BCK 149
#define GPIO_PAD_149 GPIO148
#ifndef BALL_C8_IS_GPIO
#define BALL_C8_IS_GPIO 0
#endif 
#ifndef PAD_I2S_IN_BCK_IS_GPIO
#define PAD_I2S_IN_BCK_IS_GPIO BALL_C8_IS_GPIO
#endif 

#define BALL_D8 PAD_I2S_IN_SD
#define PAD_I2S_IN_SD 150
#define GPIO_PAD_150 GPIO149
#ifndef BALL_D8_IS_GPIO
#define BALL_D8_IS_GPIO 0
#endif 
#ifndef PAD_I2S_IN_SD_IS_GPIO
#define PAD_I2S_IN_SD_IS_GPIO BALL_D8_IS_GPIO
#endif 

#define BALL_C9 PAD_I2S_OUT_MCK
#define PAD_I2S_OUT_MCK 153
#define GPIO_PAD_153 GPIO152
#ifndef BALL_C9_IS_GPIO
#define BALL_C9_IS_GPIO 0
#endif 
#ifndef PAD_I2S_OUT_MCK_IS_GPIO
#define PAD_I2S_OUT_MCK_IS_GPIO BALL_C9_IS_GPIO
#endif 

#define BALL_C10 PAD_I2S_OUT_WS
#define PAD_I2S_OUT_WS 154
#define GPIO_PAD_154 GPIO153
#ifndef BALL_C10_IS_GPIO
#define BALL_C10_IS_GPIO 0
#endif 
#ifndef PAD_I2S_OUT_WS_IS_GPIO
#define PAD_I2S_OUT_WS_IS_GPIO BALL_C10_IS_GPIO
#endif 

#define PAD_I2S_OUT_SD1 9999
#ifndef PAD_I2S_OUT_SD1_IS_GPIO
#define PAD_I2S_OUT_SD1_IS_GPIO 0
#endif 

#define BALL_B10 PAD_I2S_OUT_BCK
#define PAD_I2S_OUT_BCK 155
#define GPIO_PAD_155 GPIO154
#ifndef BALL_B10_IS_GPIO
#define BALL_B10_IS_GPIO 0
#endif 
#ifndef PAD_I2S_OUT_BCK_IS_GPIO
#define PAD_I2S_OUT_BCK_IS_GPIO BALL_B10_IS_GPIO
#endif 

#define BALL_E7 PAD_GPIO9
#define PAD_GPIO9 49
#define GPIO_PAD_49 GPIO48
#ifndef BALL_E7_IS_GPIO
#define BALL_E7_IS_GPIO 0
#endif 
#ifndef PAD_GPIO9_IS_GPIO
#define PAD_GPIO9_IS_GPIO BALL_E7_IS_GPIO
#endif 

#define BALL_B9 PAD_I2S_OUT_SD
#define PAD_I2S_OUT_SD 156
#define GPIO_PAD_156 GPIO155
#ifndef BALL_B9_IS_GPIO
#define BALL_B9_IS_GPIO 0
#endif 
#ifndef PAD_I2S_OUT_SD_IS_GPIO
#define PAD_I2S_OUT_SD_IS_GPIO BALL_B9_IS_GPIO
#endif 

#define BALL_F7 PAD_GPIO10
#define PAD_GPIO10 50
#define GPIO_PAD_50 GPIO49
#ifndef BALL_F7_IS_GPIO
#define BALL_F7_IS_GPIO 0
#endif 
#ifndef PAD_GPIO10_IS_GPIO
#define PAD_GPIO10_IS_GPIO BALL_F7_IS_GPIO
#endif 

#define PAD_I2S_OUT_SD2 9999
#ifndef PAD_I2S_OUT_SD2_IS_GPIO
#define PAD_I2S_OUT_SD2_IS_GPIO 0
#endif 

#define BALL_B8 PAD_GPIO11
#define PAD_GPIO11 51
#define GPIO_PAD_51 GPIO50
#ifndef BALL_B8_IS_GPIO
#define BALL_B8_IS_GPIO 0
#endif 
#ifndef PAD_GPIO11_IS_GPIO
#define PAD_GPIO11_IS_GPIO BALL_B8_IS_GPIO
#endif 

#define PAD_I2S_OUT_SD3 9999
#ifndef PAD_I2S_OUT_SD3_IS_GPIO
#define PAD_I2S_OUT_SD3_IS_GPIO 0
#endif 

#define BALL_A8 PAD_GPIO12
#define PAD_GPIO12 52
#define GPIO_PAD_52 GPIO51
#ifndef BALL_A8_IS_GPIO
#define BALL_A8_IS_GPIO 0
#endif 
#ifndef PAD_GPIO12_IS_GPIO
#define PAD_GPIO12_IS_GPIO BALL_A8_IS_GPIO
#endif 

#define BALL_D7 PAD_SPDIF_IN
#define PAD_SPDIF_IN 151
#define GPIO_PAD_151 GPIO150
#ifndef BALL_D7_IS_GPIO
#define BALL_D7_IS_GPIO 0
#endif 
#ifndef PAD_SPDIF_IN_IS_GPIO
#define PAD_SPDIF_IN_IS_GPIO BALL_D7_IS_GPIO
#endif 

#define BALL_AB5 PAD_GPIO13
#define PAD_GPIO13 53
#define GPIO_PAD_53 GPIO52
#ifndef BALL_AB5_IS_GPIO
#define BALL_AB5_IS_GPIO 0
#endif 
#ifndef PAD_GPIO13_IS_GPIO
#define PAD_GPIO13_IS_GPIO BALL_AB5_IS_GPIO
#endif 

#define BALL_D6 PAD_SPDIF_OUT
#define PAD_SPDIF_OUT 152
#define GPIO_PAD_152 GPIO151
#ifndef BALL_D6_IS_GPIO
#define BALL_D6_IS_GPIO 0
#endif 
#ifndef PAD_SPDIF_OUT_IS_GPIO
#define PAD_SPDIF_OUT_IS_GPIO BALL_D6_IS_GPIO
#endif 

#define BALL_AB3 PAD_GPIO14
#define PAD_GPIO14 54
#define GPIO_PAD_54 GPIO53
#ifndef BALL_AB3_IS_GPIO
#define BALL_AB3_IS_GPIO 0
#endif 
#ifndef PAD_GPIO14_IS_GPIO
#define PAD_GPIO14_IS_GPIO BALL_AB3_IS_GPIO
#endif 

#define BALL_C7 PAD_GPIO0
#define PAD_GPIO0 40
#define GPIO_PAD_40 GPIO39
#ifndef BALL_C7_IS_GPIO
#define BALL_C7_IS_GPIO 0
#endif 
#ifndef PAD_GPIO0_IS_GPIO
#define PAD_GPIO0_IS_GPIO BALL_C7_IS_GPIO
#endif 

#define BALL_A9 PAD_GPIO15
#define PAD_GPIO15 55
#define GPIO_PAD_55 GPIO54
#ifndef BALL_A9_IS_GPIO
#define BALL_A9_IS_GPIO 0
#endif 
#ifndef PAD_GPIO15_IS_GPIO
#define PAD_GPIO15_IS_GPIO BALL_A9_IS_GPIO
#endif 

#define BALL_E6 PAD_GPIO1
#define PAD_GPIO1 41
#define GPIO_PAD_41 GPIO40
#ifndef BALL_E6_IS_GPIO
#define BALL_E6_IS_GPIO 0
#endif 
#ifndef PAD_GPIO1_IS_GPIO
#define PAD_GPIO1_IS_GPIO BALL_E6_IS_GPIO
#endif 

#define BALL_F4 PAD_GPIO16
#define PAD_GPIO16 56
#define GPIO_PAD_56 GPIO55
#ifndef BALL_F4_IS_GPIO
#define BALL_F4_IS_GPIO 0
#endif 
#ifndef PAD_GPIO16_IS_GPIO
#define PAD_GPIO16_IS_GPIO BALL_F4_IS_GPIO
#endif 

#define BALL_F5 PAD_GPIO2
#define PAD_GPIO2 42
#define GPIO_PAD_42 GPIO41
#ifndef BALL_F5_IS_GPIO
#define BALL_F5_IS_GPIO 0
#endif 
#ifndef PAD_GPIO2_IS_GPIO
#define PAD_GPIO2_IS_GPIO BALL_F5_IS_GPIO
#endif 

#define BALL_AB1 PAD_GPIO17
#define PAD_GPIO17 57
#define GPIO_PAD_57 GPIO56
#ifndef BALL_AB1_IS_GPIO
#define BALL_AB1_IS_GPIO 0
#endif 
#ifndef PAD_GPIO17_IS_GPIO
#define PAD_GPIO17_IS_GPIO BALL_AB1_IS_GPIO
#endif 

#define BALL_B6 PAD_GPIO3
#define PAD_GPIO3 43
#define GPIO_PAD_43 GPIO42
#ifndef BALL_B6_IS_GPIO
#define BALL_B6_IS_GPIO 0
#endif 
#ifndef PAD_GPIO3_IS_GPIO
#define PAD_GPIO3_IS_GPIO BALL_B6_IS_GPIO
#endif 

#define BALL_N6 PAD_GPIO18
#define PAD_GPIO18 58
#define GPIO_PAD_58 GPIO57
#ifndef BALL_N6_IS_GPIO
#define BALL_N6_IS_GPIO 0
#endif 
#ifndef PAD_GPIO18_IS_GPIO
#define PAD_GPIO18_IS_GPIO BALL_N6_IS_GPIO
#endif 

#define BALL_E5 PAD_GPIO4
#define PAD_GPIO4 44
#define GPIO_PAD_44 GPIO43
#ifndef BALL_E5_IS_GPIO
#define BALL_E5_IS_GPIO 0
#endif 
#ifndef PAD_GPIO4_IS_GPIO
#define PAD_GPIO4_IS_GPIO BALL_E5_IS_GPIO
#endif 

#define BALL_B4 PAD_GPIO19
#define PAD_GPIO19 59
#define GPIO_PAD_59 GPIO58
#ifndef BALL_B4_IS_GPIO
#define BALL_B4_IS_GPIO 0
#endif 
#ifndef PAD_GPIO19_IS_GPIO
#define PAD_GPIO19_IS_GPIO BALL_B4_IS_GPIO
#endif 

#define BALL_D5 PAD_GPIO5
#define PAD_GPIO5 45
#define GPIO_PAD_45 GPIO44
#ifndef BALL_D5_IS_GPIO
#define BALL_D5_IS_GPIO 0
#endif 
#ifndef PAD_GPIO5_IS_GPIO
#define PAD_GPIO5_IS_GPIO BALL_D5_IS_GPIO
#endif 

#define BALL_C3 PAD_GPIO22
#define PAD_GPIO22 62
#define GPIO_PAD_62 GPIO61
#ifndef BALL_C3_IS_GPIO
#define BALL_C3_IS_GPIO 0
#endif 
#ifndef PAD_GPIO22_IS_GPIO
#define PAD_GPIO22_IS_GPIO BALL_C3_IS_GPIO
#endif 

#define BALL_B7 PAD_GPIO6
#define PAD_GPIO6 46
#define GPIO_PAD_46 GPIO45
#ifndef BALL_B7_IS_GPIO
#define BALL_B7_IS_GPIO 0
#endif 
#ifndef PAD_GPIO6_IS_GPIO
#define PAD_GPIO6_IS_GPIO BALL_B7_IS_GPIO
#endif 

#define BALL_C4 PAD_GPIO20
#define PAD_GPIO20 60
#define GPIO_PAD_60 GPIO59
#ifndef BALL_C4_IS_GPIO
#define BALL_C4_IS_GPIO 0
#endif 
#ifndef PAD_GPIO20_IS_GPIO
#define PAD_GPIO20_IS_GPIO BALL_C4_IS_GPIO
#endif 

#define BALL_D4 PAD_GPIO7
#define PAD_GPIO7 47
#define GPIO_PAD_47 GPIO46
#ifndef BALL_D4_IS_GPIO
#define BALL_D4_IS_GPIO 0
#endif 
#ifndef PAD_GPIO7_IS_GPIO
#define PAD_GPIO7_IS_GPIO BALL_D4_IS_GPIO
#endif 

#define PAD_GPIO24 9999
#ifndef PAD_GPIO24_IS_GPIO
#define PAD_GPIO24_IS_GPIO 0
#endif 

#define BALL_E4 PAD_GPIO8
#define PAD_GPIO8 48
#define GPIO_PAD_48 GPIO47
#ifndef BALL_E4_IS_GPIO
#define BALL_E4_IS_GPIO 0
#endif 
#ifndef PAD_GPIO8_IS_GPIO
#define PAD_GPIO8_IS_GPIO BALL_E4_IS_GPIO
#endif 

#define PAD_GPIO27 9999
#ifndef PAD_GPIO27_IS_GPIO
#define PAD_GPIO27_IS_GPIO 0
#endif 

#define PAD_GPIO21 9999
#ifndef PAD_GPIO21_IS_GPIO
#define PAD_GPIO21_IS_GPIO 0
#endif 

#define BALL_B3 PAD_GPIO26
#define PAD_GPIO26 66
#define GPIO_PAD_66 GPIO65
#ifndef BALL_B3_IS_GPIO
#define BALL_B3_IS_GPIO 0
#endif 
#ifndef PAD_GPIO26_IS_GPIO
#define PAD_GPIO26_IS_GPIO BALL_B3_IS_GPIO
#endif 

#define PAD_GPIO23 9999
#ifndef PAD_GPIO23_IS_GPIO
#define PAD_GPIO23_IS_GPIO 0
#endif 

#define BALL_A3 PAD_GPIO25
#define PAD_GPIO25 65
#define GPIO_PAD_65 GPIO64
#ifndef BALL_A3_IS_GPIO
#define BALL_A3_IS_GPIO 0
#endif 
#ifndef PAD_GPIO25_IS_GPIO
#define PAD_GPIO25_IS_GPIO BALL_A3_IS_GPIO
#endif 

#define BALL_A2 PAD_PM_SPI_CK
#define PAD_PM_SPI_CK 2
#define GPIO_PAD_2 GPIO1
#ifndef BALL_A2_IS_GPIO
#define BALL_A2_IS_GPIO 0
#endif 
#ifndef PAD_PM_SPI_CK_IS_GPIO
#define PAD_PM_SPI_CK_IS_GPIO BALL_A2_IS_GPIO
#endif 

#define BALL_H6 PAD_SAR0
#define PAD_SAR0 35
#define GPIO_PAD_35 GPIO34
#ifndef BALL_H6_IS_GPIO
#define BALL_H6_IS_GPIO 0
#endif 
#ifndef PAD_SAR0_IS_GPIO
#define PAD_SAR0_IS_GPIO BALL_H6_IS_GPIO
#endif 

#define BALL_B2 PAD_PM_SPI_DI
#define PAD_PM_SPI_DI 3
#define GPIO_PAD_3 GPIO2
#ifndef BALL_B2_IS_GPIO
#define BALL_B2_IS_GPIO 0
#endif 
#ifndef PAD_PM_SPI_DI_IS_GPIO
#define PAD_PM_SPI_DI_IS_GPIO BALL_B2_IS_GPIO
#endif 

#define BALL_B1 PAD_PM_SPI_DO
#define PAD_PM_SPI_DO 4
#define GPIO_PAD_4 GPIO3
#ifndef BALL_B1_IS_GPIO
#define BALL_B1_IS_GPIO 0
#endif 
#ifndef PAD_PM_SPI_DO_IS_GPIO
#define PAD_PM_SPI_DO_IS_GPIO BALL_B1_IS_GPIO
#endif 

#define BALL_G5 PAD_SAR1
#define PAD_SAR1 36
#define GPIO_PAD_36 GPIO35
#ifndef BALL_G5_IS_GPIO
#define BALL_G5_IS_GPIO 0
#endif 
#ifndef PAD_SAR1_IS_GPIO
#define PAD_SAR1_IS_GPIO BALL_G5_IS_GPIO
#endif 

#define BALL_J6 PAD_GPIO_PM3
#define PAD_GPIO_PM3 10
#define GPIO_PAD_10 GPIO9
#ifndef BALL_J6_IS_GPIO
#define BALL_J6_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM3_IS_GPIO
#define PAD_GPIO_PM3_IS_GPIO BALL_J6_IS_GPIO
#endif 

#define PAD_PM_SPI_CZ 9999
#ifndef PAD_PM_SPI_CZ_IS_GPIO
#define PAD_PM_SPI_CZ_IS_GPIO 0
#endif 

#define BALL_G4 PAD_SAR2
#define PAD_SAR2 37
#define GPIO_PAD_37 GPIO36
#ifndef BALL_G4_IS_GPIO
#define BALL_G4_IS_GPIO 0
#endif 
#ifndef PAD_SAR2_IS_GPIO
#define PAD_SAR2_IS_GPIO BALL_G4_IS_GPIO
#endif 

#define BALL_C2 PAD_GPIO_PM6
#define PAD_GPIO_PM6 13
#define GPIO_PAD_13 GPIO12
#ifndef BALL_C2_IS_GPIO
#define BALL_C2_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM6_IS_GPIO
#define PAD_GPIO_PM6_IS_GPIO BALL_C2_IS_GPIO
#endif 

#define BALL_V5 PAD_HOTPLUGA
#define PAD_HOTPLUGA 23
#define GPIO_PAD_23 GPIO22
#ifndef BALL_V5_IS_GPIO
#define BALL_V5_IS_GPIO 0
#endif 
#ifndef PAD_HOTPLUGA_IS_GPIO
#define PAD_HOTPLUGA_IS_GPIO BALL_V5_IS_GPIO
#endif 

#define BALL_J5 PAD_SAR3
#define PAD_SAR3 38
#define GPIO_PAD_38 GPIO37
#ifndef BALL_J5_IS_GPIO
#define BALL_J5_IS_GPIO 0
#endif 
#ifndef PAD_SAR3_IS_GPIO
#define PAD_SAR3_IS_GPIO BALL_J5_IS_GPIO
#endif 

#define BALL_L5 PAD_GPIO_PM7
#define PAD_GPIO_PM7 14
#define GPIO_PAD_14 GPIO13
#ifndef BALL_L5_IS_GPIO
#define BALL_L5_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM7_IS_GPIO
#define PAD_GPIO_PM7_IS_GPIO BALL_L5_IS_GPIO
#endif 

#define BALL_P5 PAD_HOTPLUGB
#define PAD_HOTPLUGB 24
#define GPIO_PAD_24 GPIO23
#ifndef BALL_P5_IS_GPIO
#define BALL_P5_IS_GPIO 0
#endif 
#ifndef PAD_HOTPLUGB_IS_GPIO
#define PAD_HOTPLUGB_IS_GPIO BALL_P5_IS_GPIO
#endif 

#define BALL_J4 PAD_SAR4
#define PAD_SAR4 39
#define GPIO_PAD_39 GPIO38
#ifndef BALL_J4_IS_GPIO
#define BALL_J4_IS_GPIO 0
#endif 
#ifndef PAD_SAR4_IS_GPIO
#define PAD_SAR4_IS_GPIO BALL_J4_IS_GPIO
#endif 

#define BALL_N4 PAD_IRIN
#define PAD_IRIN 5
#define GPIO_PAD_5 GPIO4
#ifndef BALL_N4_IS_GPIO
#define BALL_N4_IS_GPIO 0
#endif 
#ifndef PAD_IRIN_IS_GPIO
#define PAD_IRIN_IS_GPIO BALL_N4_IS_GPIO
#endif 

#define BALL_T4 PAD_DDCDA_CK
#define PAD_DDCDA_CK 27
#define GPIO_PAD_27 GPIO26
#ifndef BALL_T4_IS_GPIO
#define BALL_T4_IS_GPIO 0
#endif 
#ifndef PAD_DDCDA_CK_IS_GPIO
#define PAD_DDCDA_CK_IS_GPIO BALL_T4_IS_GPIO
#endif 

#define BALL_M6 PAD_GPIO_PM8
#define PAD_GPIO_PM8 15
#define GPIO_PAD_15 GPIO14
#ifndef BALL_M6_IS_GPIO
#define BALL_M6_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM8_IS_GPIO
#define PAD_GPIO_PM8_IS_GPIO BALL_M6_IS_GPIO
#endif 

#define BALL_T5 PAD_DDCDA_DA
#define PAD_DDCDA_DA 28
#define GPIO_PAD_28 GPIO27
#ifndef BALL_T5_IS_GPIO
#define BALL_T5_IS_GPIO 0
#endif 
#ifndef PAD_DDCDA_DA_IS_GPIO
#define PAD_DDCDA_DA_IS_GPIO BALL_T5_IS_GPIO
#endif 

#define BALL_R4 PAD_CEC
#define PAD_CEC 6
#define GPIO_PAD_6 GPIO5
#ifndef BALL_R4_IS_GPIO
#define BALL_R4_IS_GPIO 0
#endif 
#ifndef PAD_CEC_IS_GPIO
#define PAD_CEC_IS_GPIO BALL_R4_IS_GPIO
#endif 

#define BALL_U6 PAD_DDCDB_CK
#define PAD_DDCDB_CK 29
#define GPIO_PAD_29 GPIO28
#ifndef BALL_U6_IS_GPIO
#define BALL_U6_IS_GPIO 0
#endif 
#ifndef PAD_DDCDB_CK_IS_GPIO
#define PAD_DDCDB_CK_IS_GPIO BALL_U6_IS_GPIO
#endif 

#define BALL_F6 PAD_PWM_PM
#define PAD_PWM_PM 198
#define GPIO_PAD_198 GPIO197
#ifndef BALL_F6_IS_GPIO
#define BALL_F6_IS_GPIO 0
#endif 
#ifndef PAD_PWM_PM_IS_GPIO
#define PAD_PWM_PM_IS_GPIO BALL_F6_IS_GPIO
#endif 

#define BALL_R6 PAD_DDCDB_DA
#define PAD_DDCDB_DA 30
#define GPIO_PAD_30 GPIO29
#ifndef BALL_R6_IS_GPIO
#define BALL_R6_IS_GPIO 0
#endif 
#ifndef PAD_DDCDB_DA_IS_GPIO
#define PAD_DDCDB_DA_IS_GPIO BALL_R6_IS_GPIO
#endif 

#define BALL_M5 PAD_GPIO_PM9
#define PAD_GPIO_PM9 16
#define GPIO_PAD_16 GPIO15
#ifndef BALL_M5_IS_GPIO
#define BALL_M5_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM9_IS_GPIO
#define PAD_GPIO_PM9_IS_GPIO BALL_M5_IS_GPIO
#endif 

#define PAD_DDCDD_CK 9999
#ifndef PAD_DDCDD_CK_IS_GPIO
#define PAD_DDCDD_CK_IS_GPIO 0
#endif 

#define PAD_DDCDD_DA 9999
#ifndef PAD_DDCDD_DA_IS_GPIO
#define PAD_DDCDD_DA_IS_GPIO 0
#endif 

#define BALL_H5 PAD_GPIO_PM0
#define PAD_GPIO_PM0 7
#define GPIO_PAD_7 GPIO6
#ifndef BALL_H5_IS_GPIO
#define BALL_H5_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM0_IS_GPIO
#define PAD_GPIO_PM0_IS_GPIO BALL_H5_IS_GPIO
#endif 

#define PAD_AV_LNK 9999
#ifndef PAD_AV_LNK_IS_GPIO
#define PAD_AV_LNK_IS_GPIO 0
#endif 

#define BALL_M4 PAD_GPIO_PM11
#define PAD_GPIO_PM11 18
#define GPIO_PAD_18 GPIO17
#ifndef BALL_M4_IS_GPIO
#define BALL_M4_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM11_IS_GPIO
#define PAD_GPIO_PM11_IS_GPIO BALL_M4_IS_GPIO
#endif 

#define BALL_C1 PAD_GPIO_PM10
#define PAD_GPIO_PM10 17
#define GPIO_PAD_17 GPIO16
#ifndef BALL_C1_IS_GPIO
#define BALL_C1_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM10_IS_GPIO
#define PAD_GPIO_PM10_IS_GPIO BALL_C1_IS_GPIO
#endif 

#define BALL_K6 PAD_GPIO_PM1
#define PAD_GPIO_PM1 8
#define GPIO_PAD_8 GPIO7
#ifndef BALL_K6_IS_GPIO
#define BALL_K6_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM1_IS_GPIO
#define PAD_GPIO_PM1_IS_GPIO BALL_K6_IS_GPIO
#endif 

#define BALL_D3 PAD_GPIO_PM12
#define PAD_GPIO_PM12 19
#define GPIO_PAD_19 GPIO18
#ifndef BALL_D3_IS_GPIO
#define BALL_D3_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM12_IS_GPIO
#define PAD_GPIO_PM12_IS_GPIO BALL_D3_IS_GPIO
#endif 

#define BALL_K5 PAD_GPIO_PM2
#define PAD_GPIO_PM2 9
#define GPIO_PAD_9 GPIO8
#ifndef BALL_K5_IS_GPIO
#define BALL_K5_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM2_IS_GPIO
#define PAD_GPIO_PM2_IS_GPIO BALL_K5_IS_GPIO
#endif 

#define BALL_Y7 PAD_GPIO_PM14
#define PAD_GPIO_PM14 21
#define GPIO_PAD_21 GPIO20
#ifndef BALL_Y7_IS_GPIO
#define BALL_Y7_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM14_IS_GPIO
#define PAD_GPIO_PM14_IS_GPIO BALL_Y7_IS_GPIO
#endif 

#define BALL_K4 PAD_GPIO_PM4
#define PAD_GPIO_PM4 11
#define GPIO_PAD_11 GPIO10
#ifndef BALL_K4_IS_GPIO
#define BALL_K4_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM4_IS_GPIO
#define PAD_GPIO_PM4_IS_GPIO BALL_K4_IS_GPIO
#endif 

#define BALL_L6 PAD_GPIO_PM5
#define PAD_GPIO_PM5 12
#define GPIO_PAD_12 GPIO11
#ifndef BALL_L6_IS_GPIO
#define BALL_L6_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM5_IS_GPIO
#define PAD_GPIO_PM5_IS_GPIO BALL_L6_IS_GPIO
#endif 

#define BALL_W6 PAD_GPIO_PM13
#define PAD_GPIO_PM13 20
#define GPIO_PAD_20 GPIO19
#ifndef BALL_W6_IS_GPIO
#define BALL_W6_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM13_IS_GPIO
#define PAD_GPIO_PM13_IS_GPIO BALL_W6_IS_GPIO
#endif 


// PADS group name to index
#define PADS_DDCR           1223
#define PADS_DDCR2          1224
#define PADS_TS0            1225
#define PADS_TS1            1226
#define PADS_GPIO1_GPIO2    1227
#define PADS_LHSYNC2_LVSYNC2 1228
#define PADS_PCI_AD20_AD21  1229
#define PADS_PCI            1230
#define PADS_PCM            1231
#define PADS_SAR            1232
#define PADS_DOUT           1233
#define PADS_DIN            1234
#define PADS_I2S            1235
#define PADS_PF             1236
#define PADS_EMAC           1237
#define PADS_TCON           1238
#define PADS_UART1_MODE1    1239
#define PADS_UART1_MODE2    1240
#define PADS_UART1_MODE3    1241
#define PADS_UART2_MODE1    1242
#define PADS_UART2_MODE2    1243
#define PADS_UART2_MODE3    1244
#define PADS_ET_MODE0       1245
#define PADS_ET_MODE1       1246
#define PADS_ET_MODE2       1247
#define PADS_ET_MODE3       1248
#define PADS_MIIC           1249
#define PADS_PF_MODE1       1250
#define PADS_PF_MODE2       1251
#define PADS_PF_MODE3       1252
#define PADS_SPI_CZ1        1253
#define PADS_SPI_CZ2        1254
#define PADS_SPI_CZ3        1255
#define PADS_DDCR3          1256

// chip capbilities
#define CHIP_HAS_BT656_IN          0
#define CHIP_HAS_TS0               1
#define CHIP_HAS_TS1               0 
#define CHIP_HAS_LVDS_10BIT_X2     1
#define CHIP_HAS_LVDS_8BIT_X2      1
#define CHIP_HAS_LVDS_8BIT_X1      1
#define CHIP_HAS_CIMAX             0
#define CHIP_HAS_USB_P0            1
#define CHIP_HAS_USB_P1            1
#define CHIP_HAS_USBVBUS0          0
#define CHIP_HAS_USBVBUS1          0
#define CHIP_HAS_UART1_MODE1       1 
#define CHIP_HAS_UART1_MODE2       1
#define CHIP_HAS_UART1_MODE3       1 
#define CHIP_HAS_PCMCIA1           0
#define CHIP_HAS_PCMCIA2           0
#define CHIP_HAS_PCMCIA            0
#define CHIP_HAS_UART2_MODE1       1 
#define CHIP_HAS_UART2_MODE2       1 
#define CHIP_HAS_UART2_MODE3       1 
#define CHIP_HAS_RGB_A             1 
#define CHIP_HAS_RGB_B             1 
#define CHIP_HAS_RGB_C             1 
#define CHIP_HAS_HDMI_A            1 
#define CHIP_HAS_HDMI_B            1 
#define CHIP_HAS_HDMI_C            1 
#define CHIP_HAS_SPI_CZ1           1 
#define CHIP_HAS_SPI_CZ2           0 
#define CHIP_HAS_SPI_CZ3           0
#define CHIP_HAS_DDCR              1 
#define CHIP_HAS_DDCR2             1 
#define CHIP_HAS_TCON              1
#define CHIP_HAS_ET_MODE0_MII      1 
#define CHIP_HAS_ET_MODE0_RMII     1 
#define CHIP_HAS_ET_MODE1_MII      1 
#define CHIP_HAS_ET_MODE1_RMII     1 
#define CHIP_HAS_ET_MODE2_MII      1
#define CHIP_HAS_ET_MODE2_RMII     1
#define CHIP_HAS_I2S_IN            1 
#define CHIP_HAS_I2S_OUT           1
#define CHIP_HAS_SPDIF_IN          0 
#define CHIP_HAS_SPDIF_OUT         1
#define CHIP_HAS_DDR_A_CMD         1
#define CHIP_HAS_DDR_A_DATA        1
#define CHIP_HAS_DDR_B_CMD         1
#define CHIP_HAS_DDR_B_DATA        1
#define CHIP_USE_PCM_CDN_IN_PCM2   0
#define CHIP_USE_I2S_IN_IN_PCM     0
#define CHIP_USE_I2S_OUT_IN_PCM    0
#define CHIP_USE_SPDIF_IN_IN_PCM   0
#define CHIP_USE_SPDIF_OUT_IN_PCM  0
#define CHIP_USE_IIC_IN_DDCR2      0
#define CHIP_USE_PWM2_IN_GPIO14    0
#define CHIP_USE_PWM3_IN_GPIO15    0

// chip additional information
#define CHIP_FAMILY_TYPE           CHIP_FAMILY_EMERALD

#endif /* _MSD804KKX_H_*/
