#include <stdio.h>
#include <stdlib.h>
#include "replay_menu.h"


int replay_menu(int replay)
{
    do
    {
        printf("\e[0;37mDo you want to replay, now ?\n");
        printf("1. yes\n");
        printf("2. no\n\n");
        scanf("%d", &replay);
        switch(replay)
        {
            case 1:
                return replay = 1;
            case 2:
                return replay = 0;
            default:
                printf("\n\e[0;33mYou must enter 1 or 2.\n\n");
        }
    } while (replay != 1 && replay != 0);
}