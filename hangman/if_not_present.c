#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "hangman_functions.h"

void if_not_present(const char suggested_letter, int guesses)
{
    printf("\nThe letter %c is not present in the word.\n", suggested_letter);
    guesses--;
    sleep(1);
    printf("\nYou have %d guesses left.\n", guesses);
    sleep(1);
    draw_hangman(guesses);
}