// Note: if the board shows odd behaviour check the option bits and make sure nDBANK is
// set to make the 2MByte space continuous instead of divided into two 1MByte segments.

#define MICROPY_HW_BOARD_NAME       "NUCLEO-F767ZI"
#define MICROPY_HW_MCU_NAME         "STM32F767"

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_SDCARD    (1)

#define MICROPY_BOARD_EARLY_INIT    NUCLEO_F767ZI_board_early_init
void NUCLEO_F767ZI_board_early_init(void);

// Add on start
// HSE is 8MHz, HSI is 16MHz CPU freq set to 84MHz
// Default source for the clock is HSI.
// For revisions of the board greater than C-01, HSE can be used as a
// clock source by removing the #define MICROPY_HW_CLK_USE_HSE line
#define MICROPY_HW_CLK_USE_HSI (1)

#if MICROPY_HW_CLK_USE_HSI
#define MICROPY_HW_CLK_PLLM (8)
#else
#define MICROPY_HW_CLK_PLLM (4)
#endif
#define MICROPY_HW_CLK_PLLN (216)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (9)
#define MICROPY_HW_FLASH_LATENCY (FLASH_LATENCY_7) // 210-216 MHz needs 7 wait states
// Add on end

// Comment out start
// HSE is 8MHz
/*
#define MICROPY_HW_CLK_PLLM (4)
#define MICROPY_HW_CLK_PLLN (216)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (9)
#define MICROPY_HW_FLASH_LATENCY (FLASH_LATENCY_7) // 210-216 MHz needs 7 wait states
*/
// Comment out end

// UART config
#define MICROPY_HW_UART2_TX         (pin_D5)
#define MICROPY_HW_UART2_RX         (pin_D6)
#define MICROPY_HW_UART2_RTS        (pin_D4)
#define MICROPY_HW_UART2_CTS        (pin_A0)
#define MICROPY_HW_UART3_TX         (pin_D8)
#define MICROPY_HW_UART3_RX         (pin_D9)
#define MICROPY_HW_UART6_TX         (pin_C6)
#define MICROPY_HW_UART6_RX         (pin_C7)
#define MICROPY_HW_UART5_TX         (pin_B6)
#define MICROPY_HW_UART5_RX         (pin_B12)
#define MICROPY_HW_UART7_TX         (pin_E8)
#define MICROPY_HW_UART7_RX         (pin_E7)
#define MICROPY_HW_UART8_TX         (pin_E1)
#define MICROPY_HW_UART8_RX         (pin_E0)

#define MICROPY_HW_UART_REPL        PYB_UART_3
#define MICROPY_HW_UART_REPL_BAUD   115200

// I2C buses
#define MICROPY_HW_I2C1_SCL         (pin_B8)
#define MICROPY_HW_I2C1_SDA         (pin_B9)
#define MICROPY_HW_I2C2_SCL         (pin_F1)
#define MICROPY_HW_I2C2_SDA         (pin_F0)
#define MICROPY_HW_I2C4_SCL         (pin_D12)
#define MICROPY_HW_I2C4_SDA         (pin_D13)

// SPI buses
#define MICROPY_HW_SPI1_NSS         (pin_A4) // spi.c>spi_init>enable_nss_pin=false
#define MICROPY_HW_SPI1_SCK         (pin_A5)
#define MICROPY_HW_SPI1_MISO        (pin_A6)
#define MICROPY_HW_SPI1_MOSI        (pin_D7)

#define MICROPY_HW_SPI2_NSS         (pin_B12) // spi.c>spi_init>enable_nss_pin=false
#define MICROPY_HW_SPI2_SCK         (pin_B10)
#define MICROPY_HW_SPI2_MISO        (pin_C2)
#define MICROPY_HW_SPI2_MOSI        (pin_B15)

#define MICROPY_HW_SPI3_NSS         (pin_A4) // spi.c>spi_init>enable_nss_pin=false
#define MICROPY_HW_SPI3_SCK         (pin_C10)
#define MICROPY_HW_SPI3_MISO        (pin_C11)
#define MICROPY_HW_SPI3_MOSI        (pin_C12)

// CAN busses
#define MICROPY_HW_CAN1_TX          (pin_D1)
#define MICROPY_HW_CAN1_RX          (pin_D0)

// USRSW is pulled low. Pressing the button makes the input go high.
#define MICROPY_HW_USRSW_PIN        (pin_C13)
#define MICROPY_HW_USRSW_PULL       (GPIO_NOPULL)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_RISING)
#define MICROPY_HW_USRSW_PRESSED    (1)

// LEDs
#define MICROPY_HW_LED1             (pin_B0) // green
#define MICROPY_HW_LED2             (pin_B7) // blue
#define MICROPY_HW_LED3             (pin_B14) // red
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB config (CN13 - USB OTG FS)
#define MICROPY_HW_USB_FS              (1)
#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
#define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10)

// SD card detect switch (actual pin may need to be changed for a particular use)
#define MICROPY_HW_SDCARD_DETECT_PIN        (pin_G2)
#define MICROPY_HW_SDCARD_DETECT_PULL       (GPIO_PULLUP)
#define MICROPY_HW_SDCARD_DETECT_PRESENT    (GPIO_PIN_RESET)

// Ethernet via RMII
#define MICROPY_HW_ETH_MDC          (pin_C1)
#define MICROPY_HW_ETH_MDIO         (pin_A2)
#define MICROPY_HW_ETH_RMII_REF_CLK (pin_A1)
#define MICROPY_HW_ETH_RMII_CRS_DV  (pin_A7)
#define MICROPY_HW_ETH_RMII_RXD0    (pin_C4)
#define MICROPY_HW_ETH_RMII_RXD1    (pin_C5)
#define MICROPY_HW_ETH_RMII_TX_EN   (pin_G11)
#define MICROPY_HW_ETH_RMII_TXD0    (pin_G13)
#define MICROPY_HW_ETH_RMII_TXD1    (pin_B13)
