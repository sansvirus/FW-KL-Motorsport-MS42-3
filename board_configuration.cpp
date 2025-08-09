#include "pch.h"
#include "hellen_meta.h"
#include "defaults.h"


void setBoardConfigOverrides() {
	setHellenMegaEnPin();
	setHellenVbatt();
	hellenMegaSdWithAccelerometer();
	setHellenCan();
 	setDefaultHellenAtPullUps();
}


// board-specific configuration setup
void setBoardDefaultConfiguration() {
    setHellenMMbaro();
}
static void setupEGT() {
	
	//EGT overwrites

	engineConfiguration->spi2sckPin = Gpio::B13;
	engineConfiguration->spi2misoPin = Gpio::B14;
	engineConfiguration->spi2mosiPin = Gpio::B15;
	engineConfiguration->is_enabled_spi_2 = true;

	engineConfiguration->max31855spiDevice = SPI_DEVICE_2;
	engineConfiguration->max31855_cs[0] = Gpio::B12;
}
