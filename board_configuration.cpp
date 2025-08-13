#include "pch.h"
#include "hellen_meta.h"
#include "defaults.h"


static void KLM_MS43_boardConfigOverrides(){
	setHellenMegaEnPin();
	hellenMegaSdWithAccelerometer();
	setHellenCan();
 	setDefaultHellenAtPullUps();
    setHellenMMbaro();
}


