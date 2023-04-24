#include <stdio.h>

int DataBaseArray[4] = { 10,20,30,40 };
int CurrentNumber = 0;
int main()
{
	if(CurrentNumber < DataBaseArray[0])
		CurrentNumber = DataBaseArray[0];
	
	if(CurrentNumber < DataBaseArray[1])
		CurrentNumber = DataBaseArray[1];
	
	if(CurrentNumber < DataBaseArray[2])
		CurrentNumber = DataBaseArray[2];
		
	if(CurrentNumber < DataBaseArray[3])
		CurrentNumber = DataBaseArray[3];

	printf("\nThe Largest Number Is: %d\n\n", CurrentNumber);
	
 	system("pause");
 	system("cls");
	return 0;
	
}


