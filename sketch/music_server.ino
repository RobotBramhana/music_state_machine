/**
 * @file music_server.ino
 * @author Sudhanva S (pioneer.sudhu@gmail.com)
 * @brief Arduino sketch that plays music on arduino
 * @version 0.1
 * @date 2021-08-11
 *
 * @copyright Copyright (c) 2021
 *
 */
// #include "music_server.hpp"

/**
 * @brief Does initial setup of the controller. Declares PIN as output.
 *
 */
#include <ArxSmartPtr.h>

using server::MusicPlayer;
using server::buzzer_out;
using std::shared_ptr;
using std::make_shared;

/// @brief Declaration of shared pointer for music player
shared_ptr<MusicPlayer> mp;
void setup()
{
  mp = make_shared<MusicPlayer>();
  pinMode(buzzer_out, OUTPUT);
  mp->setParams();
}

/**
 * @brief Loops the song infinitely.
 *
 */
void loop()
{
}
