#include "Game.h"

#include <stdio.h>


#include "User.h"
#include "Round.h"




static void printBanner(void)
{
    printf("\n~~~Welcome To John's Guessing Game!\n~~~");
}

int Game_Loop(void)
{
    typedef enum
    {
        GS_FAIL = -1,
        GS_ROUND_SETUP,
        GS_GUESSING,
        GS_ROUND_OVER,
        GS_FINISHED,
    } GameStates_T;

    Round_Init();

    GameStates_T gameState = GS_ROUND_SETUP;

    printBanner();


    while(gameState != GS_FINISHED)
    {
        switch(gameState)
        {
            case GS_ROUND_SETUP:
                {
                    UserReturnCode_T returnCode = User_EstablishRoundDetails();

                    if(returnCode == URC_QUIT || returnCode == URC_FAIL)
                    {
                        gameState = GS_FINISHED;
                    }
                    else
                    {
                        gameState = GS_GUESSING;
                    }
                }
                break;
            case GS_GUESSING:
                {
                    UserReturnCode_T returnCode = User_GuessingProcess();
                    
                    if(returnCode == URC_QUIT || returnCode == URC_FAIL)
                    {
                        gameState = GS_FINISHED;
                    }
                    else
                    {
                        gameState = GS_ROUND_OVER;
                    }
                }
                break;
            case GS_ROUND_OVER:
                printf("Do you want to start a new round?\n");
                gameState = GS_FINISHED;
                break;
            case GS_FINISHED:
                printf("GS_FINISHED\n");
                break;
            default:
                break;
        }
    }

    return (int)gameState;
}


