/**********************************
User.h
**********************************/

#ifndef USER_H_
#define USER_H_

typedef enum
{
    URC_FAIL = -1,
    URC_QUIT,
    URC_RESUME,
    URC_CONTINUE,
} UserReturnCode_T;

UserReturnCode_T User_EstablishRoundDetails(void);
UserReturnCode_T User_GuessingProcess(void);

#endif /* USER_H_ */
