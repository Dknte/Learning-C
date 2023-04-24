#include <stdio.h>
#include <conio.h> /* _getch() */

/**************************************************
Constants
***************************************************/
#define COLUMNS  100
#define ROWS     8

/**************************************************
Macros
***************************************************/

/**************************************************
Function Prototypes
***************************************************/
void GameLoop(void);
void PrintBoard(void);
void UserInput(void);


/**************************************************
Global Variables
***************************************************/
char g_board[ROWS][COLUMNS] =
{
    "***************************************",
    "*                                     *",
    "*                                     *",
    "*                                     *",
    "*                                     *",
    "*                                     *",
    "*                                     *",
    "***************************************",
};

unsigned int g_playerX = 3;
unsigned int g_playerY = 3;

/**************************************************
Code
***************************************************/
int main(int argc, char *argv[])
{
    /* Put the player on the board: */
    g_board[g_playerY][g_playerX] = '@';

    /* Print the board for the first time: */
    PrintBoard();

    /* The main game loop: */
    GameLoop();

    return 0;
}

/*
    Prints the board to the console
*/
void PrintBoard(void)
{
    /* Clear the screen: */
    system("cls");

    /* Print the board: */
    int i = 0;
    for(i = 0; i < ROWS; i++)
    {
        printf("%s\n", g_board[i]);
    }
}

/*
    The main game loop
*/
void GameLoop(void)
{
    unsigned char finished = 0;

    /* Loop until finished == 1 */
    while(finished == 0)
    {
        UserInput();

        PrintBoard();
    }
}

/*
    Gets user input
*/
void UserInput(void)
{
    /* 
        _getch() is used instead of scanf() so that
        the player doesn't have to press enter after
        every key press.
    */
    char userInput = _getch();

    /* Erase the player's current location */
    g_board[g_playerY][g_playerX] = ' ';

    switch(userInput)
    {
        case 'w':
            g_playerY = g_playerY - 1;
            break;
        case 'a':
            g_playerX = g_playerX - 1;
            break;
        case 's':
            g_playerY = g_playerY + 1;
            break;
        case 'd':
            g_playerX = g_playerX + 1;
            break;
        default:
            break;
    }

    /* Update the player's location: */
    g_board[g_playerY][g_playerX] = '@';


    return userInput;
}
