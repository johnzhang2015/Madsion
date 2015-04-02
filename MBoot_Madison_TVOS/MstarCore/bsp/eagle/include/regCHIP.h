////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2006-2007 MStar Semiconductor, Inc.
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

///////////////////////////////////////////////////////////////////////////////////////////////////
///
/// file    regSystem.h
/// @brief  System Chip Top Registers Definition
/// @author MStar Semiconductor Inc.
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef _REG_SYSTEM_H_
#define _REG_SYSTEM_H_


//-------------------------------------------------------------------------------------------------
//  Hardware Capability
//-------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------
//  Macro and Define
//-------------------------------------------------------------------------------------------------

#define REG_TOP_BASE                            0x1F803C00
// Register access
#define TOP_READ(addr)                          READ_WORD(REG_TOP_BASE + ((addr)<<2))
#define TOP_WRITE(addr, val)                    WRITE_WORD((REG_TOP_BASE + ((addr)<<2)), (val))
// Register access utility
#define TOP_OR(addr, val)                       TOP_WRITE(addr, TOP_READ(addr) | (val))
#define TOP_AND(addr, val)                      TOP_WRITE(addr, TOP_READ(addr) & (val))
#define TOP_XOR(addr, val)                      TOP_WRITE(addr, TOP_READ(addr) ^ (val))

#define REG_TOP_DEVICE_ID                       0x0066
#define REG_TOP_CHIP_VERSION                    0x0067
#define CHIP_VERSION_SHFT                       0
#define CHIP_VERSION_MASK                       BMASK(7:0)
#define CHIP_REVISION_SHFT                      8
#define CHIP_REVISION_MASK                      BMASK(15:8)

#ifdef MCU_AEON
    #define REG_IRQ_BASE                        0xA0200000+(0x0c80<<2) // 0xBF805600

    #define REG_FIQ_MASK_L                      0x0024
    #define REG_FIQ_MASK_H                      0x0025
    #define REG_FIQEXP_MASK_L                   0x0026
    #define REG_FIQEXP_MASK_H                   0x0027
    #define REG_FIQ_CLEAR_L                     0x002c
    #define REG_FIQ_CLEAR_H                     0x002d
    #define REG_FIQEXP_CLEAR_L                  0x002e
    #define REG_FIQEXP_CLEAR_H                  0x002f
    #define REG_FIQ_PENDING_L                   0x002c
    #define REG_FIQ_PENDING_H                   0x002d
    #define REG_FIQEXP_PENDING_L                0x002e
    #define REG_FIQEXP_PENDING_H                0x002f

    #define REG_IRQ_MASK_L                      0x0034
    #define REG_IRQ_MASK_H                      0x0035
    #define REG_IRQEXP_MASK_L                   0x0036
    #define REG_IRQEXP_MASK_H                   0x0037
    #define REG_IRQ_PENDING_L                   0x003c
    #define REG_IRQ_PENDING_H                   0x003d
    #define REG_IRQEXP_PENDING_L                0x003e
    #define REG_IRQEXP_PENDING_H                0x003f
#else
    // for MIPS VPE 0
    #define REG_IRQ_BASE                        0x1F200000 + (0x0c80<<2) // 0xBF800A80

    #define REG_FIQ_MASK_L                      0x0044
    #define REG_FIQ_MASK_H                      0x0045
    #define REG_FIQEXP_MASK_L                   0x0046
    #define REG_FIQEXP_MASK_H                   0x0047
    #define REG_FIQ_CLEAR_L                     0x004c
    #define REG_FIQ_CLEAR_H                     0x004d
    #define REG_FIQEXP_CLEAR_L                  0x004e
    #define REG_FIQEXP_CLEAR_H                  0x004f
    #define REG_FIQ_PENDING_L                   0x004c
    #define REG_FIQ_PENDING_H                   0x004d
    #define REG_FIQEXP_PENDING_L                0x004e
    #define REG_FIQEXP_PENDING_H                0x004f

    #define REG_IRQ_MASK_L                      0x0054
    #define REG_IRQ_MASK_H                      0x0055
    #define REG_IRQEXP_MASK_L                   0x0056
    #define REG_IRQEXP_MASK_H                   0x0057
    #define REG_IRQ_PENDING_L                   0x005c
    #define REG_IRQ_PENDING_H                   0x005d
    #define REG_IRQEXP_PENDING_L                0x005e
    #define REG_IRQEXP_PENDING_H                0x005f
