#include "pch.h"
#include "hellen_meta.h"
#include "defaults.h"


void setBoardConfigOverrides() {
	setHellenMegaEnPin();
	hellenMegaSdWithAccelerometer();
	setHellenCan();
 	setDefaultHellenAtPullUps();
    setHellenMMbaro();
}


