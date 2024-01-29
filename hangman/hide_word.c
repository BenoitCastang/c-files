#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "hangman_functions.h"

void hide_word(const char word_to_guess[], char word_being_guessed[])
{
    for (int i = 0 ; i < strlen(word_to_guess) ; i++)
    {
        word_being_guessed[i] = '_';
    }
    // for (int i = 1 ; i < 2*(strlen(word_to_guess)) ; i+=2)
    // {
    //     word_being_guessed[i] = ' ';
    // }
}