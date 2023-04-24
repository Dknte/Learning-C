#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, maxima;
	int BreakPointDummy = 0;
	printf("\n\n\tPrograma que imprime del 1 hasta el numero que ingrese el usuario\n\n\t");
	system("pause");
	system("cls");

	for(;;)
	{
	
	system("cls");
	printf("\n\n\tPor favor, introduzca un numero mayor a 1:");

	scanf("%d", &maxima);
	
	if(maxima>1)
	{
		for(i=1; i<=maxima; i++ )
			printf("\n\n%d", i);
		printf("\n\n\t");
		system("pause");
	}
	else
	{
		printf("\n\nSiga las instrucciones...\n\t");
		system("pause");
	}
	BreakPointDummy = 7;
}
}
