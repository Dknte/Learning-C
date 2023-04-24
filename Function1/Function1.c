//Recibe valores y retorna un valor

#include<stdio.h>
#include<conio.h>
int suma(int x, int y){
	return x+y;
}

main(){
	int a,b,r;
	printf("Enter The First Value:");
	scanf("%d", &a);
	printf("Enter The Second Value:");
	scanf("%d", &b);
	r=suma(a,b);
	printf("%d", r);
	
	getch();
}
