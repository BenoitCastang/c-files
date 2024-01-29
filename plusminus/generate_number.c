#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "generate_number.h"

// Generates the number to guess.
int generate_number(int players, int MIN, int max)
{
  int number; // The number the player has to guess.

  if (players == 1)
  {
    srand(time(NULL)); // Needed to generate random numbers
    return number = (rand() % (max - MIN + 1)) + MIN;
  }
  else if (players == 2)
  {
    printf("\e[0;37mOne of the two players must choose the number to guess.\n\n");
    do
    {
      printf("\e[0;37mWhat number do you choose ? ");
      scanf("%d", &number);
      if (number < MIN || number > max)
      {
        printf("\n\e[0;33m%d is not between %d and %d.\n\n", number, MIN, max);
      }
      else
      {
        printf("\e[1;1H\e[2J"); // clear console
        return number;
      }
    } while (number < MIN || number > max);
  }
  else
  {
    printf("\e[0;33mAn error has occurred.\n");
  }
}