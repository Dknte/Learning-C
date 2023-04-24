#include <stdio.h>

int breakpointDummy = 0;

int main(void)
{
    int data_base[10];
    int database_length = 10;
    int user_input = 0;
    int i;
     sizeof(data_base);
    // Initialize every element to 0
   
	for(i = 0; i < database_length; i++)
    {
        data_base[i] =  0 ;
    }
    
    // Print every element in the array
    for(i = 0; i < database_length; i++)
    {
        printf("Position[%d] = %d\n", i, data_base[i]);
    }
    

    breakpointDummy = 7;
  
    return 0;
}
