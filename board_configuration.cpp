#include "pch.h"
#include "hellen_meta.h"
#include "defaults.h"



static void KLM_MS43_boardoverrides() {
	setHellenMegaEnPin();
	hellenMegaSdWithAccelerometer();
	setHellenCan();
 	setDefaultHellenAtPullUps();
    setHellenMMbaro();
}

void setup_custom_board_overrides() {
	custom_board_DefaultConfiguration = KLM_MS43_boardDefaultConfiguration;
	custom_board_ConfigOverrides =  KLM_MS43_boardConfigOverrides;
}
