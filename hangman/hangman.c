#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "hangman_functions.h"

int main()
{
    char suggested_letter = 0;
    int * is_present_suggested_letter = NULL;
    int guesses = 2/*, replay = 1*/, letter_case = 0;
    const char word_to_guess[100] = "PELOUSE";
    char word_being_guessed[100] = "";
    int suggested_letter_presence_cases[10] = {0};
    
    hide_word(word_to_guess, word_being_guessed);
    printf("\n%s\n", word_being_guessed);

    while (guesses > 0)
    {
            // printf("\nsuggested_letter = %c\n", suggested_letter);
            printf("\nGuess a letter : ");
            scanf("%c", &suggested_letter);
            // printf("\nsuggested_letter = %c\n", suggested_letter);
            // printf("\nguesses = %d\n", guesses);
            printf("\nis_present_suggested_letter = %c\n", *is_present_suggested_letter);
            check_letter_presence(word_to_guess, suggested_letter, *is_present_suggested_letter, suggested_letter_presence_cases, letter_case);
            printf("\nis_present_suggested_letter = %c\n", *is_present_suggested_letter);
            if (is_present_suggested_letter >= 1)
            {
                if_present(suggested_letter, *is_present_suggested_letter, word_to_guess);
                for (int i = 0 ; word_being_guessed[i] != '\0' ; i++)
                {
                    if (word_to_guess[i] == suggested_letter)
                    {
                        // word_to_guess[i] = suggested_letter;
                        // printf("\n%s\n", word_to_guess);
                        printf("\nsuggested letter = %c\n", suggested_letter);
                    }
                    
                }
                printf("\nis_present_suggested_letter = %c\n", *is_present_suggested_letter);
            }
            // else
            // {
            //     if_not_present(suggested_letter, guesses);
            // }
            sleep(1);
            // printf("\nend\n");
            printf("\nword_being_guessed = %s\n\n", word_being_guessed);
            sleep(1);
            guesses--;
    }
    
    return 0;
}