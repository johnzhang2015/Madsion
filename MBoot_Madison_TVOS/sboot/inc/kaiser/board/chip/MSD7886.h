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
#ifndef _MSD7886_H_
#define _MSD7886_H_

#define PAD_NC 9999
#define PAD_GND 0

#define BALL_E4 PAD_I2S_OUT_WS
#define PAD_I2S_OUT_WS 1
#define GPIO_PAD_1 GPIO0
#ifndef BALL_E4_IS_GPIO
#define BALL_E4_IS_GPIO 0
#endif 
#ifndef PAD_I2S_OUT_WS_IS_GPIO
#define PAD_I2S_OUT_WS_IS_GPIO BALL_E4_IS_GPIO
#endif 

#define BALL_F4 PAD_I2S_OUT_MCK
#define PAD_I2S_OUT_MCK 2
#define GPIO_PAD_2 GPIO1
#ifndef BALL_F4_IS_GPIO
#define BALL_F4_IS_GPIO 0
#endif 
#ifndef PAD_I2S_OUT_MCK_IS_GPIO
#define PAD_I2S_OUT_MCK_IS_GPIO BALL_F4_IS_GPIO
#endif 

#define BALL_G4 PAD_I2S_OUT_BCK
#define PAD_I2S_OUT_BCK 3
#define GPIO_PAD_3 GPIO2
#ifndef BALL_G4_IS_GPIO
#define BALL_G4_IS_GPIO 0
#endif 
#ifndef PAD_I2S_OUT_BCK_IS_GPIO
#define PAD_I2S_OUT_BCK_IS_GPIO BALL_G4_IS_GPIO
#endif 

#define BALL_G5 PAD_I2S_OUT_SD0
#define PAD_I2S_OUT_SD0 4
#define GPIO_PAD_4 GPIO3
#ifndef BALL_G5_IS_GPIO
#define BALL_G5_IS_GPIO 0
#endif 
#ifndef PAD_I2S_OUT_SD0_IS_GPIO
#define PAD_I2S_OUT_SD0_IS_GPIO BALL_G5_IS_GPIO
#endif 

#define BALL_H4 PAD_I2S_OUT_SD1
#define PAD_I2S_OUT_SD1 5
#define GPIO_PAD_5 GPIO4
#ifndef BALL_H4_IS_GPIO
#define BALL_H4_IS_GPIO 0
#endif 
#ifndef PAD_I2S_OUT_SD1_IS_GPIO
#define PAD_I2S_OUT_SD1_IS_GPIO BALL_H4_IS_GPIO
#endif 

#define BALL_G6 PAD_I2S_OUT_SD2
#define PAD_I2S_OUT_SD2 6
#define GPIO_PAD_6 GPIO5
#ifndef BALL_G6_IS_GPIO
#define BALL_G6_IS_GPIO 0
#endif 
#ifndef PAD_I2S_OUT_SD2_IS_GPIO
#define PAD_I2S_OUT_SD2_IS_GPIO BALL_G6_IS_GPIO
#endif 

#define BALL_H5 PAD_I2S_OUT_SD3
#define PAD_I2S_OUT_SD3 7
#define GPIO_PAD_7 GPIO6
#ifndef BALL_H5_IS_GPIO
#define BALL_H5_IS_GPIO 0
#endif 
#ifndef PAD_I2S_OUT_SD3_IS_GPIO
#define PAD_I2S_OUT_SD3_IS_GPIO BALL_H5_IS_GPIO
#endif 

#define BALL_K2 PAD_SDIO_CLK
#define PAD_SDIO_CLK 8
#define GPIO_PAD_8 GPIO7
#ifndef BALL_K2_IS_GPIO
#define BALL_K2_IS_GPIO 0
#endif 
#ifndef PAD_SDIO_CLK_IS_GPIO
#define PAD_SDIO_CLK_IS_GPIO BALL_K2_IS_GPIO
#endif 

#define BALL_K3 PAD_SDIO_CMD
#define PAD_SDIO_CMD 9
#define GPIO_PAD_9 GPIO8
#ifndef BALL_K3_IS_GPIO
#define BALL_K3_IS_GPIO 0
#endif 
#ifndef PAD_SDIO_CMD_IS_GPIO
#define PAD_SDIO_CMD_IS_GPIO BALL_K3_IS_GPIO
#endif 

#define BALL_J3 PAD_SDIO_D0
#define PAD_SDIO_D0 10
#define GPIO_PAD_10 GPIO9
#ifndef BALL_J3_IS_GPIO
#define BALL_J3_IS_GPIO 0
#endif 
#ifndef PAD_SDIO_D0_IS_GPIO
#define PAD_SDIO_D0_IS_GPIO BALL_J3_IS_GPIO
#endif 

#define BALL_J2 PAD_SDIO_D1
#define PAD_SDIO_D1 11
#define GPIO_PAD_11 GPIO10
#ifndef BALL_J2_IS_GPIO
#define BALL_J2_IS_GPIO 0
#endif 
#ifndef PAD_SDIO_D1_IS_GPIO
#define PAD_SDIO_D1_IS_GPIO BALL_J2_IS_GPIO
#endif 

#define BALL_L1 PAD_SDIO_D2
#define PAD_SDIO_D2 12
#define GPIO_PAD_12 GPIO11
#ifndef BALL_L1_IS_GPIO
#define BALL_L1_IS_GPIO 0
#endif 
#ifndef PAD_SDIO_D2_IS_GPIO
#define PAD_SDIO_D2_IS_GPIO BALL_L1_IS_GPIO
#endif 

#define BALL_L2 PAD_SDIO_D3
#define PAD_SDIO_D3 13
#define GPIO_PAD_13 GPIO12
#ifndef BALL_L2_IS_GPIO
#define BALL_L2_IS_GPIO 0
#endif 
#ifndef PAD_SDIO_D3_IS_GPIO
#define PAD_SDIO_D3_IS_GPIO BALL_L2_IS_GPIO
#endif 

#define BALL_AB24 PAD_SM0_CD
#define PAD_SM0_CD 14
#define GPIO_PAD_14 GPIO13
#ifndef BALL_AB24_IS_GPIO
#define BALL_AB24_IS_GPIO 0
#endif 
#ifndef PAD_SM0_CD_IS_GPIO
#define PAD_SM0_CD_IS_GPIO BALL_AB24_IS_GPIO
#endif 

#define BALL_AB25 PAD_SM0_RST
#define PAD_SM0_RST 15
#define GPIO_PAD_15 GPIO14
#ifndef BALL_AB25_IS_GPIO
#define BALL_AB25_IS_GPIO 0
#endif 
#ifndef PAD_SM0_RST_IS_GPIO
#define PAD_SM0_RST_IS_GPIO BALL_AB25_IS_GPIO
#endif 

#define BALL_AC23 PAD_SM0_VCC
#define PAD_SM0_VCC 16
#define GPIO_PAD_16 GPIO15
#ifndef BALL_AC23_IS_GPIO
#define BALL_AC23_IS_GPIO 0
#endif 
#ifndef PAD_SM0_VCC_IS_GPIO
#define PAD_SM0_VCC_IS_GPIO BALL_AC23_IS_GPIO
#endif 

