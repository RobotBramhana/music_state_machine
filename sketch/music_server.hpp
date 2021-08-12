/**
 * @file music_server.hpp
 * @author Sudhanva S (pioneer.sudhu@gmail.com)
 * @brief Header file definition for server that plays music on arduino
 * @version 0.1
 * @date 2021-08-11
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef MUSIC_SERVER_H
#pragma ONCE

namespace server
{
/// @brief Pin Out for buzzer
/// @todo Set pinout from ros param
int buzzer_out = 9;
/**
 * @brief Definition of music player class that plays the music.
 *
 */
class MusicPlayer
{
  /** @brief PWM for sapthswaras. */
  // int tunes[];

  /** @brief Tempo setting for the song. Higher values slows down the song. */
  int tempo;

  /** @brief Pause setting */
  int pause;
  int count;

  /** @brief Temporary variable with global scope. */
  int tone_;

  /** @brief Temporary variable with global scope. */
  int tune;
  int duration;

public:
  /**
   * @brief Construct a new Music Player object
   *
   */
  MusicPlayer();

  /**
   * @brief Set the Params object
   *
   * @return true if setting was successful
   * @return false otherwise
   */
  bool setParams();

  /**
   * @brief Destroy the Music Player object
   *
   */
  ~MusicPlayer();

protected:
  /**
   * @brief Performs PWM for the buzzer.
   *
   */
  bool composeMusic();
};
}  // namespace server
#endif  // MUSIC_SERVER_H
