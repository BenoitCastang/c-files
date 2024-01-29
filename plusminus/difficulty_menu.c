#include <stdio.h>
#include <stdlib.h>
#include "difficulty_menu.h"

// Selecting difficulty. 1 sets easy mode, 2 normal, 3 hard.
int difficulty_menu()
{
    int difficulty = 0; // Determines the number of players. 1 is solo mode. 2 is multiplayer mode.
    do
    {
        printf("\n\e[0;37mWhich difficulty do you want to choose ?\n");
        printf("1. easy\n");
        printf("2. normal\n");
        printf("3. hard\n\n");
        scanf("%d", &difficulty);
        switch(difficulty)
        {
            case 1:
                printf("\nYou chose easy mode.\n\n");
                return difficulty = 1;
            case 2:
                printf("\nYou chose normal mode.\n\n");
                return difficulty = 2;
            case 3:
                printf("\nYou chose hard mode.\n\n");
                return difficulty = 3;
            default:
                printf("\n\e[0;33mYou must enter 1, 2 or 3.\n\n");
        }
    } while (difficulty <1 || difficulty >3);
}