#define BALL_AC25 PAD_SM0_IO
#define PAD_SM0_IO 17
#define GPIO_PAD_17 GPIO16
#ifndef BALL_AC25_IS_GPIO
#define BALL_AC25_IS_GPIO 0
#endif 
#ifndef PAD_SM0_IO_IS_GPIO
#define PAD_SM0_IO_IS_GPIO BALL_AC25_IS_GPIO
#endif 

#define BALL_AC24 PAD_SM0_CLK
#define PAD_SM0_CLK 18
#define GPIO_PAD_18 GPIO17
#ifndef BALL_AC24_IS_GPIO
#define BALL_AC24_IS_GPIO 0
#endif 
#ifndef PAD_SM0_CLK_IS_GPIO
#define PAD_SM0_CLK_IS_GPIO BALL_AC24_IS_GPIO
#endif 

#define BALL_Y25 PAD_SM0_GPIO0
#define PAD_SM0_GPIO0 19
#define GPIO_PAD_19 GPIO18
#ifndef BALL_Y25_IS_GPIO
#define BALL_Y25_IS_GPIO 0
#endif 
#ifndef PAD_SM0_GPIO0_IS_GPIO
#define PAD_SM0_GPIO0_IS_GPIO BALL_Y25_IS_GPIO
#endif 

#define BALL_AA24 PAD_SM0_GPIO1
#define PAD_SM0_GPIO1 20
#define GPIO_PAD_20 GPIO19
#ifndef BALL_AA24_IS_GPIO
#define BALL_AA24_IS_GPIO 0
#endif 
#ifndef PAD_SM0_GPIO1_IS_GPIO
#define PAD_SM0_GPIO1_IS_GPIO BALL_AA24_IS_GPIO
#endif 

#define BALL_U22 PAD_SM1_CD
#define PAD_SM1_CD 21
#define GPIO_PAD_21 GPIO20
#ifndef BALL_U22_IS_GPIO
#define BALL_U22_IS_GPIO 0
#endif 
#ifndef PAD_SM1_CD_IS_GPIO
#define PAD_SM1_CD_IS_GPIO BALL_U22_IS_GPIO
#endif 

#define BALL_T22 PAD_SM1_RST
#define PAD_SM1_RST 22
#define GPIO_PAD_22 GPIO21
#ifndef BALL_T22_IS_GPIO
#define BALL_T22_IS_GPIO 0
#endif 
#ifndef PAD_SM1_RST_IS_GPIO
#define PAD_SM1_RST_IS_GPIO BALL_T22_IS_GPIO
#endif 

#define BALL_T21 PAD_SM1_VCC
#define PAD_SM1_VCC 23
#define GPIO_PAD_23 GPIO22
#ifndef BALL_T21_IS_GPIO
#define BALL_T21_IS_GPIO 0
#endif 
#ifndef PAD_SM1_VCC_IS_GPIO
#define PAD_SM1_VCC_IS_GPIO BALL_T21_IS_GPIO
#endif 

#define BALL_T20 PAD_SM1_IO
#define PAD_SM1_IO 24
#define GPIO_PAD_24 GPIO23
#ifndef BALL_T20_IS_GPIO
#define BALL_T20_IS_GPIO 0
#endif 
#ifndef PAD_SM1_IO_IS_GPIO
#define PAD_SM1_IO_IS_GPIO BALL_T20_IS_GPIO
#endif 

#define BALL_U21 PAD_SM1_CLK
#define PAD_SM1_CLK 25
#define GPIO_PAD_25 GPIO24
#ifndef BALL_U21_IS_GPIO
#define BALL_U21_IS_GPIO 0
#endif 
#ifndef PAD_SM1_CLK_IS_GPIO
#define PAD_SM1_CLK_IS_GPIO BALL_U21_IS_GPIO
#endif 

#define BALL_AB23 PAD_SM1_GPIO0
#define PAD_SM1_GPIO0 26
#define GPIO_PAD_26 GPIO25
#ifndef BALL_AB23_IS_GPIO
#define BALL_AB23_IS_GPIO 0
#endif 
#ifndef PAD_SM1_GPIO0_IS_GPIO
#define PAD_SM1_GPIO0_IS_GPIO BALL_AB23_IS_GPIO
#endif 

#define BALL_AA23 PAD_SM1_GPIO1
#define PAD_SM1_GPIO1 27
#define GPIO_PAD_27 GPIO26
#ifndef BALL_AA23_IS_GPIO
#define BALL_AA23_IS_GPIO 0
#endif 
#ifndef PAD_SM1_GPIO1_IS_GPIO
#define PAD_SM1_GPIO1_IS_GPIO BALL_AA23_IS_GPIO
#endif 

#define BALL_P22 PAD_EJ_DINT
#define PAD_EJ_DINT 28
#define GPIO_PAD_28 GPIO27
#ifndef BALL_P22_IS_GPIO
#define BALL_P22_IS_GPIO 0
#endif 
#ifndef PAD_EJ_DINT_IS_GPIO
#define PAD_EJ_DINT_IS_GPIO BALL_P22_IS_GPIO
#endif 

#define BALL_P21 PAD_EJ_RSTZ
#define PAD_EJ_RSTZ 29
#define GPIO_PAD_29 GPIO28
#ifndef BALL_P21_IS_GPIO
#define BALL_P21_IS_GPIO 0
#endif 
#ifndef PAD_EJ_RSTZ_IS_GPIO
#define PAD_EJ_RSTZ_IS_GPIO BALL_P21_IS_GPIO
#endif 

#define PAD_CI_A0 9999
#ifndef PAD_CI_A0_IS_GPIO
#define PAD_CI_A0_IS_GPIO 0
#endif 

#define PAD_CI_A1 9999
#ifndef PAD_CI_A1_IS_GPIO
#define PAD_CI_A1_IS_GPIO 0
#endif 

#define PAD_CI_A2 9999
#ifndef PAD_CI_A2_IS_GPIO
#define PAD_CI_A2_IS_GPIO 0
#endif 

#define PAD_CI_A3 9999
#ifndef PAD_CI_A3_IS_GPIO
#define PAD_CI_A3_IS_GPIO 0
#endif 

#define PAD_CI_A4 9999
#ifndef PAD_CI_A4_IS_GPIO
#define PAD_CI_A4_IS_GPIO 0
#endif 

#define PAD_CI_A5 9999
#ifndef PAD_CI_A5_IS_GPIO
#define PAD_CI_A5_IS_GPIO 0
#endif 

#define PAD_CI_A6 9999
#ifndef PAD_CI_A6_IS_GPIO
#define PAD_CI_A6_IS_GPIO 0
#endif 

#define PAD_CI_A7 9999
#ifndef PAD_CI_A7_IS_GPIO
#define PAD_CI_A7_IS_GPIO 0
#endif 

#define PAD_CI_A8 9999
#ifndef PAD_CI_A8_IS_GPIO
#define PAD_CI_A8_IS_GPIO 0
#endif 

#define PAD_CI_A9 9999
#ifndef PAD_CI_A9_IS_GPIO
#define PAD_CI_A9_IS_GPIO 0
#endif 

#define PAD_CI_A10 9999
#ifndef PAD_CI_A10_IS_GPIO
#define PAD_CI_A10_IS_GPIO 0
#endif 

#define PAD_CI_A11 9999
#ifndef PAD_CI_A11_IS_GPIO
#define PAD_CI_A11_IS_GPIO 0
#endif 

