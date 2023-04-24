#include <stdio.h>

int DataBaseArray[4] = { 10, 20, 30, 40 };


int main(void) 
{
    int CurrentNumber = 0;

    int abc = 0;
    while(abc < 4)
    {
        if(CurrentNumber < DataBaseArray[abc])
        {
            CurrentNumber = DataBaseArray[abc];
        }
        abc = abc + 1;
    }

    printf("Number: %d\n", CurrentNumber);
}
