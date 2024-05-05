/**********************************
Round.h
**********************************/

#ifndef ROUND_H_
#define ROUND_H_

void Round_Init(void);

unsigned int Round_GetRangeHigh(void);
unsigned int Round_GetRangeLow(void);

/* Returns -1 for failure, 0 for success */
int Round_SetRange(unsigned int low, unsigned int high);

void Round_AssignExpectedRandomNumber(void);

/* Returns 0 for hot, 1 for cold, 2 for exact match */
int Round_IsExpectedNumberHot(unsigned int guessedNumber);



#endif /* ROUND_H_ */