#define PAD_CI_A12 9999
#ifndef PAD_CI_A12_IS_GPIO
#define PAD_CI_A12_IS_GPIO 0
#endif 

#define PAD_CI_A13 9999
#ifndef PAD_CI_A13_IS_GPIO
#define PAD_CI_A13_IS_GPIO 0
#endif 

#define PAD_CI_A14 9999
#ifndef PAD_CI_A14_IS_GPIO
#define PAD_CI_A14_IS_GPIO 0
#endif 

#define PAD_CI_D0 9999
#ifndef PAD_CI_D0_IS_GPIO
#define PAD_CI_D0_IS_GPIO 0
#endif 

#define PAD_CI_D1 9999
#ifndef PAD_CI_D1_IS_GPIO
#define PAD_CI_D1_IS_GPIO 0
#endif 

#define PAD_CI_D2 9999
#ifndef PAD_CI_D2_IS_GPIO
#define PAD_CI_D2_IS_GPIO 0
#endif 

#define PAD_CI_D3 9999
#ifndef PAD_CI_D3_IS_GPIO
#define PAD_CI_D3_IS_GPIO 0
#endif 

#define PAD_CI_D4 9999
#ifndef PAD_CI_D4_IS_GPIO
#define PAD_CI_D4_IS_GPIO 0
#endif 

#define PAD_CI_D5 9999
#ifndef PAD_CI_D5_IS_GPIO
#define PAD_CI_D5_IS_GPIO 0
#endif 

#define PAD_CI_D6 9999
#ifndef PAD_CI_D6_IS_GPIO
#define PAD_CI_D6_IS_GPIO 0
#endif 

#define PAD_CI_D7 9999
#ifndef PAD_CI_D7_IS_GPIO
#define PAD_CI_D7_IS_GPIO 0
#endif 

#define PAD_CI_IRQAZ 9999
#ifndef PAD_CI_IRQAZ_IS_GPIO
#define PAD_CI_IRQAZ_IS_GPIO 0
#endif 

#define PAD_CI_RST 9999
#ifndef PAD_CI_RST_IS_GPIO
#define PAD_CI_RST_IS_GPIO 0
#endif 

#define PAD_CI_IORDZ 9999
#ifndef PAD_CI_IORDZ_IS_GPIO
#define PAD_CI_IORDZ_IS_GPIO 0
#endif 

#define PAD_CI_IOWRZ 9999
#ifndef PAD_CI_IOWRZ_IS_GPIO
#define PAD_CI_IOWRZ_IS_GPIO 0
#endif 

#define PAD_CI_OEZ 9999
#ifndef PAD_CI_OEZ_IS_GPIO
#define PAD_CI_OEZ_IS_GPIO 0
#endif 

#define PAD_CI_WEZ 9999
#ifndef PAD_CI_WEZ_IS_GPIO
#define PAD_CI_WEZ_IS_GPIO 0
#endif 

#define PAD_CI_REGZ 9999
#ifndef PAD_CI_REGZ_IS_GPIO
#define PAD_CI_REGZ_IS_GPIO 0
#endif 

#define PAD_CI_CEZ 9999
#ifndef PAD_CI_CEZ_IS_GPIO
#define PAD_CI_CEZ_IS_GPIO 0
#endif 

#define PAD_CI_WAITZ 9999
#ifndef PAD_CI_WAITZ_IS_GPIO
#define PAD_CI_WAITZ_IS_GPIO 0
#endif 

#define PAD_CI_CDZ 9999
#ifndef PAD_CI_CDZ_IS_GPIO
#define PAD_CI_CDZ_IS_GPIO 0
#endif 

#define BALL_W23 PAD_I2CM1_SDA
#define PAD_I2CM1_SDA 63
#define GPIO_PAD_63 GPIO62
#ifndef BALL_W23_IS_GPIO
#define BALL_W23_IS_GPIO 0
#endif 
#ifndef PAD_I2CM1_SDA_IS_GPIO
#define PAD_I2CM1_SDA_IS_GPIO BALL_W23_IS_GPIO
#endif 

#define BALL_W24 PAD_I2CM1_SCL
#define PAD_I2CM1_SCL 64
#define GPIO_PAD_64 GPIO63
#ifndef BALL_W24_IS_GPIO
#define BALL_W24_IS_GPIO 0
#endif 
#ifndef PAD_I2CM1_SCL_IS_GPIO
#define PAD_I2CM1_SCL_IS_GPIO BALL_W24_IS_GPIO
#endif 

#define PAD_TS3_CLK 9999
#ifndef PAD_TS3_CLK_IS_GPIO
#define PAD_TS3_CLK_IS_GPIO 0
#endif 

#define PAD_TS3_SYNC 9999
#ifndef PAD_TS3_SYNC_IS_GPIO
#define PAD_TS3_SYNC_IS_GPIO 0
#endif 

#define PAD_TS3_VLD 9999
#ifndef PAD_TS3_VLD_IS_GPIO
#define PAD_TS3_VLD_IS_GPIO 0
#endif 

#define PAD_TS3_D0 9999
#ifndef PAD_TS3_D0_IS_GPIO
#define PAD_TS3_D0_IS_GPIO 0
#endif 

#define PAD_TS3_D1 9999
#ifndef PAD_TS3_D1_IS_GPIO
#define PAD_TS3_D1_IS_GPIO 0
#endif 

#define PAD_TS3_D2 9999
#ifndef PAD_TS3_D2_IS_GPIO
#define PAD_TS3_D2_IS_GPIO 0
#endif 

#define PAD_TS3_D3 9999
#ifndef PAD_TS3_D3_IS_GPIO
#define PAD_TS3_D3_IS_GPIO 0
#endif 

#define PAD_TS3_D4 9999
#ifndef PAD_TS3_D4_IS_GPIO
#define PAD_TS3_D4_IS_GPIO 0
#endif 

#define PAD_TS3_D5 9999
#ifndef PAD_TS3_D5_IS_GPIO
#define PAD_TS3_D5_IS_GPIO 0
#endif 

#define PAD_TS3_D6 9999
#ifndef PAD_TS3_D6_IS_GPIO
#define PAD_TS3_D6_IS_GPIO 0
#endif 

#define PAD_TS3_D7 9999
#ifndef PAD_TS3_D7_IS_GPIO
#define PAD_TS3_D7_IS_GPIO 0
#endif 

#define BALL_F23 PAD_I2CM0_SDA
#define PAD_I2CM0_SDA 76
#define GPIO_PAD_76 GPIO75
#ifndef BALL_F23_IS_GPIO
#define BALL_F23_IS_GPIO 0
#endif 
#ifndef PAD_I2CM0_SDA_IS_GPIO
#define PAD_I2CM0_SDA_IS_GPIO BALL_F23_IS_GPIO
#endif 

#define BALL_F25 PAD_I2CM0_SCL
#define PAD_I2CM0_SCL 77
#define GPIO_PAD_77 GPIO76
#ifndef BALL_F25_IS_GPIO
#define BALL_F25_IS_GPIO 0
#endif 
#ifndef PAD_I2CM0_SCL_IS_GPIO
#define PAD_I2CM0_SCL_IS_GPIO BALL_F25_IS_GPIO
#endif 

