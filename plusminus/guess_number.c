#include <stdio.h>
#include <stdlib.h>
#include "guess_number.h"

// Loop asking to guess the number.
void guess_number(int MIN, int max, int number)
{
    int guess, strokes = 0;
    do
    {
        printf("\e[1;37mGuess the number : ");
        scanf("%d", &guess);
        strokes++;
        if(guess < MIN || guess > max)
        {
            printf("\n\e[0;33m%d is not between %d and %d.\n\n", guess, MIN, max);
        }
        else if(guess < number)
        {
            printf("\n\e[1;31m%d is too low.\n\n", guess);
        }
        else if(guess > number)
        {
            printf("\n\e[1;31m%d is too high.\n\n", guess);
        }
        else if(guess == number)
        {
            printf("\n\e[0;32mAmazing, %d is the correct answer !\n\n", guess);
            printf("\e[0;37mYou needed %d strokes to win, that's not bad.\n\n", strokes);
        }
   } while (guess != number);
}
