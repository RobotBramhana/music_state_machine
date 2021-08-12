/**
 * @file music_player_test.cpp
 * @author Sudhanva S (pioneer.sudhu@gmail.com)
 * @brief Testing source file to test the music player
 * @version 0.1
 * @date 2021-08-12
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <AUnit.h>
#include "sketch/music_server.hpp"

using aunit::TestRunner;

class CustomTestOnce : public TestOnce
{
protected:
  // optional
  void setup() override
  {
    TestOnce::setup();
    mp = make_shared<MusicPlayer>();
    pinMode(buzzer_out, OUTPUT);
  }

  void assertBigStuff()
  {
  }
};

int main(int argc, char **argv)
{
  initialize_mock_arduino();
  run_tests();
}