// Choosing solo or multiplayer mode

#include <stdio.h>
#include <stdlib.h>
#include "players_menu.h"



// Displays a menu and allows to choose solo or multiplayer mode.
int players_menu()
{
    int players = 0; // Determines the number of players. 1 is solo mode. 2 is multiplayer mode.
    printf("\n\e[0;37mYou can play this game solo mode or multiplayer. In solo mode, the computer randomly selects the number. In multiplayer, one of the two players chooses the number to guess.\n\n");

    do 
    {
        printf("\e[0;37mWhich mode do you want to play ?\n");
        printf("1. solo\n");
        printf("2. multiplayer\n\n");
        scanf("%d", &players);
        switch(players)
        {
            case 1:
                printf("\nOkay, let's play solo mode.\n");
                return players = 1;
            case 2:
                printf("\nOkay, let's play multiplayer mode.\n");
                return players = 2;
            default:
                printf("\n\e[0;33mYou must enter 1 or 2.\n\n");
        }
    } while (players != 1 && players != 2);
}