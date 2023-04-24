#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int orderingEntry(){
	
	int range1, range2, user_high, user_low;
	
	printf("\nWelcome to the best game in the world - 100 real no fake");
	printf("\n\nPlease Enter 2 numbers for The Range between 0 and 32767: ");
	scanf("%d %d", &range1 , &range2);

	if( range2 > range1 )
	{
		user_high = range2;
		user_low = range1;
	} 
		else 
		{
			user_high = range1;
			user_low = range2; 
		};
		
	return user_high, user_low;
}

int CalculatingNumbers(int user_low, int user_high){

	int random_number, percentage_random_number, hot1, hot2;
	
	srand(time(NULL));
	random_number = user_low + rand() % (( user_high + 1 ) - user_low);
	printf("\nthis is the random number: %d", random_number);

	percentage_random_number = random_number*0.1;
	printf("\n\nthis is the percentage 10 of the random number: %d", percentage_random_number);

	hot1 = (random_number + percentage_random_number);
	printf("\n\nThis Is Hot 1: %d", hot1);

	hot2 = (random_number - percentage_random_number);
	printf("\n\nThis is Hot 2: %d", hot2);

	return random_number, hot1, hot2;
}

int playing(random_number, hot1, hot2){
	
	int attempts, number_game, i;
	
	printf("\n\nPlease enter number of Attempts: ");
	scanf("%d", &attempts);

	for(i = 1; i <= attempts; i++){  // Loop Start
		printf("\n\nAttempt: %d; Please Enter The Number Game: ",i);
		scanf("%d", &number_game);

		if(number_game == random_number){
			printf("\n\n------- You are on the point!! Congrats You Are a Winner :) -------");
			break;
		}

		if ((number_game <= hot1) && (number_game >= hot2)){
		printf("\n\n---- Hot! ----");}

		if((number_game > hot1) || (number_game < hot2)){
		printf("\n\n---- Cold! ----");}

	} // Loop End 
	if(number_game == random_number){
	printf("\n\n------- You are on the point!! Congrats You Are a Winner :) -------");
	}
		else{ printf("\n\n--- You Lose, Try Again :( ---");
		}
		
return 0;
	
}

int main(){
	
orderingEntry();
CalculatingNumbers(0, 100);
playing();

return 0;

}







/*
int main(){

int user_high, user_low, random_number, percentage_random_number, hot1, hot2, number_game, number, i, attempts, range1, range2;

printf("\nWelcome to the best game in the world - 100 real no fake");
printf("\n\nPlease Enter 2 numbers for The Range between 0 and 32767: ");
scanf("%d %d", &range1 , &range2);

if( range2 > range1 ){
	user_high = range2;
	user_low = range1;
} else {
	user_high = range1;
	user_low = range2;
};

srand(time(NULL));
random_number = user_low + rand() % (( user_high + 1 ) - user_low);
printf("\nthis is the random number: %d", random_number);

percentage_random_number = random_number*0.1;
printf("\n\nthis is the percentage 10 of the random number: %d", percentage_random_number);

hot1 = (random_number + percentage_random_number);
printf("\n\nThis Is Hot 1: %d", hot1);

hot2 = (random_number - percentage_random_number);
printf("\n\nThis is Hot 2: %d", hot2);

printf("\n\nPlease enter number of Attempts: ");
scanf("%d", &attempts);

for(i = 1; i <= attempts; i++){  // Loop Start _____________________________________________

printf("\n\nAttempt: %d; Please Enter The Number Game: ",i);
scanf("%d", &number_game);

if(number_game == random_number){
	printf("\n\n------- You are on the point!! Congrats You Are a Winner :) -------");
	break;};

if ((number_game <= hot1) && (number_game >= hot2)){
	printf("\n\n---- Hot! ----");};

if((number_game > hot1) || (number_game < hot2)){
	printf("\n\n---- Cold! ----");};

} // Loop End ____________________________________________

if(number_game == random_number){
	printf("\n\n------- You are on the point!! Congrats You Are a Winner :) -------");
}

else{ printf("\n\n--- You Lose, Try Again :( ---");};

return 0;

}*/
