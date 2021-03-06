/*
 * Copyright 2017-2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/* GPIO_AD_B0_13 (coord L14), UART1_RXD */
#define BOARD_INITPINS_UART1_RXD_PERIPHERAL                              LPUART1   /*!< Device name: LPUART1 */
#define BOARD_INITPINS_UART1_RXD_SIGNAL                                       RX   /*!< LPUART1 signal: RX */

/* GPIO_AD_B0_12 (coord K14), UART1_TXD */
#define BOARD_INITPINS_UART1_TXD_PERIPHERAL                              LPUART1   /*!< Device name: LPUART1 */
#define BOARD_INITPINS_UART1_TXD_SIGNAL                                       TX   /*!< LPUART1 signal: TX */

/* GPIO_AD_B1_00 (coord J11), I2C1_SCL/CSI_I2C_SCL/J35[20]/J23[6]/U13[17]/U32[4] */
#define BOARD_INITPINS_I2C1_SCL_PERIPHERAL                                LPI2C1   /*!< Device name: LPI2C1 */
#define BOARD_INITPINS_I2C1_SCL_SIGNAL                                       SCL   /*!< LPI2C1 signal: SCL */

/* GPIO_AD_B1_01 (coord K11), I2C1_SDA/CSI_I2C_SDA/J35[22]/J23[5]/U13[18]/U32[6] */
#define BOARD_INITPINS_I2C1_SDA_PERIPHERAL                                LPI2C1   /*!< Device name: LPI2C1 */
#define BOARD_INITPINS_I2C1_SDA_SIGNAL                                       SDA   /*!< LPI2C1 signal: SDA */

/* GPIO_AD_B1_09 (coord M13), SAI1_MCLK/CSI_D8/J35[11] */
#define BOARD_INITPINS_CSI_D8_PERIPHERAL                                    SAI1   /*!< Device name: SAI1 */
#define BOARD_INITPINS_CSI_D8_SIGNAL                                    sai_mclk   /*!< SAI1 signal: sai_mclk */

/* GPIO_AD_B1_14 (coord G12), SAI1_TX_BCLK/CSI_D3/J35[4]/U13[12] */
#define BOARD_INITPINS_CSI_D3_PERIPHERAL                                    SAI1   /*!< Device name: SAI1 */
#define BOARD_INITPINS_CSI_D3_SIGNAL                                 sai_tx_bclk   /*!< SAI1 signal: sai_tx_bclk */

/* GPIO_AD_B1_13 (coord H11), SAI1_TXD/CSI_D4/J35[3]/U13[14] */
#define BOARD_INITPINS_CSI_D4_PERIPHERAL                                    SAI1   /*!< Device name: SAI1 */
#define BOARD_INITPINS_CSI_D4_SIGNAL                                sai_tx_data0   /*!< SAI1 signal: sai_tx_data0 */

/* GPIO_AD_B1_15 (coord J14), SAI1_TX_SYNC/CSI_D2/J35[6]/U13[13] */
#define BOARD_INITPINS_CSI_D2_PERIPHERAL                                    SAI1   /*!< Device name: SAI1 */
#define BOARD_INITPINS_CSI_D2_SIGNAL                                 sai_tx_sync   /*!< SAI1 signal: sai_tx_sync */

/* GPIO_AD_B1_12 (coord H12), SAI1_RXD/CSI_D5/J35[5]/U13[16] */
#define BOARD_INITPINS_CSI_D5_PERIPHERAL                                    SAI1   /*!< Device name: SAI1 */
#define BOARD_INITPINS_CSI_D5_SIGNAL                                sai_rx_data0   /*!< SAI1 signal: sai_rx_data0 */

/* GPIO_SD_B0_00 (coord J4), SD1_CMD/J24[6] */
#define BOARD_INITPINS_SD1_CMD_PERIPHERAL                                 USDHC1   /*!< Device name: USDHC1 */
#define BOARD_INITPINS_SD1_CMD_SIGNAL                                  usdhc_cmd   /*!< USDHC1 signal: usdhc_cmd */