#endif

    #define IRQ_REG(addr)                       (*((volatile MS_U16*)(REG_IRQ_BASE + ((addr)<<2))))

    // REG_FIQ_MASK_L
    //FIQ Low 16 bits
    #define FIQL_MASK                           0xFFFF
    #define FIQ_EXTIMER0                        (0x1 << (E_FIQ_EXTIMER0         - E_FIQL_START) )
    #define FIQ_EXTIMER1                        (0x1 << (E_FIQ_EXTIMER1         - E_FIQL_START) )
    #define FIQ_WDT                             (0x1 << (E_FIQ_WDT              - E_FIQL_START) )
    #define FIQ_HDMI_NON_PCM                    (0x1 << (E_FIQ_HDMI_NON_PCM     - E_FIQL_START) )
    #define FIQ_SPDIF_IN_NON_PCM                (0x1 << (E_FIQ_SPDIF_IN_NON_PCM - E_FIQL_START) )
    #define FIQ_EMAC                            (0x1 << (E_FIQ_EMAC             - E_FIQL_START) )
    #define FIQ_SE_DSP2UP                       (0x1 << (E_FIQ_SE_DSP2UP        - E_FIQL_START) )
    #define FIQ_TSP2AEON                        (0x1 << (E_FIQ_TSP2AEON         - E_FIQL_START) )

    // REG_FIQ_MASK_H
    //FIQ High 16 bits
    #define FIQH_MASK                           0xFFFF
    #define FIQ_VIVALDI_STR                     (0x1 << (E_FIQ_VIVALDI_STR  - E_FIQH_START) )
    #define FIQ_VIVALDI_PTS                     (0x1 << (E_FIQ_VIVALDI_PTS  - E_FIQH_START) )
    #define FIQ_DSP_MIU_PROT                    (0x1 << (E_FIQ_DSP_MIU_PROT - E_FIQH_START) )
    #define FIQ_XIU_TIMEOUT                     (0x1 << (E_FIQ_XIU_TIMEOUT  - E_FIQH_START) )
    #define FIQ_VSYNC_VE4VBI                    (0x1 << (E_FIQ_VSYNC_VE4VBI - E_FIQH_START) )
    #define FIQ_FIELD_VE4VBI                    (0x1 << (E_FIQ_FIELD_VE4VBI - E_FIQH_START) )
    #define FIQ_VDMCU2HK                        (0x1 << (E_FIQ_VDMCU2HK     - E_FIQH_START) )
    #define FIQ_VE_DONE_TT                      (0x1 << (E_FIQ_VE_DONE_TT   - E_FIQH_START) )
    #define FIQ_INT_CCFL                        (0x1 << (E_FIQ_INT_CCFL     - E_FIQH_START) )
    #define FIQ_INT                             (0x1 << (E_FIQ_INT          - E_FIQH_START) )
    #define FIQ_IR                              (0x1 << (E_FIQ_IR           - E_FIQH_START) )
    #define FIQ_AFEC_VSYNC                      (0x1 << (E_FIQ_AFEC_VSYNC   - E_FIQH_START) )
    #define FIQ_DEC_DSP2UP                      (0x1 << (E_FIQ_DEC_DSP2UP   - E_FIQH_START) )
    #define FIQ_MIPS_WDT                        (0x1 << (E_FIQ_MIPS_WDT     - E_FIQH_START) )
    #define FIQ_DSP2MIPS                        (0x1 << (E_FIQ_DSP2MIPS     - E_FIQH_START) )

    // #define REG_IRQ_PENDING_L
    #define IRQ_UART0                           (0x1 << (E_IRQ_UART0        - E_IRQL_START) )
    #define IRQ_MVD                             (0x1 << (E_IRQ_MVD          - E_IRQL_START) )
    #define IRQ_PS                              (0x1 << (E_IRQ_PS           - E_IRQL_START) )
    #define IRQ_NFIE                            (0x1 << (E_IRQ_NFIE         - E_IRQL_START) )
    #define IRQ_USB                             (0x1 << (E_IRQ_USB          - E_IRQL_START) )
    #define IRQ_UHC                             (0x1 << (E_IRQ_UHC          - E_IRQL_START) )
    #define IRQ_EC_BRIDGE                       (0x1 << (E_IRQ_EC_BRIDGE    - E_IRQL_START) )
    #define IRQ_EMAC                            (0x1 << (E_IRQ_EMAC         - E_IRQL_START) )
    #define IRQ_DISP                            (0x1 << (E_IRQ_DISP         - E_IRQL_START) )
    #define IRQ_DHC                             (0x1 << (E_IRQ_DHC          - E_IRQL_START) )
    #define IRQ_SBM                             (0x1 << (E_IRQ_SBM          - E_IRQL_START) )
    #define IRQ_COMB                            (0x1 << (E_IRQ_COMB         - E_IRQL_START) )


    // #define REG_IRQ_PENDING_H
    #define IRQH_MASK                           0xFFFF
    #define IRQ_TSP2HK                          (0x1 << (E_IRQ_TSP2HK       - E_IRQH_START) )
    #define IRQ_VE                              (0x1 << (E_IRQ_VE           - E_IRQH_START) )
    #define IRQ_CIMAX2MCU                       (0x1 << (E_IRQ_CIMAX2MCU    - E_IRQH_START) )
    #define IRQ_DC                              (0x1 << (E_IRQ_DC           - E_IRQH_START) )
    #define IRQ_GOP                             (0x1 << (E_IRQ_GOP          - E_IRQH_START) )
    #define IRQ_PCM                             (0x1 << (E_IRQ_PCM          - E_IRQH_START) )
    #define IRQ_IIC0                            (0x1 << (E_IRQ_IIC0         - E_IRQH_START) )
    #define IRQ_RTC                             (0x1 << (E_IRQ_RTC          - E_IRQH_START) )
    #define IRQ_KEYPAD                          (0x1 << (E_IRQ_KEYPAD       - E_IRQH_START) )
    #define IRQ_PM                              (0x1 << (E_IRQ_PM           - E_IRQH_START) )
    #define IRQ_DDC2BI                          (0x1 << (E_IRQ_DDC2BI       - E_IRQH_START) )
    #define IRQ_SCM                             (0x1 << (E_IRQ_SCM          - E_IRQH_START) )
    #define IRQ_VBI                             (0x1 << (E_IRQ_VBI          - E_IRQH_START) )
    #define IRQ_MLINK                           (0x1 << (E_IRQ_MLINK        - E_IRQH_START) )
    #define IRQ_AFEC                            (0x1 << (E_IRQ_AFEC         - E_IRQH_START) )
    #define IRQ_ADCDVI2RIU                      (0x1 << (E_IRQ_ADCDVI2RIU   - E_IRQH_START) )

    #define IRQEXPL_MASK                        0xFFFF
    #define IRQEXPL_HVD                         (0x1 << (E_IRQEXPL_HVD              - E_IRQEXPL_START) )
    #define IRQEXPL_USB2                        (0x1 << (E_IRQEXPL_USB2             - E_IRQEXPL_START) )
    #define IRQEXPL_UHC2                        (0x1 << (E_IRQEXPL_UHC2             - E_IRQEXPL_START) )
    #define IRQEXPL_MIU                         (0x1 << (E_IRQEXPL_MIU              - E_IRQEXPL_START) )
    #define IRQEXPL_DPTX                        (0x1 << (E_IRQEXPL_DPTX             - E_IRQEXPL_START) )
    #define IRQEXPL_TMDDRLINK                   (0x1 << (E_IRQEXPL_TMDDRLINK        - E_IRQEXPL_START) )
    #define IRQEXPL_AEON2HI                     (0x1 << (E_IRQEXPL_AEON2HI          - E_IRQEXPL_START) )
    #define IRQEXPL_UART1                       (0x1 << (E_IRQEXPL_UART1            - E_IRQEXPL_START) )
    #define IRQEXPL_UART2                       (0x1 << (E_IRQEXPL_UART2            - E_IRQEXPL_START) )
    #define IRQEXPL_MPIF                        (0x1 << (E_IRQEXPL_MPIF             - E_IRQEXPL_START) )
    #define IRQEXPL_MLINK                       (0x1 << (E_IRQEXPL_MLINK            - E_IRQEXPL_START) )
    #define IRQEXPL_JPD                         (0x1 << (E_IRQEXPL_JPD              - E_IRQEXPL_START) )
    #define IRQEXPL_DISPI                       (0x1 << (E_IRQEXPL_DISPI            - E_IRQEXPL_START) )
    #define IRQEXPL_M4VE                        (0x1 << (E_IRQEXPL_M4VE             - E_IRQEXPL_START) )

    #define IRQEXPH_MASK                        0xFFFF
    #define IRQEXPH_BDMA0                       (0x1 << (E_IRQEXPH_BDMA0            - E_IRQEXPH_START) )
    #define IRQEXPH_BDMA1                       (0x1 << (E_IRQEXPH_BDMA1            - E_IRQEXPH_START) )
    #define IRQEXPH_UART2MCU                    (0x1 << (E_IRQEXPH_UART2MCU         - E_IRQEXPH_START) )
    #define IRQEXPH_URDMA2MCU                   (0x1 << (E_IRQEXPH_URDMA2MCU        - E_IRQEXPH_START) )
    #define IRQEXPH_DVI_HDMI_HDCP               (0x1 << (E_IRQEXPH_DVI_HDMI_HDCP    - E_IRQEXPH_START) )
    #define IRQEXPH_G3D2MCU                     (0x1 << (E_IRQEXPH_G3D2MCU          - E_IRQEXPH_START) )
    #define IRQEXPH_HDCP                        (0x1 << (E_IRQEXPH_HDCP             - E_IRQEXPH_START) )

    #define FIQEXPL_MASK                        0xFFFF
    #define FIQEXPL_IR_INT_RC                   (0x1 << (E_FIQEXPL_IR_INT_RC                 - E_FIQEXPL_START) )
    #define FIQEXPL_AU_DMA_BUF_INT              (0x1 << (E_FIQEXPL_AU_DMA_BUF_INT            - E_FIQEXPL_START) )
    #define FIQEXPL_8051_TO_MIPS_VPE0           (0x1 << (E_FIQEXPL_8051_TO_MIPS_VPE0         - E_FIQEXPL_START) )
    #define FIQEXPL_8051_TO_MIPS_VPE1           (0x1 << (E_FIQEXPL_8051_TO_MIPS_VPE1         - E_FIQEXPL_START) )
    #define FIQEXPL_8051_TO_AEON                (0x1 << (E_FIQEXPL_8051_TO_AEON              - E_FIQEXPL_START) )
    #define FIQEXPL_AEON_TO_MIPS_VPE0           (0x1 << (E_FIQEXPL_AEON_TO_MIPS_VPE0         - E_FIQEXPL_START) )
    #define FIQEXPL_AEON_TO_MIPS_VPE1           (0x1 << (E_FIQEXPL_AEON_TO_MIPS_VPE1         - E_FIQEXPL_START) )
    #define FIQEXPL_AEON_TO_8051                (0x1 << (E_FIQEXPL_AEON_TO_8051              - E_FIQEXPL_START) )
    #define FIQEXPL_MIPS_VPE1_TO_MIPS_VPE0      (0x1 << (E_FIQEXPL_MIPS_VPE1_TO_MIPS_VPE0    - E_FIQEXPL_START) )
    #define FIQEXPL_MIPS_VPE1_TO_AEON           (0x1 << (E_FIQEXPL_MIPS_VPE1_TO_AEON         - E_FIQEXPL_START) )
    #define FIQEXPL_MIPS_VPE1_TO_8051           (0x1 << (E_FIQEXPL_MIPS_VPE1_TO_8051         - E_FIQEXPL_START) )

    #define FIQEXPH_MASK                        0xFFFF
    #define FIQEXPH_MIPS_VPE0_TO_MIPS_VPE1      (0x1 << (E_FIQEXPH_MIPS_VPE0_TO_MIPS_VPE1    - E_FIQEXPH_START) )
    #define FIQEXPH_MIPS_VPE0_TO_AEON           (0x1 << (E_FIQEXPH_MIPS_VPE0_TO_AEON         - E_FIQEXPH_START) )
    #define FIQEXPH_MIPS_VPE0_TO_8051           (0x1 << (E_FIQEXPH_MIPS_VPE0_TO_8051         - E_FIQEXPH_START) )

