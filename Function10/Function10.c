#include <stdio.h>
#include <conio.h>
// Global Variable:
int g_userInputArray[] = {0, 0, 0};
int g_inputArrayMaxLength = 3;
int g_currentIndex = 0;

// Functions:
int CollectUserInput()
{
    int userInput;

    printf("Please enter a number: ");
    scanf("%d", &userInput);

    return userInput;
}

void AddToArray(int input)
{
    // If there is room in the array. (We are preventing any possible adding of an element beyond the maximum length of the array)
    if(g_currentIndex < g_inputArrayMaxLength)
    {
        // Add the input to the array
        g_userInputArray[g_currentIndex] = input;

        // Move the index to the next location:
        g_currentIndex = g_currentIndex + 1;
    }
}

// Returns 1 for true, 0 for false
int IsArrayFull()
{
    int isArrayFull = 0; // false
    if(g_currentIndex >= g_inputArrayMaxLength)
    {
        isArrayFull = 1; // true
    }
    return isArrayFull;
}

// This function should only be called once g_userInputArray is full
int CalculateAverage()
{
    int sum;
    int average;

    int i = 0;
    for(i = 0; i < g_inputArrayMaxLength; i++)
    {
        sum = sum + g_userInputArray[i];
    }
    average = sum / g_inputArrayMaxLength;

    return average;
}

int main(void)
{
    int userInput = 0;
    int isArrayFull = 0; // 0 for false, 1 for true
    int finalAverage = 0;

    while(isArrayFull == 0) // While the array is not full
    {
        userInput = CollectUserInput();

        AddToArray(userInput);

        isArrayFull = IsArrayFull();
    }

    finalAverage = CalculateAverage();

    printf("The final average is: %d", finalAverage);
    getch();
    return 0;
    }
