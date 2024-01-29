#include <stdio.h>
#include <stdlib.h>
#include "hangman_functions.h"

void if_present(const char suggested_letter, const int is_present_suggested_letter, const char word_to_guess[])
{
    printf("\nThe letter %c is present %d times in the word.\n", suggested_letter, is_present_suggested_letter);
}