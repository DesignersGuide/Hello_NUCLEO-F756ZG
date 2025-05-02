/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 27/09/2024 09:56:41
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ ETH            -----------------------------*/
#define MX_ETH                                  1

/* Pins */

/* ETH_CRS_DV */
#define MX_ETH_CRS_DV_Pin                       PA7
#define MX_ETH_CRS_DV_GPIO_Pin                  GPIO_PIN_7
#define MX_ETH_CRS_DV_GPIOx                     GPIOA
#define MX_ETH_CRS_DV_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_ETH_CRS_DV_GPIO_PuPd                 GPIO_NOPULL
#define MX_ETH_CRS_DV_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_CRS_DV_GPIO_AF                   GPIO_AF11_ETH

/* ETH_MDC */
#define MX_ETH_MDC_Pin                          PC1
#define MX_ETH_MDC_GPIO_Pin                     GPIO_PIN_1
#define MX_ETH_MDC_GPIOx                        GPIOC
#define MX_ETH_MDC_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_ETH_MDC_GPIO_PuPd                    GPIO_NOPULL
#define MX_ETH_MDC_GPIO_Speed                   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_MDC_GPIO_AF                      GPIO_AF11_ETH

/* ETH_MDIO */
#define MX_ETH_MDIO_Pin                         PA2
#define MX_ETH_MDIO_GPIO_Pin                    GPIO_PIN_2
#define MX_ETH_MDIO_GPIOx                       GPIOA
#define MX_ETH_MDIO_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_MDIO_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_MDIO_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_MDIO_GPIO_AF                     GPIO_AF11_ETH

/* ETH_REF_CLK */
#define MX_ETH_REF_CLK_Pin                      PA1
#define MX_ETH_REF_CLK_GPIO_Pin                 GPIO_PIN_1
#define MX_ETH_REF_CLK_GPIOx                    GPIOA
#define MX_ETH_REF_CLK_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_ETH_REF_CLK_GPIO_PuPd                GPIO_NOPULL
#define MX_ETH_REF_CLK_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_REF_CLK_GPIO_AF                  GPIO_AF11_ETH

/* ETH_RXD0 */
#define MX_ETH_RXD0_Pin                         PC4
#define MX_ETH_RXD0_GPIO_Pin                    GPIO_PIN_4
#define MX_ETH_RXD0_GPIOx                       GPIOC
#define MX_ETH_RXD0_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_RXD0_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD0_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_RXD0_GPIO_AF                     GPIO_AF11_ETH

/* ETH_RXD1 */
#define MX_ETH_RXD1_Pin                         PC5
#define MX_ETH_RXD1_GPIO_Pin                    GPIO_PIN_5
#define MX_ETH_RXD1_GPIOx                       GPIOC
#define MX_ETH_RXD1_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_RXD1_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD1_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_RXD1_GPIO_AF                     GPIO_AF11_ETH

/* ETH_TXD0 */
#define MX_ETH_TXD0_Pin                         PG13
#define MX_ETH_TXD0_GPIO_Pin                    GPIO_PIN_13
#define MX_ETH_TXD0_GPIOx                       GPIOG
#define MX_ETH_TXD0_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_TXD0_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD0_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_TXD0_GPIO_AF                     GPIO_AF11_ETH

/* ETH_TXD1 */
#define MX_ETH_TXD1_Pin                         PB13
#define MX_ETH_TXD1_GPIO_Pin                    GPIO_PIN_13
#define MX_ETH_TXD1_GPIOx                       GPIOB
#define MX_ETH_TXD1_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_TXD1_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD1_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_TXD1_GPIO_AF                     GPIO_AF11_ETH

/* ETH_TX_EN */
#define MX_ETH_TX_EN_Pin                        PG11
#define MX_ETH_TX_EN_GPIO_Pin                   GPIO_PIN_11
#define MX_ETH_TX_EN_GPIOx                      GPIOG
#define MX_ETH_TX_EN_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_TX_EN_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_TX_EN_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_TX_EN_GPIO_AF                    GPIO_AF11_ETH

/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                 1

/* Filter Settings */
#define MX_I2C1_ANF_ENABLE                      1
#define MX_I2C1_DNF                             0

/* Peripheral Clock Frequency */
#define MX_I2C1_PERIPH_CLOCK_FREQ               36000000

/* Pins */

