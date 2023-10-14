![image](https://github.com/JDSherbert/Simple-FMOD-Audio-Player/assets/43964243/86c71103-6726-4d3c-8258-47b3588bb701)

# Simple FMOD Audio Player

<!-- Header Start -->
<a href = "https://www.fmod.com/"> <img height="40" img width="40" src="https://cdn.simpleicons.org/fmod/white"> </a> 
<a href = "https://learn.microsoft.com/en-us/cpp/cpp-language"> <img height="40" img width="40" src="https://cdn.simpleicons.org/c++"> </a>
<img align="right" alt="Stars Badge" src="https://img.shields.io/github/stars/jdsherbert/Simple-FMOD-Audio-Player?label=%E2%AD%90"/>
<img align="right" alt="Forks Badge" src="https://img.shields.io/github/forks/jdsherbert/Simple-FMOD-Audio-Player?label=%F0%9F%8D%B4"/>
<img align="right" alt="Watchers Badge" src="https://img.shields.io/github/watchers/jdsherbert/Simple-FMOD-Audio-Player?label=%F0%9F%91%81%EF%B8%8F"/>
<img align="right" alt="Issues Badge" src="https://img.shields.io/github/issues/jdsherbert/Simple-FMOD-Audio-Player?label=%E2%9A%A0%EF%B8%8F"/>
<img align="right" src="https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Fgithub.com%2FJDSherbert%2FSimple-FMOD-Audio-Player%2Fhit-counter%2FREADME&count_bg=%2379C83D&title_bg=%23555555&labelColor=0E1128&title=🔍&style=for-the-badge">
<!-- Header End --> 

-----------------------------------------------------------------------

<a href="https://www.fmod.com/"> 
  <img align="left" alt="FMOD Tool" src="https://img.shields.io/badge/FMOD%20Tool-black?style=for-the-badge&logo=fmod&logoColor=white&color=black&labelColor=black"> </a>
  
<a href="https://choosealicense.com/licenses/"> 
  <img align="right" alt="License" src="https://img.shields.io/badge/License%20:%20NONE-black?style=for-the-badge&logo=none&logoColor=white&color=black&labelColor=black"> </a>
  
<br></br>

-----------------------------------------------------------------------
## Overview
This project is a simple audio player implemented in C++ using the FMOD library. FMOD is a powerful and easy-to-use audio engine, enabling developers to create immersive audio experiences in their applications.

### Prerequisites
Before you can run this audio player, you need to have the FMOD library installed and properly configured in your development environment. You can download FMOD from the official FMOD website and follow the installation instructions provided in the documentation.

### How to Use
1. Clone the Repository
Clone this repository to your local machine using Git:
`git clone https://github.com/your-username/fmod-audio-player.git`

3. Build the Project
Compile the C++ source files using a C++ compiler (e.g., g++, Visual Studio, Xcode). Make sure to link your project with the FMOD library to resolve the dependencies.

Example (on Unix-based systems using g++):
`g++ -o audio_player audio_player.cpp main.cpp -lfmod`

3. Run the Audio Player
Run the compiled executable:
`./audio_player`

5. Enjoy Your Music
The audio player will load and play the audio files specified in the playlist array in the main.cpp file. You can customize the playlist by modifying the paths to your desired audio files.

### Class Overview
AudioPlayer Class
The AudioPlayer class encapsulates the FMOD functionality and provides a convenient interface for audio playback. It contains the following methods:

AudioPlayer(): Constructor that initializes the FMOD system.
~AudioPlayer(): Destructor that releases FMOD resources.
void Play(const char* audioFile): Plays the specified audio file.
void Stop(): Stops the currently playing audio.

### License
This project is licensed under the MIT License - see the LICENSE file for details.


-----------------------------------------------------------------------

