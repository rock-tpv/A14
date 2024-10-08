/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 Rockchip Electronics Co. Ltd.
 *
 * Author: Wyon Bi <bivvy.bi@rock-chips.com>
 */

#ifndef RK628_CRU_H
#define RK628_CRU_H

#include "rk628.h"

#define CRU_REG(x)		((x) + 0xc0000)

#define CRU_CPLL_CON0		CRU_REG(0x0000)
#define PLL_BYPASS_MASK		BIT(15)
#define PLL_BYPASS(x)		HIWORD_UPDATE(x, 15, 15)
#define PLL_BYPASS_SHIFT	15
#define PLL_POSTDIV1_MASK	GENMASK(14, 12)
#define PLL_POSTDIV1(x)		HIWORD_UPDATE(x, 14, 12)
#define PLL_POSTDIV1_SHIFT	12
#define PLL_FBDIV_MASK		GENMASK(11, 0)
#define PLL_FBDIV(x)		HIWORD_UPDATE(x, 11, 0)
#define PLL_FBDIV_SHIFT		0
#define CRU_CPLL_CON1		CRU_REG(0x0004)
#define PLL_PD_MASK		BIT(13)
#define PLL_PD(x)		HIWORD_UPDATE(x, 13, 13)
#define PLL_DSMPD_MASK		BIT(12)
#define PLL_DSMPD(x)		HIWORD_UPDATE(x, 12, 12)
#define PLL_DSMPD_SHIFT		12
#define PLL_LOCK		BIT(10)
#define PLL_POSTDIV2_MASK	GENMASK(8, 6)
#define PLL_POSTDIV2(x)		HIWORD_UPDATE(x, 8, 6)
#define PLL_POSTDIV2_SHIFT	6
#define PLL_REFDIV_MASK		GENMASK(5, 0)
#define PLL_REFDIV(x)		HIWORD_UPDATE(x, 5, 0)
#define PLL_REFDIV_SHIFT	0
#define CRU_CPLL_CON2		CRU_REG(0x0008)
#define PLL_FRAC_MASK		GENMASK(23, 0)
#define PLL_FRAC(x)		((x) << 0)
#define PLL_FRAC_SHIFT		0
#define CRU_CPLL_CON3		CRU_REG(0x000c)
#define CRU_CPLL_CON4		CRU_REG(0x0010)
#define CRU_GPLL_CON0		CRU_REG(0x0020)
#define CRU_GPLL_CON1		CRU_REG(0x0024)
#define CRU_GPLL_CON2		CRU_REG(0x0028)
#define CRU_GPLL_CON3		CRU_REG(0x002c)
#define CRU_GPLL_CON4		CRU_REG(0x0030)
#define CRU_APLL_CON0		CRU_REG(0x0040)
#define CRU_APLL_CON1		CRU_REG(0x0044)
#define CRU_APLL_CON2		CRU_REG(0x0048)
#define CRU_APLL_CON3		CRU_REG(0x004c)
#define CRU_APLL_CON4		CRU_REG(0x0050)
#define CRU_MODE_CON00		CRU_REG(0x0060)
#define CLK_APLL_MODE_MASK	BIT(4)
#define CLK_APLL_MODE_SHIFT	4
#define CLK_APLL_MODE_GPLL	1
#define CLK_APLL_MODE_OSC	0
#define CLK_GPLL_MODE_MASK	BIT(2)
#define CLK_GPLL_MODE_SHIFT	2
#define CLK_GPLL_MODE_GPLL	1
#define CLK_GPLL_MODE_OSC	0
#define CLK_CPLL_MODE_MASK	BIT(0)
#define CLK_CPLL_MODE_SHIFT	0
#define CLK_CPLL_MODE_CPLL	1
#define CLK_CPLL_MODE_OSC	0
#define CRU_CLKSEL_CON00	CRU_REG(0x0080)
#define CRU_CLKSEL_CON01	CRU_REG(0x0084)
#define CRU_CLKSEL_CON02	CRU_REG(0x0088)
#define SCLK_VOP_SEL_MASK	BIT(9)
#define SCLK_VOP_SEL_SHIFT	9
#define SCLK_VOP_SEL_GPLL	1
#define SCLK_VOP_SEL_CPLL	0
#define CLK_RX_READ_SEL_MASK	BIT(8)
#define CLK_RX_READ_SEL_SHIFT	8
#define CLK_RX_READ_SEL_GPLL	1
#define CLK_RX_READ_SEL_CPLL	0
#define CLK_BT1120DEC_SEL_MASK	BIT(7)
#define CLK_BT1120DEC_SEL_SHIFT	7
#define CLK_BT1120DEC_SEL_GPLL	1
#define CLK_BT1120DEC_SEL_CPLL	0
#define CLK_BT1120DEC_DIV(x)	HIWORD_UPDATE(x, 4, 0)
#define CRU_CLKSEL_CON03	CRU_REG(0x008c)
#define CRU_CLKSEL_CON04	CRU_REG(0x0090)
#define CLK_HDMIRX_AUD_DIV_MASK	GENMASK(13, 6)
#define CLK_HDMIRX_AUD_DIV(x)	HIWORD_UPDATE(x, 13, 6)
#define CLK_HDMIRX_AUD_SEL_MASK	GENMASK(15, 14)
#define CLK_HDMIRX_AUD_SEL(x)	HIWORD_UPDATE(x, 15, 14)
#define CRU_CLKSEL_CON05	CRU_REG(0x0094)
#define CLK_HDMIRX_AUD_DIV_MASK	GENMASK(13, 6)
#define CLK_HDMIRX_AUD_DIV(x)	HIWORD_UPDATE(x, 13, 6)
#define CLK_HDMIRX_AUD_SEL_V1(x)	HIWORD_UPDATE(x, 15, 15)
#define CLK_HDMIRX_AUD_SEL_MASK_V1	GENMASK(15, 15)
#define CLK_HDMIRX_AUD_SEL_V2(x)	HIWORD_UPDATE(x, 15, 14)
#define CLK_HDMIRX_AUD_SEL_MASK_V2	GENMASK(15, 14)
#define CLK_IMODET_SEL_MASK	BIT(5)
#define CLK_IMODET_SEL_SHIFT	5
#define CRU_CLKSEL_CON06	CRU_REG(0x0098)
#define SCLK_UART_SEL(x)	HIWORD_UPDATE(x, 15, 14)
#define SCLK_UART_SEL_MASK	GENMASK(15, 14)
#define SCLK_UART_SEL_SHIFT	14
#define SCLK_UART_SEL_OSC	2
#define SCLK_UART_SEL_UART_FRAC	1
#define SCLK_UART_SEL_UART_SRC	0
#define CRU_CLKSEL_CON07	CRU_REG(0x009c)
#define CRU_CLKSEL_CON08	CRU_REG(0x00a0)
#define CRU_CLKSEL_CON09	CRU_REG(0x00a4)
#define CRU_CLKSEL_CON10	CRU_REG(0x00a8)
#define CRU_CLKSEL_CON11	CRU_REG(0x00ac)
#define CRU_CLKSEL_CON12	CRU_REG(0x00b0)
#define CRU_CLKSEL_CON13	CRU_REG(0x00b4)
#define CRU_CLKSEL_CON14	CRU_REG(0x00b8)
#define CRU_CLKSEL_CON15	CRU_REG(0x00bc)
#define CRU_CLKSEL_CON16	CRU_REG(0x00c0)
#define CRU_CLKSEL_CON17	CRU_REG(0x00c4)
#define CRU_CLKSEL_CON18	CRU_REG(0x00c8)
#define CRU_CLKSEL_CON20	CRU_REG(0x00d0)
#define CRU_CLKSEL_CON21	CRU_REG(0x00d4)
#define CLK_UART_SRC_SEL_MASK	BIT(15)
#define CLK_UART_SRC_SEL_GPLL	(1 << 15)
#define CLK_UART_SRC_SEL_CPLL	(0 << 15)
#define CLK_UART_SRC_DIV_MASK	GENMASK(12, 8)
#define CLK_UART_SRC_DIV_SHIFT	8
#define CRU_GATE_CON00		CRU_REG(0x0180)
#define CRU_GATE_CON01		CRU_REG(0x0184)
#define CRU_GATE_CON02		CRU_REG(0x0188)
#define CRU_GATE_CON03		CRU_REG(0x018c)
#define CRU_GATE_CON04		CRU_REG(0x0190)
#define CRU_GATE_CON05		CRU_REG(0x0194)
#define CRU_SOFTRST_CON00	CRU_REG(0x0200)
#define CRU_SOFTRST_CON01	CRU_REG(0x0204)
#define CRU_SOFTRST_CON02	CRU_REG(0x0208)
#define CRU_SOFTRST_CON04	CRU_REG(0x0210)
#define CRU_MAX_REGISTER	CRU_SOFTRST_CON04

