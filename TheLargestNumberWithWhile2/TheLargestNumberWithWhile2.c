#include <stdio.h>

int var1;
int var2 = 0;
int data_user = 0;
int arrayvar[5];
int main(){

while(var1 < 5){
	printf("\nPlease Enter your number:\t");
	scanf("%d", &data_user );
	var1++;
	arrayvar[var1] = data_user;
	
}
while( var2 < 5 ){
	var2++;
	printf("\nNumbers:%d\n\n", arrayvar[var2] );
	
}
return 0;
}
