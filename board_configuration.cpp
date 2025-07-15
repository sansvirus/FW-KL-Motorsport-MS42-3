#include "pch.h"
#include "hellen_meta.h"
#include "defaults.h"

// board-specific configuration setup
void setBoardDefaultConfiguration() {
    setHellenVbatt();
    setHellenCan();
    hellenMegaSdWithAccelerometer();
    setDefaultHellenAtPullUps();
}