#define BALL_D22 PAD_SPDIF_OUT
#define PAD_SPDIF_OUT 78
#define GPIO_PAD_78 GPIO77
#ifndef BALL_D22_IS_GPIO
#define BALL_D22_IS_GPIO 0
#endif 
#ifndef PAD_SPDIF_OUT_IS_GPIO
#define PAD_SPDIF_OUT_IS_GPIO BALL_D22_IS_GPIO
#endif 

#define BALL_N20 PAD_EJ_TDO
#define PAD_EJ_TDO 79
#define GPIO_PAD_79 GPIO78
#ifndef BALL_N20_IS_GPIO
#define BALL_N20_IS_GPIO 0
#endif 
#ifndef PAD_EJ_TDO_IS_GPIO
#define PAD_EJ_TDO_IS_GPIO BALL_N20_IS_GPIO
#endif 

#define BALL_N21 PAD_EJ_TDI
#define PAD_EJ_TDI 80
#define GPIO_PAD_80 GPIO79
#ifndef BALL_N21_IS_GPIO
#define BALL_N21_IS_GPIO 0
#endif 
#ifndef PAD_EJ_TDI_IS_GPIO
#define PAD_EJ_TDI_IS_GPIO BALL_N21_IS_GPIO
#endif 

#define BALL_P19 PAD_EJ_TMS
#define PAD_EJ_TMS 81
#define GPIO_PAD_81 GPIO80
#ifndef BALL_P19_IS_GPIO
#define BALL_P19_IS_GPIO 0
#endif 
#ifndef PAD_EJ_TMS_IS_GPIO
#define PAD_EJ_TMS_IS_GPIO BALL_P19_IS_GPIO
#endif 

#define BALL_P20 PAD_EJ_TCK
#define PAD_EJ_TCK 82
#define GPIO_PAD_82 GPIO81
#ifndef BALL_P20_IS_GPIO
#define BALL_P20_IS_GPIO 0
#endif 
#ifndef PAD_EJ_TCK_IS_GPIO
#define PAD_EJ_TCK_IS_GPIO BALL_P20_IS_GPIO
#endif 

#define BALL_N22 PAD_EJ_TRST_N
#define PAD_EJ_TRST_N 83
#define GPIO_PAD_83 GPIO82
#ifndef BALL_N22_IS_GPIO
#define BALL_N22_IS_GPIO 0
#endif 
#ifndef PAD_EJ_TRST_N_IS_GPIO
#define PAD_EJ_TRST_N_IS_GPIO BALL_N22_IS_GPIO
#endif 

#define PAD_TS2_CLK 9999
#ifndef PAD_TS2_CLK_IS_GPIO
#define PAD_TS2_CLK_IS_GPIO 0
#endif 

#define PAD_TS2_SYNC 9999
#ifndef PAD_TS2_SYNC_IS_GPIO
#define PAD_TS2_SYNC_IS_GPIO 0
#endif 

#define PAD_TS2_VLD 9999
#ifndef PAD_TS2_VLD_IS_GPIO
#define PAD_TS2_VLD_IS_GPIO 0
#endif 

#define PAD_TS2_D0 9999
#ifndef PAD_TS2_D0_IS_GPIO
#define PAD_TS2_D0_IS_GPIO 0
#endif 

#define PAD_TS2_D1 9999
#ifndef PAD_TS2_D1_IS_GPIO
#define PAD_TS2_D1_IS_GPIO 0
#endif 

#define PAD_TS2_D2 9999
#ifndef PAD_TS2_D2_IS_GPIO
#define PAD_TS2_D2_IS_GPIO 0
#endif 

#define PAD_TS2_D3 9999
#ifndef PAD_TS2_D3_IS_GPIO
#define PAD_TS2_D3_IS_GPIO 0
#endif 

#define PAD_TS2_D4 9999
#ifndef PAD_TS2_D4_IS_GPIO
#define PAD_TS2_D4_IS_GPIO 0
#endif 

#define PAD_TS2_D5 9999
#ifndef PAD_TS2_D5_IS_GPIO
#define PAD_TS2_D5_IS_GPIO 0
#endif 

#define PAD_TS2_D6 9999
#ifndef PAD_TS2_D6_IS_GPIO
#define PAD_TS2_D6_IS_GPIO 0
#endif 

#define PAD_TS2_D7 9999
#ifndef PAD_TS2_D7_IS_GPIO
#define PAD_TS2_D7_IS_GPIO 0
#endif 

#define BALL_J23 PAD_TS1_CLK
#define PAD_TS1_CLK 95
#define GPIO_PAD_95 GPIO94
#ifndef BALL_J23_IS_GPIO
#define BALL_J23_IS_GPIO 0
#endif 
#ifndef PAD_TS1_CLK_IS_GPIO
#define PAD_TS1_CLK_IS_GPIO BALL_J23_IS_GPIO
#endif 

#define BALL_M22 PAD_TS1_SYNC
#define PAD_TS1_SYNC 96
#define GPIO_PAD_96 GPIO95
#ifndef BALL_M22_IS_GPIO
#define BALL_M22_IS_GPIO 0
#endif 
#ifndef PAD_TS1_SYNC_IS_GPIO
#define PAD_TS1_SYNC_IS_GPIO BALL_M22_IS_GPIO
#endif 

#define BALL_L21 PAD_TS1_VLD
#define PAD_TS1_VLD 97
#define GPIO_PAD_97 GPIO96
#ifndef BALL_L21_IS_GPIO
#define BALL_L21_IS_GPIO 0
#endif 
#ifndef PAD_TS1_VLD_IS_GPIO
#define PAD_TS1_VLD_IS_GPIO BALL_L21_IS_GPIO
#endif 

#define BALL_M21 PAD_TS1_D0
#define PAD_TS1_D0 98
#define GPIO_PAD_98 GPIO97
#ifndef BALL_M21_IS_GPIO
#define BALL_M21_IS_GPIO 0
#endif 
#ifndef PAD_TS1_D0_IS_GPIO
#define PAD_TS1_D0_IS_GPIO BALL_M21_IS_GPIO
#endif 

#define BALL_M20 PAD_TS1_D1
#define PAD_TS1_D1 99
#define GPIO_PAD_99 GPIO98
#ifndef BALL_M20_IS_GPIO
#define BALL_M20_IS_GPIO 0
#endif 
#ifndef PAD_TS1_D1_IS_GPIO
#define PAD_TS1_D1_IS_GPIO BALL_M20_IS_GPIO
#endif 

#define BALL_K22 PAD_TS1_D2
#define PAD_TS1_D2 100
#define GPIO_PAD_100 GPIO99
#ifndef BALL_K22_IS_GPIO
#define BALL_K22_IS_GPIO 0
#endif 
#ifndef PAD_TS1_D2_IS_GPIO
#define PAD_TS1_D2_IS_GPIO BALL_K22_IS_GPIO
#endif 

#define BALL_K21 PAD_TS1_D3
#define PAD_TS1_D3 101
#define GPIO_PAD_101 GPIO100
#ifndef BALL_K21_IS_GPIO
#define BALL_K21_IS_GPIO 0
#endif 
#ifndef PAD_TS1_D3_IS_GPIO
#define PAD_TS1_D3_IS_GPIO BALL_K21_IS_GPIO
#endif 

#define BALL_L20 PAD_TS1_D4
#define PAD_TS1_D4 102
#define GPIO_PAD_102 GPIO101
#ifndef BALL_L20_IS_GPIO
#define BALL_L20_IS_GPIO 0
#endif 
#ifndef PAD_TS1_D4_IS_GPIO
#define PAD_TS1_D4_IS_GPIO BALL_L20_IS_GPIO
#endif 

