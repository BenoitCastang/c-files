#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "hangman_functions.h"

void draw_hangman(const int guesses)
{
    switch (guesses)
    {
    case 9:
        printf("\n\n\n\n\n\n_______________\n\n\n\n");
        break;    
    case 8:
        printf("\n\n\n  |\n  |\n  |\n  |\n__|____________\n\n\n\n");
        break;
    case 7:
        printf("\n\n\n_______________\n  |\n  |\n  |\n  |\n__|____________\n\n\n\n");
        break;
    case 6:
        printf("\n\n_______________\n  | /\n  |/\n  |\n  |\n__|____________\n\n\n\n");
        break;
    case 5:
        printf("\n\n_______________\n  | /    | \n  |/\n  |\n  |\n__|____________\n\n\n\n");
        break;
    case 4:
        printf("\n\n_______________\n  | /    | \n  |/     O\n  |\n  |\n__|____________\n\n\n\n");
        break;
    case 3:
        printf("\n\n_______________\n  | /    | \n  |/     O\n  |      |\n  |\n__|____________\n\n\n\n");
        break;
    case 2:
        printf("\n\n_______________\n  | /    | \n  |/     O\n  |    --|--\n  |\n__|____________\n\n\n\n");
        break;
    case 1:
        printf("\n\n_______________\n  | /    | \n  |/     O\n  |    --|--\n  |     /\n__|____________\n\n\n\n");
        break;
    case 0:
        printf("\n\n_______________\n  | /    | \n  |/     O\n  |    --|--\n  |     / \\\n__|____________\n\n\n\n");
        break;
    }
}