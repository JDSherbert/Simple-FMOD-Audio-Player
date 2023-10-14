// ©2023 JDSherbert. All rights reserved.

#pragma once
#include <FMOD/fmod.hpp>

// Simple implementation of an audio player class using FMOD
class AudioPlayer
{
public:
    AudioPlayer();
    ~AudioPlayer();

    /** Play the specified Audio File */
    void Play(const char* audioFile);
    /** Stop the currently playing audio */
    void Stop();

private:
    FMOD::System* System;
    FMOD::Sound* Sound;
    FMOD::Channel* Channel;
};