#define BALL_K20 PAD_TS1_D5
#define PAD_TS1_D5 103
#define GPIO_PAD_103 GPIO102
#ifndef BALL_K20_IS_GPIO
#define BALL_K20_IS_GPIO 0
#endif 
#ifndef PAD_TS1_D5_IS_GPIO
#define PAD_TS1_D5_IS_GPIO BALL_K20_IS_GPIO
#endif 

#define BALL_J20 PAD_TS1_D6
#define PAD_TS1_D6 104
#define GPIO_PAD_104 GPIO103
#ifndef BALL_J20_IS_GPIO
#define BALL_J20_IS_GPIO 0
#endif 
#ifndef PAD_TS1_D6_IS_GPIO
#define PAD_TS1_D6_IS_GPIO BALL_J20_IS_GPIO
#endif 

#define BALL_J21 PAD_TS1_D7
#define PAD_TS1_D7 105
#define GPIO_PAD_105 GPIO104
#ifndef BALL_J21_IS_GPIO
#define BALL_J21_IS_GPIO 0
#endif 
#ifndef PAD_TS1_D7_IS_GPIO
#define PAD_TS1_D7_IS_GPIO BALL_J21_IS_GPIO
#endif 

#define BALL_V24 PAD_TS0_CLK
#define PAD_TS0_CLK 106
#define GPIO_PAD_106 GPIO105
#ifndef BALL_V24_IS_GPIO
#define BALL_V24_IS_GPIO 0
#endif 
#ifndef PAD_TS0_CLK_IS_GPIO
#define PAD_TS0_CLK_IS_GPIO BALL_V24_IS_GPIO
#endif 

#define BALL_V23 PAD_TS0_SYNC
#define PAD_TS0_SYNC 107
#define GPIO_PAD_107 GPIO106
#ifndef BALL_V23_IS_GPIO
#define BALL_V23_IS_GPIO 0
#endif 
#ifndef PAD_TS0_SYNC_IS_GPIO
#define PAD_TS0_SYNC_IS_GPIO BALL_V23_IS_GPIO
#endif 

#define BALL_V25 PAD_TS0_VLD
#define PAD_TS0_VLD 108
#define GPIO_PAD_108 GPIO107
#ifndef BALL_V25_IS_GPIO
#define BALL_V25_IS_GPIO 0
#endif 
#ifndef PAD_TS0_VLD_IS_GPIO
#define PAD_TS0_VLD_IS_GPIO BALL_V25_IS_GPIO
#endif 

#define BALL_R23 PAD_TS0_D0
#define PAD_TS0_D0 109
#define GPIO_PAD_109 GPIO108
#ifndef BALL_R23_IS_GPIO
#define BALL_R23_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D0_IS_GPIO
#define PAD_TS0_D0_IS_GPIO BALL_R23_IS_GPIO
#endif 

#define BALL_R25 PAD_TS0_D1
#define PAD_TS0_D1 110
#define GPIO_PAD_110 GPIO109
#ifndef BALL_R25_IS_GPIO
#define BALL_R25_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D1_IS_GPIO
#define PAD_TS0_D1_IS_GPIO BALL_R25_IS_GPIO
#endif 

#define BALL_R24 PAD_TS0_D2
#define PAD_TS0_D2 111
#define GPIO_PAD_111 GPIO110
#ifndef BALL_R24_IS_GPIO
#define BALL_R24_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D2_IS_GPIO
#define PAD_TS0_D2_IS_GPIO BALL_R24_IS_GPIO
#endif 

#define BALL_T23 PAD_TS0_D3
#define PAD_TS0_D3 112
#define GPIO_PAD_112 GPIO111
#ifndef BALL_T23_IS_GPIO
#define BALL_T23_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D3_IS_GPIO
#define PAD_TS0_D3_IS_GPIO BALL_T23_IS_GPIO
#endif 

#define BALL_T24 PAD_TS0_D4
#define PAD_TS0_D4 113
#define GPIO_PAD_113 GPIO112
#ifndef BALL_T24_IS_GPIO
#define BALL_T24_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D4_IS_GPIO
#define PAD_TS0_D4_IS_GPIO BALL_T24_IS_GPIO
#endif 

#define BALL_U23 PAD_TS0_D5
#define PAD_TS0_D5 114
#define GPIO_PAD_114 GPIO113
#ifndef BALL_U23_IS_GPIO
#define BALL_U23_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D5_IS_GPIO
#define PAD_TS0_D5_IS_GPIO BALL_U23_IS_GPIO
#endif 

#define BALL_U24 PAD_TS0_D6
#define PAD_TS0_D6 115
#define GPIO_PAD_115 GPIO114
#ifndef BALL_U24_IS_GPIO
#define BALL_U24_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D6_IS_GPIO
#define PAD_TS0_D6_IS_GPIO BALL_U24_IS_GPIO
#endif 

#define BALL_U25 PAD_TS0_D7
#define PAD_TS0_D7 116
#define GPIO_PAD_116 GPIO115
#ifndef BALL_U25_IS_GPIO
#define BALL_U25_IS_GPIO 0
#endif 
#ifndef PAD_TS0_D7_IS_GPIO
#define PAD_TS0_D7_IS_GPIO BALL_U25_IS_GPIO
#endif 

#define BALL_K24 PAD_NF_CLE
#define PAD_NF_CLE 117
#define GPIO_PAD_117 GPIO116
#ifndef BALL_K24_IS_GPIO
#define BALL_K24_IS_GPIO 0
#endif 
#ifndef PAD_NF_CLE_IS_GPIO
#define PAD_NF_CLE_IS_GPIO BALL_K24_IS_GPIO
#endif 

#define BALL_J25 PAD_NF_ALE
#define PAD_NF_ALE 118
#define GPIO_PAD_118 GPIO117
#ifndef BALL_J25_IS_GPIO
#define BALL_J25_IS_GPIO 0
#endif 
#ifndef PAD_NF_ALE_IS_GPIO
#define PAD_NF_ALE_IS_GPIO BALL_J25_IS_GPIO
#endif 

#define BALL_L24 PAD_NF_WEZ
#define PAD_NF_WEZ 119
#define GPIO_PAD_119 GPIO118
#ifndef BALL_L24_IS_GPIO
#define BALL_L24_IS_GPIO 0
#endif 
#ifndef PAD_NF_WEZ_IS_GPIO
#define PAD_NF_WEZ_IS_GPIO BALL_L24_IS_GPIO
#endif 

#define BALL_J24 PAD_NF_WPZ
#define PAD_NF_WPZ 120
#define GPIO_PAD_120 GPIO119
#ifndef BALL_J24_IS_GPIO
#define BALL_J24_IS_GPIO 0
#endif 
#ifndef PAD_NF_WPZ_IS_GPIO
#define PAD_NF_WPZ_IS_GPIO BALL_J24_IS_GPIO
#endif 

#define BALL_L25 PAD_NF_D0
#define PAD_NF_D0 121
#define GPIO_PAD_121 GPIO120
#ifndef BALL_L25_IS_GPIO
#define BALL_L25_IS_GPIO 0
#endif 
#ifndef PAD_NF_D0_IS_GPIO
#define PAD_NF_D0_IS_GPIO BALL_L25_IS_GPIO
#endif 

