/*
 * Copyright (c) 2019 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* This file is a temporary workaround for mapping of the generated information
 * to the current driver definitions.  This will be removed when the drivers
 * are modified to handle the generated information, or the mapping of
 * generated data matches the driver definitions.
 */

#if defined(DT_NS16550_400F2400_REG_SHIFT)
#define DT_NS16550_REG_SHIFT DT_NS16550_400F2400_REG_SHIFT
#elif defined(DT_NS16550_400F2800_REG_SHIFT)
#define DT_NS16550_REG_SHIFT DT_NS16550_400F2800_REG_SHIFT
#elif defined(DT_NS16550_400F2C00_REG_SHIFT)
#define DT_NS16550_REG_SHIFT DT_NS16550_400F2C00_REG_SHIFT
#endif

/* Pin multiplexing and GPIOs share the same registers in the HW */
#define DT_PINMUX_XEC_GPIO000_036_BASE_ADDR	DT_GPIO_XEC_GPIO000_036_BASE_ADDR
#define DT_PINMUX_XEC_GPIO040_076_BASE_ADDR	DT_GPIO_XEC_GPIO040_076_BASE_ADDR
#define DT_PINMUX_XEC_GPIO100_136_BASE_ADDR	DT_GPIO_XEC_GPIO100_136_BASE_ADDR
#define DT_PINMUX_XEC_GPIO140_176_BASE_ADDR	DT_GPIO_XEC_GPIO140_176_BASE_ADDR
#define DT_PINMUX_XEC_GPIO200_236_BASE_ADDR	DT_GPIO_XEC_GPIO200_236_BASE_ADDR
#define DT_PINMUX_XEC_GPIO240_276_BASE_ADDR	DT_GPIO_XEC_GPIO240_276_BASE_ADDR

#define DT_GPIO_XEC_GPIO000_036_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_40081000_BASE_ADDRESS
#define DT_GPIO_XEC_GPIO000_036_IRQ		DT_MICROCHIP_XEC_GPIO_40081000_IRQ_0
#define DT_GPIO_XEC_GPIO000_036_IRQ_PRIORITY	DT_MICROCHIP_XEC_GPIO_40081000_IRQ_0_PRIORITY
#define DT_GPIO_XEC_GPIO000_036_LABEL		DT_MICROCHIP_XEC_GPIO_40081000_LABEL
#define DT_GPIO_XEC_GPIO000_036_SIZE		DT_MICROCHIP_XEC_GPIO_40081000_SIZE

#define DT_GPIO_XEC_GPIO040_076_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_40081080_BASE_ADDRESS
#define DT_GPIO_XEC_GPIO040_076_IRQ		DT_MICROCHIP_XEC_GPIO_40081080_IRQ_0
#define DT_GPIO_XEC_GPIO040_076_IRQ_PRIORITY	DT_MICROCHIP_XEC_GPIO_40081080_IRQ_0_PRIORITY
#define DT_GPIO_XEC_GPIO040_076_LABEL		DT_MICROCHIP_XEC_GPIO_40081080_LABEL
#define DT_GPIO_XEC_GPIO040_076_SIZE		DT_MICROCHIP_XEC_GPIO_40081080_SIZE

#define DT_GPIO_XEC_GPIO100_136_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_40081100_BASE_ADDRESS
#define DT_GPIO_XEC_GPIO100_136_IRQ		DT_MICROCHIP_XEC_GPIO_40081100_IRQ_0
#define DT_GPIO_XEC_GPIO100_136_IRQ_PRIORITY	DT_MICROCHIP_XEC_GPIO_40081100_IRQ_0_PRIORITY
#define DT_GPIO_XEC_GPIO100_136_LABEL		DT_MICROCHIP_XEC_GPIO_40081100_LABEL
#define DT_GPIO_XEC_GPIO100_136_SIZE		DT_MICROCHIP_XEC_GPIO_40081100_SIZE

#define DT_GPIO_XEC_GPIO140_176_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_40081180_BASE_ADDRESS
#define DT_GPIO_XEC_GPIO140_176_IRQ		DT_MICROCHIP_XEC_GPIO_40081180_IRQ_0
#define DT_GPIO_XEC_GPIO140_176_IRQ_PRIORITY	DT_MICROCHIP_XEC_GPIO_40081180_IRQ_0_PRIORITY
#define DT_GPIO_XEC_GPIO140_176_LABEL		DT_MICROCHIP_XEC_GPIO_40081180_LABEL
#define DT_GPIO_XEC_GPIO140_176_SIZE		DT_MICROCHIP_XEC_GPIO_40081180_SIZE