//-------------------------------------------------------------------------------------------------
//  Type and Structure
//-------------------------------------------------------------------------------------------------
#define INTERFACE extern

INTERFACE MS_U32 u32_ge0_mmio_base;
//extern MS_U32 u32_bdma_mmio_base;
//extern MS_U32 u32_scaler_mmio_base;

//-------------------------------------------------------------------------------------------------
// Defines
//-------------------------------------------------------------------------------------------------
#define     REG_GE0_BASE     u32_ge0_mmio_base
//#define     REG_BDMA_BASE     u32_bdma_mmio_base
//#define     REG_SCALER_BASE   u32_scaler_mmio_base

//-------------------------------------------------------------------------------------------------

// Macros

//-------------------------------------------------------------------------------------------------

#define MReg_Write2Byte(u32Base, u32Reg, u16Val )                                                 \
    do {((volatile MS_U16*)(u32Base))[((u32Reg))] = u16Val;} while(0)

#define MReg_Read2Byte( u32Base, u32Reg )                                                         \
    ((volatile MS_U16*)(u32Base))[((u32Reg) )]

#define MReg_WriteByte(u32Base, u32Reg, u8Val )                                                 \
    do{((volatile MS_U8*)(u32Base))[((u32Reg) * 2) - ((u32Reg) & 1)] = u8Val;} while(0)

