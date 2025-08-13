#include "pch.h"
#include "hellen_meta.h"
#include "defaults.h"


static void customBoardDefaultConfiguration() {
}

void setup_KLM_MS43_board_overrides() {
    KLM_MS43_DefaultConfiguration = customBoardDefaultConfiguration;
	setHellenMegaEnPin();
	hellenMegaSdWithAccelerometer();
	setHellenCan();
 	setDefaultHellenAtPullUps();
    setHellenMMbaro();
}