#define BALL_M25 PAD_NF_D1
#define PAD_NF_D1 122
#define GPIO_PAD_122 GPIO121
#ifndef BALL_M25_IS_GPIO
#define BALL_M25_IS_GPIO 0
#endif 
#ifndef PAD_NF_D1_IS_GPIO
#define PAD_NF_D1_IS_GPIO BALL_M25_IS_GPIO
#endif 

#define BALL_M23 PAD_NF_D2
#define PAD_NF_D2 123
#define GPIO_PAD_123 GPIO122
#ifndef BALL_M23_IS_GPIO
#define BALL_M23_IS_GPIO 0
#endif 
#ifndef PAD_NF_D2_IS_GPIO
#define PAD_NF_D2_IS_GPIO BALL_M23_IS_GPIO
#endif 

#define BALL_M24 PAD_NF_D3
#define PAD_NF_D3 124
#define GPIO_PAD_124 GPIO123
#ifndef BALL_M24_IS_GPIO
#define BALL_M24_IS_GPIO 0
#endif 
#ifndef PAD_NF_D3_IS_GPIO
#define PAD_NF_D3_IS_GPIO BALL_M24_IS_GPIO
#endif 

#define BALL_N24 PAD_NF_D4
#define PAD_NF_D4 125
#define GPIO_PAD_125 GPIO124
#ifndef BALL_N24_IS_GPIO
#define BALL_N24_IS_GPIO 0
#endif 
#ifndef PAD_NF_D4_IS_GPIO
#define PAD_NF_D4_IS_GPIO BALL_N24_IS_GPIO
#endif 

#define BALL_P23 PAD_NF_D5
#define PAD_NF_D5 126
#define GPIO_PAD_126 GPIO125
#ifndef BALL_P23_IS_GPIO
#define BALL_P23_IS_GPIO 0
#endif 
#ifndef PAD_NF_D5_IS_GPIO
#define PAD_NF_D5_IS_GPIO BALL_P23_IS_GPIO
#endif 

#define BALL_P24 PAD_NF_D6
#define PAD_NF_D6 127
#define GPIO_PAD_127 GPIO126
#ifndef BALL_P24_IS_GPIO
#define BALL_P24_IS_GPIO 0
#endif 
#ifndef PAD_NF_D6_IS_GPIO
#define PAD_NF_D6_IS_GPIO BALL_P24_IS_GPIO
#endif 

#define BALL_P25 PAD_NF_D7
#define PAD_NF_D7 128
#define GPIO_PAD_128 GPIO127
#ifndef BALL_P25_IS_GPIO
#define BALL_P25_IS_GPIO 0
#endif 
#ifndef PAD_NF_D7_IS_GPIO
#define PAD_NF_D7_IS_GPIO BALL_P25_IS_GPIO
#endif 

#define BALL_N23 PAD_NF_RBZ
#define PAD_NF_RBZ 129
#define GPIO_PAD_129 GPIO128
#ifndef BALL_N23_IS_GPIO
#define BALL_N23_IS_GPIO 0
#endif 
#ifndef PAD_NF_RBZ_IS_GPIO
#define PAD_NF_RBZ_IS_GPIO BALL_N23_IS_GPIO
#endif 

#define BALL_K23 PAD_NF_REZ
#define PAD_NF_REZ 130
#define GPIO_PAD_130 GPIO129
#ifndef BALL_K23_IS_GPIO
#define BALL_K23_IS_GPIO 0
#endif 
#ifndef PAD_NF_REZ_IS_GPIO
#define PAD_NF_REZ_IS_GPIO BALL_K23_IS_GPIO
#endif 

#define BALL_L23 PAD_NF_CEZ_BGA
#define PAD_NF_CEZ_BGA 131
#define GPIO_PAD_131 GPIO130
#ifndef BALL_L23_IS_GPIO
#define BALL_L23_IS_GPIO 0
#endif 
#ifndef PAD_NF_CEZ_BGA_IS_GPIO
#define PAD_NF_CEZ_BGA_IS_GPIO BALL_L23_IS_GPIO
#endif 

#define BALL_J22 PAD_NF_CE1Z_BGA
#define PAD_NF_CE1Z_BGA 132
#define GPIO_PAD_132 GPIO131
#ifndef BALL_J22_IS_GPIO
#define BALL_J22_IS_GPIO 0
#endif 
#ifndef PAD_NF_CE1Z_BGA_IS_GPIO
#define PAD_NF_CE1Z_BGA_IS_GPIO BALL_J22_IS_GPIO
#endif 

#define BALL_Y23 PAD_DM_GPIO1
#define PAD_DM_GPIO1 133
#define GPIO_PAD_133 GPIO132
#ifndef BALL_Y23_IS_GPIO
#define BALL_Y23_IS_GPIO 0
#endif 
#ifndef PAD_DM_GPIO1_IS_GPIO
#define PAD_DM_GPIO1_IS_GPIO BALL_Y23_IS_GPIO
#endif 

#define BALL_E10 PAD_DM_GPIO0
#define PAD_DM_GPIO0 134
#define GPIO_PAD_134 GPIO133
#ifndef BALL_E10_IS_GPIO
#define BALL_E10_IS_GPIO 0
#endif 
#ifndef PAD_DM_GPIO0_IS_GPIO
#define PAD_DM_GPIO0_IS_GPIO BALL_E10_IS_GPIO
#endif 

#define BALL_AA25 PAD_S_GPIO0
#define PAD_S_GPIO0 135
#define GPIO_PAD_135 GPIO134
#ifndef BALL_AA25_IS_GPIO
#define BALL_AA25_IS_GPIO 0
#endif 
#ifndef PAD_S_GPIO0_IS_GPIO
#define PAD_S_GPIO0_IS_GPIO BALL_AA25_IS_GPIO
#endif 

#define BALL_Y24 PAD_S_GPIO1
#define PAD_S_GPIO1 136
#define GPIO_PAD_136 GPIO135
#ifndef BALL_Y24_IS_GPIO
#define BALL_Y24_IS_GPIO 0
#endif 
#ifndef PAD_S_GPIO1_IS_GPIO
#define PAD_S_GPIO1_IS_GPIO BALL_Y24_IS_GPIO
#endif 

#define BALL_V22 PAD_S_GPIO2
#define PAD_S_GPIO2 137
#define GPIO_PAD_137 GPIO136
#ifndef BALL_V22_IS_GPIO
#define BALL_V22_IS_GPIO 0
#endif 
#ifndef PAD_S_GPIO2_IS_GPIO
#define PAD_S_GPIO2_IS_GPIO BALL_V22_IS_GPIO
#endif 

#define BALL_E21 PAD_VSYNC_OUT
#define PAD_VSYNC_OUT 138
#define GPIO_PAD_138 GPIO137
#ifndef BALL_E21_IS_GPIO
#define BALL_E21_IS_GPIO 0
#endif 
#ifndef PAD_VSYNC_OUT_IS_GPIO
#define PAD_VSYNC_OUT_IS_GPIO BALL_E21_IS_GPIO
#endif 

#define BALL_D21 PAD_HSYNC_OUT
#define PAD_HSYNC_OUT 139
#define GPIO_PAD_139 GPIO138
#ifndef BALL_D21_IS_GPIO
#define BALL_D21_IS_GPIO 0
#endif 
#ifndef PAD_HSYNC_OUT_IS_GPIO
#define PAD_HSYNC_OUT_IS_GPIO BALL_D21_IS_GPIO
#endif 