#define DT_GPIO_XEC_GPIO200_236_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_40081200_BASE_ADDRESS
#define DT_GPIO_XEC_GPIO200_236_IRQ		DT_MICROCHIP_XEC_GPIO_40081200_IRQ_0
#define DT_GPIO_XEC_GPIO200_236_IRQ_PRIORITY	DT_MICROCHIP_XEC_GPIO_40081200_IRQ_0_PRIORITY
#define DT_GPIO_XEC_GPIO200_236_LABEL		DT_MICROCHIP_XEC_GPIO_40081200_LABEL
#define DT_GPIO_XEC_GPIO200_236_SIZE		DT_MICROCHIP_XEC_GPIO_40081200_SIZE

#define DT_GPIO_XEC_GPIO240_276_BASE_ADDR	DT_MICROCHIP_XEC_GPIO_40081280_BASE_ADDRESS
#define DT_GPIO_XEC_GPIO240_276_IRQ		DT_MICROCHIP_XEC_GPIO_40081280_IRQ_0
#define DT_GPIO_XEC_GPIO240_276_IRQ_PRIORITY	DT_MICROCHIP_XEC_GPIO_40081280_IRQ_0_PRIORITY
#define DT_GPIO_XEC_GPIO240_276_LABEL		DT_MICROCHIP_XEC_GPIO_40081280_LABEL
#define DT_GPIO_XEC_GPIO240_276_SIZE		DT_MICROCHIP_XEC_GPIO_40081280_SIZE

#define DT_ADC_0_NAME				DT_LABEL(DT_INST(0, microchip_xec_adc))

#define DT_RTC_0_NAME				DT_LABEL(DT_INST(0, microchip_xec_timer))

#define DT_WDT_0_NAME				DT_LABEL(DT_INST(0, microchip_xec_watchdog))

#define DT_KSCAN_0_NAME				DT_LABEL(DT_INST(0, microchip_xec_kscan))

#define DT_SPI_XEC_QMSPI_0_LABEL \
	DT_MICROCHIP_XEC_QMSPI_40070000_LABEL
#define DT_SPI_XEC_QMSPI_0_BASE_ADDRESS \
	DT_MICROCHIP_XEC_QMSPI_40070000_BASE_ADDRESS
#define DT_SPI_XEC_QMSPI_0_IRQ \
	DT_MICROCHIP_XEC_QMSPI_40070000_IRQ_0
#define DT_SPI_XEC_QMSPI_0_IRQ_PRI \
	DT_MICROCHIP_XEC_QMSPI_40070000_IRQ_0_PRIORITY
#define DT_SPI_XEC_QMSPI_0_PORT_SEL \
	DT_MICROCHIP_XEC_QMSPI_40070000_PORT_SEL
#define DT_SPI_XEC_QMSPI_0_LINES \
	DT_MICROCHIP_XEC_QMSPI_40070000_LINES
#define DT_SPI_XEC_QMSPI_0_RXDMA \
	DT_MICROCHIP_XEC_QMSPI_40070000_RXDMA
#define DT_SPI_XEC_QMSPI_0_TXDMA \
	DT_MICROCHIP_XEC_QMSPI_40070000_TXDMA
#define DT_SPI_XEC_QMSPI_0_GIRQ \
	DT_MICROCHIP_XEC_QMSPI_40070000_GIRQ
#define DT_SPI_XEC_QMSPI_0_GIRQ_POS \
	DT_MICROCHIP_XEC_QMSPI_40070000_GIRQ_POS
#define DT_SPI_XEC_QMSPI_0_CLOCK_FREQUENCY \
	DT_MICROCHIP_XEC_QMSPI_40070000_CLOCK_FREQUENCY
#define DT_SPI_XEC_QMSPI_0_CHIP_SELECT \
	DT_MICROCHIP_XEC_QMSPI_40070000_CHIP_SELECT
#define DT_SPI_XEC_QMSPI_0_DCSCKON \
	DT_MICROCHIP_XEC_QMSPI_40070000_DCSCKON
#define DT_SPI_XEC_QMSPI_0_DCKCSOFF \
	DT_MICROCHIP_XEC_QMSPI_40070000_DCKCSOFF
#define DT_SPI_XEC_QMSPI_0_DLDH \
	DT_MICROCHIP_XEC_QMSPI_40070000_DLDH
#define DT_SPI_XEC_QMSPI_0_DCSDA \
	DT_MICROCHIP_XEC_QMSPI_40070000_DCSDA
