#include <stdio.h>

int breakpointDummy = 0;

int main(void)
{
    int data_base[10];
    int database_length = 10;
    int user_input = 0;
    
    int i = 0;
    for(i = 0; i < database_length; i++)
    {
        printf("Please enter a number: ");
        scanf("%d", &user_input);
        data_base[i] = user_input;
        system("cls");
    }
    system("cls");
    // Print every element in the array
    for(i = 0; i < database_length; i++)
    {
        printf("Position[%d] = %d\n", i, data_base[i]);
    }
    

 
    breakpointDummy = 7;
    return 0;
}
