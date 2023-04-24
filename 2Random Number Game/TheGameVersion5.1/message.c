#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct UserRange
{
    int user_low;
    int user_high;
};

struct UserRange orderingEntry()
{
    
    int range1, range2, user_high, user_low;

    struct UserRange userRange;
    
    printf("\nWelcome to the best game in the world - 100 real no fake");
    printf("\n\nPlease Enter 2 numbers for The Range between 0 and 32767: ");
    scanf("%d %d", &range1 , &range2);

    if( range2 > range1 )
    {
        user_high = range2;
        user_low = range1;
    } 
    else 
    {
        user_high = range1;
        user_low = range2; 
    }

    userRange.user_high = user_high;
    userRange.user_low = user_low;

    return userRange;
}

int CalculatingNumber(struct UserRange userRange)
{
    int random_number, percentage_random_number, hot1, hot2;
    
    srand(time(NULL));
    random_number = userRange.user_low + rand() % (( userRange.user_high + 1 ) - userRange.user_low);
    printf("\nthis is the random number: %d", random_number);

    percentage_random_number = random_number*0.1;
    printf("\n\nthis is the percentage 10 of the random number: %d", percentage_random_number);

    hot1 = (random_number + percentage_random_number);
    printf("\n\nThis Is Hot 1: %d", hot1);

    hot2 = (random_number - percentage_random_number);
    printf("\n\nThis is Hot 2: %d", hot2);

    return 0;
}

int playing(random_number, hot1, hot2)
{
    
    int attempts, number_game, i;
    
    printf("\n\nPlease enter number of Attempts: ");
    scanf("%d", &attempts);

    for(i = 1; i <= attempts; i++)
    {
        // Loop Start
        printf("\n\nAttempt: %d; Please Enter The Number Game: ",i);
        scanf("%d", &number_game);

        if(number_game == random_number)
        {
            printf("\n\n------- You are on the point!! Congrats You Are a Winner :) -------");
            break;
        }

        if ((number_game <= hot1) && (number_game >= hot2))
        {
            printf("\n\n---- Hot! ----");
        } 

        if((number_game > hot1) || (number_game < hot2))
        {
            printf("\n\n---- Cold! ----");
        }

    } // Loop End 

    if(number_game == random_number)
    {
        printf("\n\n------- You are on the point!! Congrats You Are a Winner :) -------");
    }
    else
    {
        printf("\n\n--- You Lose, Try Again :( ---");
    };

    return 0;
        
}

int main()
{
    struct UserRange currentUserRange;

    currentUserRange = orderingEntry();
    CalculatingNumber(currentUserRange);
    playing();

    return 0;
}
