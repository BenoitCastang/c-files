#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "players_menu.h"
#include "difficulty_menu.h"
#include "max_number.h"
#include "generate_number.h"
#include "guess_number.h"
#include "replay_menu.h"

int main()
{

  printf("\n\e[0;37mWelcome ! This is a plus minus game. The goal is to find the number. You take a guess, and you're told whether you're above or below.\n\n");

  const int MIN = 1; // Constant being the minimum number to guess.
  int replay = 1;    // Bool representing the will to replay or not. 1 is replaying the game loop, 0 is stopping.

  do
  {
    int players = players_menu();       // Defines the number of players. 1 is solo mode. 2 is multiplayer mode.
    int difficulty = difficulty_menu(); // Defines easy, normal or hard mode.
    int max = max_number(difficulty);
    int number = generate_number(players, MIN, max); // The number the player has to guess.
    guess_number(MIN, max, number);
  } while (replay = replay_menu(replay));
}
