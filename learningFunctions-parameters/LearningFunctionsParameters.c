#include <stdio.h>

int hello(int n){ printf("\nH3ll0 WoRlD: %d\n", n); return printf("\nhello world: %d\n",n); }

int main(){
//Without loop	
int n;

    hello(10);
	hello(10);
	hello(10);
	hello(10);
	hello(10);
	hello(10);
	hello(10);
	
//with loop
int a = 7;
int i;
		for(i =0 ;i < 7; i++)
		{
		hello(10);
		}
return 0;

}

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