#define BALL_E19 PAD_GPIO_PM0
#define PAD_GPIO_PM0 140
#define GPIO_PAD_140 GPIO139
#ifndef BALL_E19_IS_GPIO
#define BALL_E19_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM0_IS_GPIO
#define PAD_GPIO_PM0_IS_GPIO BALL_E19_IS_GPIO
#endif 

#define BALL_E16 PAD_GPIO_PM1
#define PAD_GPIO_PM1 141
#define GPIO_PAD_141 GPIO140
#ifndef BALL_E16_IS_GPIO
#define BALL_E16_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM1_IS_GPIO
#define PAD_GPIO_PM1_IS_GPIO BALL_E16_IS_GPIO
#endif 

#define BALL_B21 PAD_GPIO_PM2
#define PAD_GPIO_PM2 142
#define GPIO_PAD_142 GPIO141
#ifndef BALL_B21_IS_GPIO
#define BALL_B21_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM2_IS_GPIO
#define PAD_GPIO_PM2_IS_GPIO BALL_B21_IS_GPIO
#endif 

#define BALL_D16 PAD_GPIO_PM3
#define PAD_GPIO_PM3 143
#define GPIO_PAD_143 GPIO142
#ifndef BALL_D16_IS_GPIO
#define BALL_D16_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM3_IS_GPIO
#define PAD_GPIO_PM3_IS_GPIO BALL_D16_IS_GPIO
#endif 

#define BALL_D18 PAD_GPIO_PM4
#define PAD_GPIO_PM4 144
#define GPIO_PAD_144 GPIO143
#ifndef BALL_D18_IS_GPIO
#define BALL_D18_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM4_IS_GPIO
#define PAD_GPIO_PM4_IS_GPIO BALL_D18_IS_GPIO
#endif 

#define BALL_B25 PAD_GPIO_PM5
#define PAD_GPIO_PM5 145
#define GPIO_PAD_145 GPIO144
#ifndef BALL_B25_IS_GPIO
#define BALL_B25_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM5_IS_GPIO
#define PAD_GPIO_PM5_IS_GPIO BALL_B25_IS_GPIO
#endif 

#define BALL_C19 PAD_GPIO_PM6
#define PAD_GPIO_PM6 146
#define GPIO_PAD_146 GPIO145
#ifndef BALL_C19_IS_GPIO
#define BALL_C19_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM6_IS_GPIO
#define PAD_GPIO_PM6_IS_GPIO BALL_C19_IS_GPIO
#endif 

#define BALL_E22 PAD_GPIO_PM7
#define PAD_GPIO_PM7 147
#define GPIO_PAD_147 GPIO146
#ifndef BALL_E22_IS_GPIO
#define BALL_E22_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM7_IS_GPIO
#define PAD_GPIO_PM7_IS_GPIO BALL_E22_IS_GPIO
#endif 

#define BALL_D17 PAD_IRIN2
#define PAD_IRIN2 155
#define GPIO_PAD_155 GPIO154
#ifndef BALL_D17_IS_GPIO
#define BALL_D17_IS_GPIO 0
#endif 
#ifndef PAD_IRIN2_IS_GPIO
#define PAD_IRIN2_IS_GPIO BALL_D17_IS_GPIO
#endif 

#define BALL_C11 PAD_GPIO_PM8
#define PAD_GPIO_PM8 148
#define GPIO_PAD_148 GPIO147
#ifndef BALL_C11_IS_GPIO
#define BALL_C11_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM8_IS_GPIO
#define PAD_GPIO_PM8_IS_GPIO BALL_C11_IS_GPIO
#endif 

#define BALL_AD25 PAD_IRIN
#define PAD_IRIN 153
#define GPIO_PAD_153 GPIO152
#ifndef BALL_AD25_IS_GPIO
#define BALL_AD25_IS_GPIO 0
#endif 
#ifndef PAD_IRIN_IS_GPIO
#define PAD_IRIN_IS_GPIO BALL_AD25_IS_GPIO
#endif 

#define BALL_L3 PAD_GPIO_PM9
#define PAD_GPIO_PM9 149
#define GPIO_PAD_149 GPIO148
#ifndef BALL_L3_IS_GPIO
#define BALL_L3_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM9_IS_GPIO
#define PAD_GPIO_PM9_IS_GPIO BALL_L3_IS_GPIO
#endif 

#define BALL_D5 PAD_GPIO_PM10
#define PAD_GPIO_PM10 150
#define GPIO_PAD_150 GPIO149
#ifndef BALL_D5_IS_GPIO
#define BALL_D5_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM10_IS_GPIO
#define PAD_GPIO_PM10_IS_GPIO BALL_D5_IS_GPIO
#endif 

#define BALL_C22 PAD_PM_SPI_CK
#define PAD_PM_SPI_CK 157
#define GPIO_PAD_157 GPIO156
#ifndef BALL_C22_IS_GPIO
#define BALL_C22_IS_GPIO 0
#endif 
#ifndef PAD_PM_SPI_CK_IS_GPIO
#define PAD_PM_SPI_CK_IS_GPIO BALL_C22_IS_GPIO
#endif 

#define BALL_D19 PAD_GPIO_PM11
#define PAD_GPIO_PM11 151
#define GPIO_PAD_151 GPIO150
#ifndef BALL_D19_IS_GPIO
#define BALL_D19_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM11_IS_GPIO
#define PAD_GPIO_PM11_IS_GPIO BALL_D19_IS_GPIO
#endif 

#define BALL_B22 PAD_PM_SPI_DI
#define PAD_PM_SPI_DI 158
#define GPIO_PAD_158 GPIO157
#ifndef BALL_B22_IS_GPIO
#define BALL_B22_IS_GPIO 0
#endif 
#ifndef PAD_PM_SPI_DI_IS_GPIO
#define PAD_PM_SPI_DI_IS_GPIO BALL_B22_IS_GPIO
#endif 

#define BALL_D14 PAD_GPIO_PM12
#define PAD_GPIO_PM12 152
#define GPIO_PAD_152 GPIO151
#ifndef BALL_D14_IS_GPIO
#define BALL_D14_IS_GPIO 0
#endif 
#ifndef PAD_GPIO_PM12_IS_GPIO
#define PAD_GPIO_PM12_IS_GPIO BALL_D14_IS_GPIO
#endif 

#define BALL_C21 PAD_PM_SPI_DO
#define PAD_PM_SPI_DO 159
#define GPIO_PAD_159 GPIO158
#ifndef BALL_C21_IS_GPIO
#define BALL_C21_IS_GPIO 0
#endif 
#ifndef PAD_PM_SPI_DO_IS_GPIO
#define PAD_PM_SPI_DO_IS_GPIO BALL_C21_IS_GPIO
#endif 

#define BALL_A21 PAD_PM_SPI_CZ
#define PAD_PM_SPI_CZ 156
#define GPIO_PAD_156 GPIO155
#ifndef BALL_A21_IS_GPIO
#define BALL_A21_IS_GPIO 0
#endif 
#ifndef PAD_PM_SPI_CZ_IS_GPIO
#define PAD_PM_SPI_CZ_IS_GPIO BALL_A21_IS_GPIO
#endif 

