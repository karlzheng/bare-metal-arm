#ifndef __SYSCTL_H__
#define __SYSCTL_H__

#define SYSTCL_RIS_PLLRIS               0x00000040u

#define SYSTCL_MISC_PLLIM               0x00000040u

#define SYSCTL_RCC_ACG                  0x08000000u

#define SYSCTL_RCC_SYSDIV_MASK          0x07800000u
#define SYSCTL_RCC_SYSDIV_SHIFT         23u 
#define SYSCTL_RCC_SYSDIV_0             0x00000000u
#define SYSCTL_RCC_SYSDIV_1             0x00800000u
#define SYSCTL_RCC_SYSDIV_2             0x01000000u
#define SYSCTL_RCC_SYSDIV_3             0x01800000u
#define SYSCTL_RCC_SYSDIV_4             0x02000000u
#define SYSCTL_RCC_SYSDIV_5             0x02800000u
#define SYSCTL_RCC_SYSDIV_6             0x03000000u
#define SYSCTL_RCC_SYSDIV_7             0x03800000u
#define SYSCTL_RCC_SYSDIV_8             0x04000000u
#define SYSCTL_RCC_SYSDIV_9             0x04800000u
#define SYSCTL_RCC_SYSDIV_10            0x05000000u
#define SYSCTL_RCC_SYSDIV_11            0x05800000u
#define SYSCTL_RCC_SYSDIV_12            0x06000000u
#define SYSCTL_RCC_SYSDIV_13            0x06800000u
#define SYSCTL_RCC_SYSDIV_14            0x07000000u
#define SYSCTL_RCC_SYSDIV_15            0x07800000u

#define SYSCTL_RCC_USESYSDIV            0x00400000u

#define SYSCTL_RCC_PWMDIV_MASK          0x000E0000u
#define SYSCTL_RCC_PWMDIV_0             0x00000000u
#define SYSCTL_RCC_PWMDIV_1             0x00020000u
#define SYSCTL_RCC_PWMDIV_2             0x00040000u
#define SYSCTL_RCC_PWMDIV_3             0x00060000u
#define SYSCTL_RCC_PWMDIV_4             0x00080000u
#define SYSCTL_RCC_PWMDIV_5             0x000A0000u
#define SYSCTL_RCC_PWMDIV_6             0x000C0000u
#define SYSCTL_RCC_PWMDIV_7             0x000E0000u

#define SYSCTL_RCC_PWRDN                0x00002000u

#define SYSCTL_RCC_BYPASS               0x00000800u

#define SYSCTL_RCC_XTAL_MASK            0x000003C0u
#define SYSCTL_RCC_XTAL_SHIFT           6u
#define SYSCTL_RCC_XTAL_1MHZ            0x00000000u
#define SYSCTL_RCC_XTAL_1_84MHZ         0x00000040u
#define SYSCTL_RCC_XTAL_2MHZ            0x00000080u
#define SYSCTL_RCC_XTAL_2_45MHZ         0x000000C0u
#define SYSCTL_RCC_XTAL_3_57MHZ         0x00000100u
#define SYSCTL_RCC_XTAL_3_68MHZ         0x00000140u
#define SYSCTL_RCC_XTAL_4MHZ            0x00000180u
#define SYSCTL_RCC_XTAL_4_09MHZ         0x000001C0u
#define SYSCTL_RCC_XTAL_4_91MHZ         0x00000200u
#define SYSCTL_RCC_XTAL_5MHZ            0x00000240u
#define SYSCTL_RCC_XTAL_5_12MHZ         0x00000280u
#define SYSCTL_RCC_XTAL_6MHZ            0x000002C0u
#define SYSCTL_RCC_XTAL_6_14MHZ         0x00000300u
#define SYSCTL_RCC_XTAL_7_37MHZ         0x00000340u
#define SYSCTL_RCC_XTAL_8MHZ            0x00000380u
#define SYSCTL_RCC_XTAL_8_19MHZ         0x000003C0u

