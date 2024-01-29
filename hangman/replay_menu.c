#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "hangman_functions.h"


int replay_menu(int replay)
{
    do
    {
        printf("Do you want to replay, now ?\n");
        printf("1. yes\n");
        printf("2. no\n\n");
        scanf("%d", &replay);
        switch(replay)
        {
            case 1:
                return replay = 1;
            case 2:
                return replay = 2;
            default:
                printf("\nYou must enter 1 or 2.\n\n");
                sleep(1);
        }
        
    } while (replay != 1 && replay != 2);
}