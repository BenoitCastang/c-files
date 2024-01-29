#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "hangman_functions.h"

void check_letter_presence(const char word_to_guess[], const char suggested_letter, int * is_present_suggested_letter, int suggested_letter_presence_cases[], int letter_case)
{
    // is_present_suggested_letter = &is_present_suggested_letter;
    for (int i = 0 ; word_to_guess[i] != '\0' ; i++)
    {
        if (word_to_guess[i] == suggested_letter)
        { 
            is_present_suggested_letter++;
            suggested_letter_presence_cases[letter_case] = i;
            letter_case++;
            for (int j = 0 ; suggested_letter_presence_cases[j] != 0 ; j++)
            {
                printf("\nsuggested_letter_presence_cases[%d] = %d\n", j, suggested_letter_presence_cases[j]);
            }
        }
    }
}