#define CGU_CLK_CPLL		1
#define CGU_CLK_GPLL		2
#define CGU_CLK_CPLL_MUX	3
#define CGU_CLK_GPLL_MUX	4
#define CGU_PCLK_GPIO0		5
#define CGU_PCLK_GPIO1		6
#define CGU_PCLK_GPIO2		7
#define CGU_PCLK_GPIO3		8
#define CGU_PCLK_TXPHY_CON	9
#define CGU_PCLK_EFUSE		10
#define CGU_PCLK_DSI0		11
#define CGU_PCLK_DSI1		12
#define CGU_PCLK_CSI		13
#define CGU_PCLK_HDMITX		14
#define CGU_PCLK_RXPHY		15
#define CGU_PCLK_HDMIRX		16
#define CGU_PCLK_DPRX		17
#define CGU_PCLK_GVIHOST	18
#define CGU_CLK_CFG_DPHY0	19
#define CGU_CLK_CFG_DPHY1	20
#define CGU_CLK_TXESC		21
#define CGU_CLK_DPRX_VID	22
#define CGU_CLK_IMODET		23
#define CGU_CLK_HDMIRX_AUD	24
#define CGU_CLK_HDMIRX_CEC	25
#define CGU_CLK_RX_READ		26
#define CGU_SCLK_VOP		27
#define CGU_PCLK_LOGIC		28
#define CGU_CLK_GPIO_DB0	29
#define CGU_CLK_GPIO_DB1	30
#define CGU_CLK_GPIO_DB2	31
#define CGU_CLK_GPIO_DB3	32
#define CGU_CLK_I2S_8CH_SRC	33
#define CGU_CLK_I2S_8CH_FRAC	34
#define CGU_MCLK_I2S_8CH	35
#define CGU_I2S_MCLKOUT		36
#define CGU_BT1120DEC		37
#define CGU_SCLK_UART		38
#define CGU_CLK_APLL		39

unsigned long rk628_cru_clk_get_rate(struct rk628 *rk628, unsigned int id);
int rk628_cru_clk_set_rate(struct rk628 *rk628, unsigned int id,
			   unsigned long rate);
void rk628_cru_init(struct rk628 *rk628);

#endif