#define SYSCTL_RCC_OSCSRC_MASK          0x00000030u
#define SYSCTL_RCC_OSCSRC_MOSC          0x00000000u
#define SYSCTL_RCC_OSCSRC_IOSC          0x00000010u
#define SYSCTL_RCC_OSCSRC_IOSC_DIV4     0x00000020u
#define SYSCTL_RCC_OSCSRC_30KHZ         0x00000030u

#define SYSCTL_RCC_IOSCDIS              0x00000002u
#define SYSCTL_RCC_MOSCDIS              0x00000001u

#define SYSCTL_PLLCFG_FVAL_MASK         0x00003FE0u
#define SYSCTL_PLLCFG_FVAL_SHIFT        5u
#define SYSCTL_PLLCFG_RVAL_MASK         0x0000001Fu
#define SYSCTL_PLLCFG_RVAL_SHIFT        0

#define SYSCTL_RCC2_USERCC2             0x80000000u

#define SYSCTL_RCC2_SYSDIV2_MASK        0x1F800000u
#define SYSCTL_RCC2_SYSDIV2_SHIFT       23u
#define SYSCTL_RCC2_SYSDIV2_1           0x00000000u
#define SYSCTL_RCC2_SYSDIV2_2           0x00800000u
#define SYSCTL_RCC2_SYSDIV2_3           0x01000000u
#define SYSCTL_RCC2_SYSDIV2_4           0x01800000u
#define SYSCTL_RCC2_SYSDIV2_5           0x02000000u
#define SYSCTL_RCC2_SYSDIV2_6           0x02800000u
#define SYSCTL_RCC2_SYSDIV2_7           0x03000000u
#define SYSCTL_RCC2_SYSDIV2_8           0x03800000u
#define SYSCTL_RCC2_SYSDIV2_9           0x04000000u
#define SYSCTL_RCC2_SYSDIV2_10          0x04800000u
#define SYSCTL_RCC2_SYSDIV2_11          0x05000000u
#define SYSCTL_RCC2_SYSDIV2_12          0x05800000u
#define SYSCTL_RCC2_SYSDIV2_13          0x06000000u
#define SYSCTL_RCC2_SYSDIV2_14          0x06800000u
#define SYSCTL_RCC2_SYSDIV2_15          0x07000000u
#define SYSCTL_RCC2_SYSDIV2_16          0x07800000u
#define SYSCTL_RCC2_SYSDIV2_17          0x08000000u
#define SYSCTL_RCC2_SYSDIV2_18          0x08800000u
#define SYSCTL_RCC2_SYSDIV2_19          0x09000000u
#define SYSCTL_RCC2_SYSDIV2_20          0x09800000u
#define SYSCTL_RCC2_SYSDIV2_21          0x0A000000u
#define SYSCTL_RCC2_SYSDIV2_22          0x0A800000u
#define SYSCTL_RCC2_SYSDIV2_23          0x0B000000u
#define SYSCTL_RCC2_SYSDIV2_24          0x0B800000u
#define SYSCTL_RCC2_SYSDIV2_25          0x0C000000u
#define SYSCTL_RCC2_SYSDIV2_26          0x0C800000u
#define SYSCTL_RCC2_SYSDIV2_27          0x0D000000u
#define SYSCTL_RCC2_SYSDIV2_28          0x0D800000u
#define SYSCTL_RCC2_SYSDIV2_29          0x0E000000u
#define SYSCTL_RCC2_SYSDIV2_30          0x0E800000u
#define SYSCTL_RCC2_SYSDIV2_31          0x0F000000u
#define SYSCTL_RCC2_SYSDIV2_32          0x0F800000u
#define SYSCTL_RCC2_SYSDIV2_33          0x10000000u
#define SYSCTL_RCC2_SYSDIV2_34          0x10800000u
#define SYSCTL_RCC2_SYSDIV2_35          0x11000000u
#define SYSCTL_RCC2_SYSDIV2_36          0x11800000u
#define SYSCTL_RCC2_SYSDIV2_37          0x12000000u
#define SYSCTL_RCC2_SYSDIV2_38          0x12800000u
#define SYSCTL_RCC2_SYSDIV2_39          0x13000000u
#define SYSCTL_RCC2_SYSDIV2_40          0x13800000u
#define SYSCTL_RCC2_SYSDIV2_41          0x14000000u
#define SYSCTL_RCC2_SYSDIV2_42          0x14800000u
#define SYSCTL_RCC2_SYSDIV2_43          0x15000000u
#define SYSCTL_RCC2_SYSDIV2_44          0x15800000u
#define SYSCTL_RCC2_SYSDIV2_45          0x16000000u
#define SYSCTL_RCC2_SYSDIV2_46          0x16800000u
#define SYSCTL_RCC2_SYSDIV2_47          0x17000000u
#define SYSCTL_RCC2_SYSDIV2_48          0x17800000u
#define SYSCTL_RCC2_SYSDIV2_49          0x18000000u
#define SYSCTL_RCC2_SYSDIV2_50          0x18800000u
#define SYSCTL_RCC2_SYSDIV2_51          0x19000000u
#define SYSCTL_RCC2_SYSDIV2_52          0x19800000u
#define SYSCTL_RCC2_SYSDIV2_53          0x1A000000u
#define SYSCTL_RCC2_SYSDIV2_54          0x1A800000u
#define SYSCTL_RCC2_SYSDIV2_55          0x1B000000u
#define SYSCTL_RCC2_SYSDIV2_56          0x1B800000u
#define SYSCTL_RCC2_SYSDIV2_57          0x1C000000u
#define SYSCTL_RCC2_SYSDIV2_58          0x1C800000u
#define SYSCTL_RCC2_SYSDIV2_59          0x1D000000u
#define SYSCTL_RCC2_SYSDIV2_60          0x1D800000u
#define SYSCTL_RCC2_SYSDIV2_61          0x1E000000u
#define SYSCTL_RCC2_SYSDIV2_62          0x1E800000u
#define SYSCTL_RCC2_SYSDIV2_63          0x1F000000u
#define SYSCTL_RCC2_SYSDIV2_64          0x1F800000u