#define MReg_ReadByte( u32Base, u32Reg )                                                         \
    ((volatile MS_U8*)(u32Base))[((u32Reg) * 2) - ((u32Reg) & 1)]

 #define MReg_Write3Byte(u32Base, u32Reg, u32Val )   \
    do {                                                                     \
        if ((u32Reg) & 0x01)                                                                \
        {                                                                                               \
            MReg_WriteByte(u32Base, u32Reg , u32Val);                                    \
            MReg_Write2Byte(u32Base, (u32Reg + 1) , ((u32Val) >> 8));                                      \
        }                                                                                           \
        else                                                                                        \
        {                                                                                               \
            MReg_Write2Byte(u32Base, (u32Reg) ,  u32Val);                                                         \
            MReg_WriteByte(u32Base, (u32Reg + 2) ,  ((u32Val) >> 16));                             \
        }   \
    } while(0)

#define MReg_Write4Byte( u32Base, u32Reg, u32Val )                                               \
    do {                                                                     \
        if ((u32Reg) & 0x01)                                                      \
        {                                                                                               \
            MReg_WriteByte( u32Base, u32Reg ,  u32Val);                                         \
            MReg_Write2Byte( u32Base, (u32Reg + 1) , ( (u32Val) >> 8));                                      \
            MReg_WriteByte( u32Base, (u32Reg + 3) ,  ((u32Val) >> 24));                           \
        }                                                                                               \
        else                                                                                                \
        {                                                                                                   \
            MReg_Write2Byte(u32Base, u32Reg ,  u32Val);                                                             \
            MReg_Write2Byte(u32Base,  (u32Reg + 2) ,  ((u32Val) >> 16));                                             \
        }                                                                     \
    } while(0)

#define MReg_WriteByteMask(u32Base, u32Reg, u8Val, u8Msk )                                      \
    do {                                                                     \
        MReg_WriteByte( u32Base, u32Reg, (MReg_ReadByte(u32Base, ((u32Reg) )) & ~(u8Msk)) | ((u8Val) & (u8Msk)));                   \
    } while(0)

#define MReg_Write2ByteMask( u32Base, u32Reg, u16Val , u16Msk)                                               \
    do {                                                                     \
        if ( ((u32Reg) & 0x01) )                                                        \
        {                                                                                           \
            MReg_WriteByteMask( u32Base, ((u32Reg)+1) , (((u16Val) & 0xff00)>>8) , (((u16Msk)&0xff00)>>8) );                                                                          \
            MReg_WriteByteMask( u32Base, (u32Reg) , ((u16Val) & 0x00ff) , ((u16Msk)&0x00ff) );                                                                          \
        }                                                                               \
        else                                                                            \
        {                                                                               \
            MReg_Write2Byte(u32Base,  u32Reg ,  (((u16Val) & (u16Msk))  | (MReg_Read2Byte(u32Base,  u32Reg  ) & (~( u16Msk ))))  );                                                       \
        }      \
    } while(0)

#endif // _REG_SYSTEM_H_

