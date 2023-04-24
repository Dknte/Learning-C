#include <stdio.h>

int arrayz[5] = { 40,80,1200,1,900};
int i;
int LargestsValue = 0;
int array_lenght = 5;
int main(){
	
for(i=0; i < array_lenght; i++){
	if( LargestsValue < arrayz[i]){
		LargestsValue = arrayz[i];
		
};
};
    printf("\nThe Largests Value Found Is: %d\n", LargestsValue);
	return 0;
} 

