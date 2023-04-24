#include <stdio.h>

int BreakPointDummy = 0;

int main(void){
	
	int user_number_database[3] = {0, 100, 200};
	int database_lenght = 3;
	
	printf("Array[%d]: %d\n", 0, user_number_database[0]);
	printf("Array[%d]: %d\n", 1, user_number_database[1]);
	printf("Array[%d]: %d\n", 2, user_number_database[2]);

	int i = 0;
	while( i < database_lenght )
	{
		printf("Array[%d]: %d\n", i, user_number_database[i]);
		i++;
	}

	BreakPointDummy = 7;
	return 0;
}
