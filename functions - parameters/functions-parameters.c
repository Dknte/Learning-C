#include <stdio.h>

float GetAverage(float firstNumber, float secondNumber)
{
    return ((firstNumber + secondNumber) / 2.0);
}

int main(void)
{
    printf("START OF PROGRAM\n\n\n");

    float firstTemperature = 87.3;
    float secondTemperature = 76.4;

    float average = GetAverage(firstTemperature, secondTemperature);

    printf("The average temperature is: %3.2f", average);

    printf("\n\n\nEND OF PROGRAM");
    return 0;
}

/*

existen 4 combinaciones de funciones
1 - reciben parametros y retornan un valor
2 - No reciben parametros y no retornan un valor
3 - No reciben parametros y retornan un valor
4 - Reciben parametros y retornan un valor

*/

/*

Even simpler: a function has 4 parts:
1) A return type
2) A name
3) Parameters
4) Body
Body is the part between {}
parameters are the inputs
The name is the name
The return type is the first word on the left

*/