#define PAD_ET_MDIO 9999
#ifndef PAD_ET_MDIO_IS_GPIO
#define PAD_ET_MDIO_IS_GPIO 0
#endif 

#define PAD_ET_MDC 9999
#ifndef PAD_ET_MDC_IS_GPIO
#define PAD_ET_MDC_IS_GPIO 0
#endif 

#define PAD_ET_COL 9999
#ifndef PAD_ET_COL_IS_GPIO
#define PAD_ET_COL_IS_GPIO 0
#endif 

#define PAD_ET_RXD0 9999
#ifndef PAD_ET_RXD0_IS_GPIO
#define PAD_ET_RXD0_IS_GPIO 0
#endif 

#define PAD_ET_TX_CLK 9999
#ifndef PAD_ET_TX_CLK_IS_GPIO
#define PAD_ET_TX_CLK_IS_GPIO 0
#endif 

#define BALL_B18 PAD_GT_FR_CLK
#define PAD_GT_FR_CLK 189
#define GPIO_PAD_189 GPIO188
#ifndef BALL_B18_IS_GPIO
#define BALL_B18_IS_GPIO 0
#endif 
#ifndef PAD_GT_FR_CLK_IS_GPIO
#define PAD_GT_FR_CLK_IS_GPIO BALL_B18_IS_GPIO
#endif 

#define BALL_A19 PAD_GT_MDIO
#define PAD_GT_MDIO 188
#define GPIO_PAD_188 GPIO187
#ifndef BALL_A19_IS_GPIO
#define BALL_A19_IS_GPIO 0
#endif 
#ifndef PAD_GT_MDIO_IS_GPIO
#define PAD_GT_MDIO_IS_GPIO BALL_A19_IS_GPIO
#endif 

#define BALL_A18 PAD_GT_MDC
#define PAD_GT_MDC 187
#define GPIO_PAD_187 GPIO186
#ifndef BALL_A18_IS_GPIO
#define BALL_A18_IS_GPIO 0
#endif 
#ifndef PAD_GT_MDC_IS_GPIO
#define PAD_GT_MDC_IS_GPIO BALL_A18_IS_GPIO
#endif 

#define BALL_B15 PAD_GT_RX_CLK
#define PAD_GT_RX_CLK 180
#define GPIO_PAD_180 GPIO179
#ifndef BALL_B15_IS_GPIO
#define BALL_B15_IS_GPIO 0
#endif 
#ifndef PAD_GT_RX_CLK_IS_GPIO
#define PAD_GT_RX_CLK_IS_GPIO BALL_B15_IS_GPIO
#endif 

#define BALL_A15 PAD_GT_RX_D3
#define PAD_GT_RX_D3 179
#define GPIO_PAD_179 GPIO178
#ifndef BALL_A15_IS_GPIO
#define BALL_A15_IS_GPIO 0
#endif 
#ifndef PAD_GT_RX_D3_IS_GPIO
#define PAD_GT_RX_D3_IS_GPIO BALL_A15_IS_GPIO
#endif 

#define BALL_C14 PAD_GT_RX_D2
#define PAD_GT_RX_D2 178
#define GPIO_PAD_178 GPIO177
#ifndef BALL_C14_IS_GPIO
#define BALL_C14_IS_GPIO 0
#endif 
#ifndef PAD_GT_RX_D2_IS_GPIO
#define PAD_GT_RX_D2_IS_GPIO BALL_C14_IS_GPIO
#endif 

#define BALL_A14 PAD_GT_RX_D1
#define PAD_GT_RX_D1 177
#define GPIO_PAD_177 GPIO176
#ifndef BALL_A14_IS_GPIO
#define BALL_A14_IS_GPIO 0
#endif 
#ifndef PAD_GT_RX_D1_IS_GPIO
#define PAD_GT_RX_D1_IS_GPIO BALL_A14_IS_GPIO
#endif 

#define BALL_B14 PAD_GT_RX_D0
#define PAD_GT_RX_D0 176
#define GPIO_PAD_176 GPIO175
#ifndef BALL_B14_IS_GPIO
#define BALL_B14_IS_GPIO 0
#endif 
#ifndef PAD_GT_RX_D0_IS_GPIO
#define PAD_GT_RX_D0_IS_GPIO BALL_B14_IS_GPIO
#endif 

#define BALL_C13 PAD_GT_RX_CTL
#define PAD_GT_RX_CTL 175
#define GPIO_PAD_175 GPIO174
#ifndef BALL_C13_IS_GPIO
#define BALL_C13_IS_GPIO 0
#endif 
#ifndef PAD_GT_RX_CTL_IS_GPIO
#define PAD_GT_RX_CTL_IS_GPIO BALL_C13_IS_GPIO
#endif 

#define BALL_C17 PAD_GT_TX_CTL
#define PAD_GT_TX_CTL 181
#define GPIO_PAD_181 GPIO180
#ifndef BALL_C17_IS_GPIO
#define BALL_C17_IS_GPIO 0
#endif 
#ifndef PAD_GT_TX_CTL_IS_GPIO
#define PAD_GT_TX_CTL_IS_GPIO BALL_C17_IS_GPIO
#endif 

#define BALL_A17 PAD_GT_TX_D3
#define PAD_GT_TX_D3 185
#define GPIO_PAD_185 GPIO184
#ifndef BALL_A17_IS_GPIO
#define BALL_A17_IS_GPIO 0
#endif 
#ifndef PAD_GT_TX_D3_IS_GPIO
#define PAD_GT_TX_D3_IS_GPIO BALL_A17_IS_GPIO
#endif 

#define BALL_B17 PAD_GT_TX_D2
#define PAD_GT_TX_D2 184
#define GPIO_PAD_184 GPIO183
#ifndef BALL_B17_IS_GPIO
#define BALL_B17_IS_GPIO 0
#endif 
#ifndef PAD_GT_TX_D2_IS_GPIO
#define PAD_GT_TX_D2_IS_GPIO BALL_B17_IS_GPIO
#endif 

#define BALL_C16 PAD_GT_TX_D1
#define PAD_GT_TX_D1 183
#define GPIO_PAD_183 GPIO182
#ifndef BALL_C16_IS_GPIO
#define BALL_C16_IS_GPIO 0
#endif 
#ifndef PAD_GT_TX_D1_IS_GPIO
#define PAD_GT_TX_D1_IS_GPIO BALL_C16_IS_GPIO
#endif 

#define BALL_B16 PAD_GT_TX_D0
#define PAD_GT_TX_D0 182
#define GPIO_PAD_182 GPIO181
#ifndef BALL_B16_IS_GPIO
#define BALL_B16_IS_GPIO 0
#endif 
#ifndef PAD_GT_TX_D0_IS_GPIO
#define PAD_GT_TX_D0_IS_GPIO BALL_B16_IS_GPIO
#endif 

#define BALL_C15 PAD_GT_TX_CLK
#define PAD_GT_TX_CLK 186
#define GPIO_PAD_186 GPIO185
#ifndef BALL_C15_IS_GPIO
#define BALL_C15_IS_GPIO 0
#endif 
#ifndef PAD_GT_TX_CLK_IS_GPIO
#define PAD_GT_TX_CLK_IS_GPIO BALL_C15_IS_GPIO
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
#define CHIP_FAMILY_TYPE           CHIP_FAMILY_S7J

#endif /* _MSD7886_H_*/
