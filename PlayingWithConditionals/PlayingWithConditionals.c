#include <stdio.h>

int main(){

	int a = 10000;
	int b = 10000;
	
	if( a <= b ){
		a--;
		printf("a = %i\n",a);
	}
	else{
		printf("Nope");
	};
	
	if( b >= a){
		b--;
		printf("b = %i\n",b);
	}
	else{
		printf("Nope");
	};
	
	return 0;
}
