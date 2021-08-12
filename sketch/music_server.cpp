/**
 * @file music_server.cpp
  * @author Sudhanva S (pioneer.sudhu@gmail.com)
 * @brief Source file for server that plays music on arduino
 * @version 0.1
 * @date 2021-08-11
 *
 * @copyright Copyright (c) 2021
 *
 */
#include "music_server.hpp"
namespace server
{
MusicPlayer::MusicPlayer()
{
}

bool MusicPlayer::composeMusic()
{
  long elapsed_time = 0;
  if (tone_ > 0)
  {
    while (elapsed_time < duration)
    {
      digitalWrite(buzzer_out, HIGH);
      delayMicroseconds(tone_ / 2);

      digitalWrite(buzzer_out, LOW);
      delayMicroseconds(tone_ / 2);

      elapsed_time += (tone_);
    }
    return true;
  }
  else
  {
    for (int j = 0; j < count; j++)
    {
      delayMicroseconds(duration);
    }
    return false;
  }
}
bool MusicPlayer::setParams()
{
}
MusicPlayer::~MusicPlayer()
{
}
}