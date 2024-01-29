#include <stdio.h>
#include <stdlib.h>
#include "max_number.h"

// Determining the max value according to the difficulty
int max_number(int difficulty)
{
    int max; // Represents the maximum to guess.
    switch (difficulty)
    {
    case 1:
        return max = 10;
    case 2:
        return max = 100;
    case 3:
        return max = 1000;
    default:
        printf("\e[0;33mAn error has occurred.\n");
    }
}