/* I2C1_SCL */
#define MX_I2C1_SCL_Pin                         PB8
#define MX_I2C1_SCL_GPIO_Pin                    GPIO_PIN_8
#define MX_I2C1_SCL_GPIOx                       GPIOB
#define MX_I2C1_SCL_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C1_SCL_GPIO_PuPd                   GPIO_NOPULL
#define MX_I2C1_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SCL_GPIO_AF                     GPIO_AF4_I2C1

/* I2C1_SDA */
#define MX_I2C1_SDA_Pin                         PB9
#define MX_I2C1_SDA_GPIO_Pin                    GPIO_PIN_9
#define MX_I2C1_SDA_GPIOx                       GPIOB
#define MX_I2C1_SDA_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C1_SDA_GPIO_PuPd                   GPIO_NOPULL
#define MX_I2C1_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SDA_GPIO_AF                     GPIO_AF4_I2C1

/*------------------------------ USART3         -----------------------------*/
#define MX_USART3                               1

/* Virtual mode */
#define MX_USART3_VM                            VM_ASYNC
#define MX_USART3_VM_ASYNC                      1

/* Pins */

/* USART3_RX */
#define MX_USART3_RX_Pin                        PD9
#define MX_USART3_RX_GPIO_Pin                   GPIO_PIN_9
#define MX_USART3_RX_GPIOx                      GPIOD
#define MX_USART3_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART3_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART3_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_RX_GPIO_AF                    GPIO_AF7_USART3

/* USART3_TX */
#define MX_USART3_TX_Pin                        PD8
#define MX_USART3_TX_GPIO_Pin                   GPIO_PIN_8
#define MX_USART3_TX_GPIOx                      GPIOD
#define MX_USART3_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART3_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART3_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_TX_GPIO_AF                    GPIO_AF7_USART3

/*------------------------------ USB_OTG_FS     -----------------------------*/
#define MX_USB_OTG_FS                           1

/* Handle */
#define MX_USB_OTG_FS_HANDLE                    hpcd_USB_OTG_FS

/* Virtual mode */
#define MX_USB_OTG_FS_VM                        Device_Only
#define MX_USB_OTG_FS_Device_Only               1

/* Pins */

/* USB_OTG_FS_DM */
#define MX_USB_OTG_FS_DM_Pin                    PA11
#define MX_USB_OTG_FS_DM_GPIO_Pin               GPIO_PIN_11
#define MX_USB_OTG_FS_DM_GPIOx                  GPIOA
#define MX_USB_OTG_FS_DM_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DM_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_DM_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_DM_GPIO_AF                GPIO_AF10_OTG_FS

/* USB_OTG_FS_DP */
#define MX_USB_OTG_FS_DP_Pin                    PA12
#define MX_USB_OTG_FS_DP_GPIO_Pin               GPIO_PIN_12
#define MX_USB_OTG_FS_DP_GPIOx                  GPIOA
#define MX_USB_OTG_FS_DP_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DP_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_DP_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_DP_GPIO_AF                GPIO_AF10_OTG_FS

/* USB_OTG_FS_ID */
#define MX_USB_OTG_FS_ID_Pin                    PA10
#define MX_USB_OTG_FS_ID_GPIO_Pin               GPIO_PIN_10
#define MX_USB_OTG_FS_ID_GPIOx                  GPIOA
#define MX_USB_OTG_FS_ID_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_ID_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_ID_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_ID_GPIO_AF                GPIO_AF10_OTG_FS

/* USB_OTG_FS_SOF */
#define MX_USB_OTG_FS_SOF_Pin                   PA8
#define MX_USB_OTG_FS_SOF_GPIO_Pin              GPIO_PIN_8
#define MX_USB_OTG_FS_SOF_GPIOx                 GPIOA
#define MX_USB_OTG_FS_SOF_GPIO_Mode             GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_SOF_GPIO_PuPd             GPIO_NOPULL
#define MX_USB_OTG_FS_SOF_GPIO_Speed            GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_SOF_GPIO_AF               GPIO_AF10_OTG_FS

/* USB_OTG_FS_VBUS */
#define MX_USB_OTG_FS_VBUS_Pin                  PA9
#define MX_USB_OTG_FS_VBUS_GPIO_Pin             GPIO_PIN_9
#define MX_USB_OTG_FS_VBUS_GPIOx                GPIOA
#define MX_USB_OTG_FS_VBUS_GPIO_Mode            GPIO_MODE_INPUT
#define MX_USB_OTG_FS_VBUS_GPIO_PuPd            GPIO_NOPULL
#define MX_USB_OTG_FS_VBUS_GPIO_Speed           GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_VBUS_GPIO_AF              GPIO_AF10_OTG_FS

#endif  /* MX_DEVICE_H__ */
