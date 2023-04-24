#include <stdio.h>

int DataBaseArrayFor[5];
int DataBaseLength = 5;
int i = 0;
int DataUser;
int main()

{
	
for(i; i < DataBaseLength;i++){
	
	printf("Enter your new number: ");
	scanf("%d",&DataUser);
	DataBaseArrayFor[i] = DataUser;
	system("cls");
	}
	
for(i = 0; i < DataBaseLength;++i){
	printf("%d\n\n", DataBaseArrayFor[i]);
}
return 0;
}