/* GPIO_SD_B0_02 (coord J1), SD1_D0/J24[4]/SPI_MOSI/PWM */
#define BOARD_INITPINS_SD1_D0_PERIPHERAL                                  USDHC1   /*!< Device name: USDHC1 */
#define BOARD_INITPINS_SD1_D0_SIGNAL                                  usdhc_data   /*!< USDHC1 signal: usdhc_data */
#define BOARD_INITPINS_SD1_D0_CHANNEL                                         0U   /*!< USDHC1 usdhc_data channel: 0 */

/* GPIO_SD_B0_03 (coord K1), SD1_D1/J24[5]/SPI_MISO */
#define BOARD_INITPINS_SD1_D1_PERIPHERAL                                  USDHC1   /*!< Device name: USDHC1 */
#define BOARD_INITPINS_SD1_D1_SIGNAL                                  usdhc_data   /*!< USDHC1 signal: usdhc_data */
#define BOARD_INITPINS_SD1_D1_CHANNEL                                         1U   /*!< USDHC1 usdhc_data channel: 1 */

/* GPIO_SD_B0_04 (coord H2), SD1_D2 */
#define BOARD_INITPINS_SD1_D2_PERIPHERAL                                  USDHC1   /*!< Device name: USDHC1 */
#define BOARD_INITPINS_SD1_D2_SIGNAL                                  usdhc_data   /*!< USDHC1 signal: usdhc_data */
#define BOARD_INITPINS_SD1_D2_CHANNEL                                         2U   /*!< USDHC1 usdhc_data channel: 2 */

/* GPIO_SD_B0_05 (coord J2), SD1_D3 */
#define BOARD_INITPINS_SD1_D3_PERIPHERAL                                  USDHC1   /*!< Device name: USDHC1 */
#define BOARD_INITPINS_SD1_D3_SIGNAL                                  usdhc_data   /*!< USDHC1 signal: usdhc_data */
#define BOARD_INITPINS_SD1_D3_CHANNEL                                         3U   /*!< USDHC1 usdhc_data channel: 3 */

/* GPIO_B1_14 (coord C14), SD0_VSELECT */
#define BOARD_INITPINS_SD0_VSELECT_PERIPHERAL                             USDHC1   /*!< Device name: USDHC1 */
#define BOARD_INITPINS_SD0_VSELECT_SIGNAL                          usdhc_vselect   /*!< USDHC1 signal: usdhc_vselect */

/* GPIO_SD_B0_01 (coord J3), SD1_CLK/J24[3] */
#define BOARD_INITPINS_SD1_CLK_PERIPHERAL                                 USDHC1   /*!< Device name: USDHC1 */
#define BOARD_INITPINS_SD1_CLK_SIGNAL                                  usdhc_clk   /*!< USDHC1 signal: usdhc_clk */

/* GPIO_AD_B0_05 (coord G14), CAN_STBY/BOOT_MODE[1]/Flash_RST/U12[8] */
#define BOARD_INITPINS_CAN_STBY_GPIO                                       GPIO1   /*!< GPIO device name: GPIO1 */
#define BOARD_INITPINS_CAN_STBY_PORT                                       GPIO1   /*!< PORT device name: GPIO1 */
#define BOARD_INITPINS_CAN_STBY_PIN                                           5U   /*!< GPIO1 pin index: 5 */

/* GPIO_B1_12 (coord D13), SD_CD_SW */
#define BOARD_INITPINS_SD_CD_SW_GPIO                                       GPIO2   /*!< GPIO device name: GPIO2 */
#define BOARD_INITPINS_SD_CD_SW_PORT                                       GPIO2   /*!< PORT device name: GPIO2 */
#define BOARD_INITPINS_SD_CD_SW_PIN                                          28U   /*!< GPIO2 pin index: 28 */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
