// ©2023 JDSherbert. All rights reserved.

#pragma once
#include <FMOD/fmod.hpp>

class AudioPlayer
{
public:
    AudioPlayer();
    ~AudioPlayer();

    void Play(const char* audioFile);
    void Stop();

private:
    FMOD::System* System;
    FMOD::Sound* Sound;
    FMOD::Channel* Channel;
};