#define SYSCTL_RCC2_PWRDN2              0x00002000u
#define SYSCTL_RCC2_BYPASS2             0x00000800u

#define SYSCTL_RCC2_OSCSRC2_MASK        0x00000070u
#define SYSCTL_RCC2_OSCSRC2_MOSC        0x00000000u
#define SYSCTL_RCC2_OSCSRC2_IOSC        0x00000010u
#define SYSCTL_RCC2_OSCSRC2_IOSC_DIV4   0x00000020u
#define SYSCTL_RCC2_OSCSRC2_30KHZ       0x00000030u
#define SYSCTL_RCC2_OSCSRC2_32KHZ       0x00000070u

#define SYSCTL_PLL_SYSCLK               0x00000000u
#define SYSCTL_OSC_SYSCLK               0x00003800u

#define SYSCTL_FAST_OSCDELAY            0x00080000u // (512*1024)
#define SYSCTL_SLOW_OSCDELAY            0x00001000u // (4*1024)
#define SYSCTL_PLLLOCK_DELAY            0x00008000u // (32*1024)

#define SYSCTL_RCGC1_UART0              0x00000001u
#define SYSCTL_RCGC1_UART1              0x00000002u
#define SYSCTL_RCGC1_UART2              0x00000003u

void sysctl_setclk(uint32_t cfg_rcc, uint32_t cfg_rcc2);
uint32_t sysctl_getclk(void);
void sysctl_periph_clk_enable(uint32_t periph);

#endif /* __SYSCTL_H__ */
