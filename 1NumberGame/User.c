#include "User.h"

#include <stdio.h>

#include "Round.h"

static void printRoundMenu(void)
{
    printf("Menu:\n");
    printf("(0) Quit\n");
    printf("(1) New Round\n");
}



UserReturnCode_T User_EstablishRoundDetails(void)
{
    typedef enum
    {
        ERS_FAIL,
        ERS_QUIT,
        ERS_MENU,
        ERS_RANGE,
        ERS_COMPLETE,
    } EstablishingRoundStates_T;

    EstablishingRoundStates_T state = ERS_MENU;

    while(state != ERS_COMPLETE && state != ERS_FAIL && state != ERS_QUIT)
    {
        switch(state)
        {
            case ERS_FAIL:
                break;
            case ERS_QUIT:
                break;
            case ERS_MENU:
                {
                    char userInput = 'x';
                    printRoundMenu();
                    scanf("%c", &userInput);

                    if(userInput == '0')
                    {
                        state = ERS_QUIT;
                    }
                    else if(userInput == '1')
                    {
                        state = ERS_RANGE;
                    }
                    else
                    {
                        state = ERS_MENU;
                    }
                }
                break;
            case ERS_RANGE:
                {
                    unsigned int userLowRange = 0;
                    unsigned int userHighRange = 0;
                    
                    printf("Please enter the low range number: ");
                    scanf("%d", &userLowRange);
                    
                    printf("\n");

                    printf("Please enter the high range number: ");
                    scanf("%d", &userHighRange);

                    if( Round_SetRange(userLowRange, userHighRange) == -1 )
                    {
                        printf("Invalid Range\n");
                        state = ERS_RANGE;
                    }
                    else
                    {
                        state = ERS_COMPLETE;
                    }
                }
                break;
            case ERS_COMPLETE:
                break;
            default:
                break;
        }
    }


    Round_AssignExpectedRandomNumber();


    if(state == ERS_FAIL)
    {
        return URC_FAIL;
    }
    else if(state == ERS_QUIT)
    {
        return URC_QUIT;
    }
    else
    {
        return URC_CONTINUE;
    }

    return -1;
}

UserReturnCode_T User_GuessingProcess(void)
{
    typedef enum
    {
        GS_FAIL = -1,
        GS_QUIT,
        GS_INCORRECT,
        GS_CORRECT,
    } GuessingStates_T;

    unsigned int numberOfGuesses = 0;
    unsigned int userGuess = 0;
    unsigned char isUserGuessHot = 1;

    GuessingStates_T guessingState = GS_INCORRECT;

    while(guessingState != GS_CORRECT && guessingState != GS_FAIL && guessingState != GS_QUIT)
    {
        printf("Do you want to quit?\n");
        printf("(0) - Quit\n");
        printf("(1) - Continue\n");
        scanf("%d", &userGuess);
        
        if(userGuess == 0)
        {
            guessingState = GS_QUIT;
        }
        else
        {
            guessingState = GS_INCORRECT;
        }


        switch(guessingState)
        {
            case GS_FAIL:
                break;
            case GS_QUIT:
                break;
            case GS_INCORRECT:
                {
                    printf("Guess a number: ");
                    scanf("%d", &userGuess);
                    isUserGuessHot = Round_IsExpectedNumberHot(userGuess);

                    if(isUserGuessHot == 0)
                    {
                        printf("\nHOT!\n");
                        guessingState = GS_INCORRECT;
                    }
                    else if(isUserGuessHot == 1)
                    {
                        printf("\nCOLD!\n");
                        guessingState = GS_INCORRECT;
                    }
                    else
                    {
                        printf("\nEXACT\n");
                        guessingState = GS_CORRECT;
                    }
                }
                break;
            case GS_CORRECT:
                break;
            default:
                break;
        }
    }

    if(guessingState == GS_QUIT)
    {
        return URC_QUIT;
    }
    else if(guessingState == GS_FAIL)
    {
        return URC_FAIL;
    }
    else
    {
        return URC_CONTINUE;
    }

    return -1;
}
