#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int user_high, user_low, random_number, percentage_random_number, cold_one, cold_two, number_game;
int attempts = 0;

int main(){

printf("\nPlease Enter a High Number: ");
scanf("%d", &user_high);

printf("\nPlease Enter a Low Number: ");
scanf("%d", &user_low);

srand(time(NULL));
random_number = user_low + rand() % (( user_high + 1 ) - user_low);
printf("\nthis is the random number: %d", random_number);

percentage_random_number = random_number*0.1;
printf("\n\nthis is the percentage 10 of the random number: %d", percentage_random_number);

cold_one = (random_number + percentage_random_number) ;
printf("\n\nThis Is Cold 1: %d", cold_one);

cold_two = (random_number - percentage_random_number);
printf("\n\nThis is Cold 2: %d", cold_two);

printf("\n\nPlease enter number of Attempts: ");
scanf("%d", &attempts);

int i = 0;
while(i < attempts){ 
i++;

printf("\n\nAttempt: %d; Please Enter The Number Game: ",i);
scanf("%d", &number_game);

while(number_game == random_number){
	printf("Congrats You Are a Winner!");
	break;
};

while((number_game <= cold_one) && (number_game >= cold_two)){
	printf("\n\n---- You are Cold! ----");
	break;
};

while((number_game >= cold_one) || (number_game <= cold_two)){
	printf("\n\n---- You are Hot! ----");
	break;
};

};

if(number_game == random_number){
	printf("\n\n------- You are on the point!! Congrats You Are a Winner :) -------");
}
else{
	printf("\n\n--- You Lose, Try Again :( ---");
	
return 0;
};

}
