#include <stdio.h>
#include <conio.h>

int breakpointDummy = 0;

int main(void)
{
    int i_max = 20;
    
    printf("LOOP START\n");
    
    int i = 0;
    for(i = 0; i < i_max; i++)
    {
        printf("i = %d\n", i);
    }
    
    printf("LOOP END\n");
    


    breakpointDummy = 7;
    getch();
    return 0;

}
