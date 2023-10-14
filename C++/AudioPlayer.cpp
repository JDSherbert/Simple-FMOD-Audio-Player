#include "AudioPlayer.h"
#include <iostream>

AudioPlayer::AudioPlayer() 
{
    FMOD_RESULT Result = FMOD::System_Create(&System);
    if (Result != FMOD_OK) 
    {
        std::cerr << "Error initializing FMOD: " << FMOD_ErrorString(Result) << std::endl;
    }

    Result = System->init(32, FMOD_INIT_NORMAL, nullptr);
    if (Result != FMOD_OK) 
    {
        std::cerr << "Error initializing FMOD System: " << FMOD_ErrorString(Result) << std::endl;
    }
}

AudioPlayer::~AudioPlayer() 
{
    System->release();
}

void AudioPlayer::Play(const char* audioFile) 
{
    FMOD_RESULT result = System->createSound(audioFile, FMOD_DEFAULT, 0, &sound);
    if (result != FMOD_OK) 
    {
        std::cerr << "Error loading audio file: " << FMOD_ErrorString(Result) << std::endl;
        return;
    }

    Result = System->playSound(sound, 0, false, &Channel);
    if (Result != FMOD_OK) 
    {
        std::cerr << "Error playing audio file: " << FMOD_ErrorString(Result) << std::endl;
    }
}

void AudioPlayer::Stop() 
{
    if (Channel) 
    {
        Channel->stop();
    }
}
