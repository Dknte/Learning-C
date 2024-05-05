#include "Round.h"

#include <stdlib.h>
#include <time.h>

typedef struct
{
    unsigned int rangeLow;
    unsigned int rangeHigh;
    unsigned int expectedRandomNumber;
    double hotColdPercent;
} RoundDetails;

static RoundDetails m_currentRound;

void Round_Init(void)
{
    m_currentRound.hotColdPercent = 0.1;
    srand(time(NULL));
}

unsigned int Round_GetRangeHigh(void){ return m_currentRound.rangeHigh; }
unsigned int Round_GetRangeLow(void){ return m_currentRound.rangeLow; }

int Round_SetRange(unsigned int low, unsigned int high)
{
    typedef enum
    {
        RT_RANGE_INVALID = -1,
        RT_RANGE_VALID,
    } ReturnType_T;

    ReturnType_T isRangeValid = RT_RANGE_INVALID;

    if(low < high)
    {
        isRangeValid = RT_RANGE_VALID;
    }


    if(isRangeValid == RT_RANGE_VALID)
    {
        m_currentRound.rangeLow = low;
        m_currentRound.rangeHigh = high;
    }

    return (int)isRangeValid;
}


void Round_AssignExpectedRandomNumber(void)
{
    m_currentRound.expectedRandomNumber = m_currentRound.rangeLow + 
                                        (rand()%(m_currentRound.rangeHigh - m_currentRound.rangeLow + 1));
}


int Round_IsExpectedNumberHot(unsigned int guessedNumber)
{
    typedef enum
    {
        RT_HOT,
        RT_COLD,
        RT_EXACT,
    } ReturnType_T;

    ReturnType_T isGuessedNumberHot = RT_COLD;

    unsigned int range = m_currentRound.rangeHigh - m_currentRound.rangeLow;
    unsigned int hotLow = m_currentRound.expectedRandomNumber - ( (unsigned int)(m_currentRound.hotColdPercent * range) );
    unsigned int hotHigh = m_currentRound.expectedRandomNumber + ( (unsigned int)(m_currentRound.hotColdPercent * range) );
    
    if(guessedNumber == m_currentRound.expectedRandomNumber)
    {
        isGuessedNumberHot = RT_EXACT;
    }
    else if( guessedNumber >= hotLow && guessedNumber <= hotHigh )
    {
        isGuessedNumberHot = RT_HOT;
    }


    return (int)isGuessedNumberHot;
}
