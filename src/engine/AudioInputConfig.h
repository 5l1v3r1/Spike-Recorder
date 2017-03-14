//
//  AudioInputConfig.hpp
//  SpikeRecorder
//
//  Created by Stanislav Mircic on 9/18/16.
//  Copyright © 2016 BackyardBrains. All rights reserved.
//

#ifndef AudioInputConfig_hpp
#define AudioInputConfig_hpp


#define INPUT_TYPE_STANDARD_AUDIO 0
#define INPUT_TYPE_SB_PRO 1
#define INPUT_TYPE_FILE 2
#define INPUT_TYPE_PLANTSS 3
#define INPUT_TYPE_MUSCLESS 4
#define INPUT_TYPE_HEARTSS 5
#define INPUT_TYPE_ARDUINO_UNKOWN 6

#include <stdio.h>
namespace BackyardBrains {
    class AudioInputConfig {
    public:
        float gain;
        float timeScale;
        bool filter60Hz;
        bool filter50Hz;
        float filterHighPass;
        float filterLowPass;
        bool initialized;
        int inputType;
        
        AudioInputConfig();
        ~AudioInputConfig();
    private:
       
    };

}

#endif /* AudioInputConfig_hpp */
