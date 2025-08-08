#include "pch.h"
#include "hellen_meta.h"
#include "defaults.h"

// board-specific configuration setup
void setBoardDefaultConfiguration() {
    setHellenVbatt();
    setHellenCan();
    hellenMegaSdWithAccelerometer();
    setDefaultHellenAtPullUps();
    setHellenMMbaro();
    setHellenMegaEnPin();
	// SPI2 for on-board EGT
	engineConfiguration->is_enabled_spi_2 = true;
	// MOSI not needed, we have one-way communication here
	engineConfiguration->spi2misoPin = Gpio::B14;
	engineConfiguration->spi2sckPin = Gpio::B13;
	engineConfiguration->max31855_cs[0] = Gpio::B12;
	engineConfiguration->max31855spiDevice = SPI_DEVICE_2;
}
