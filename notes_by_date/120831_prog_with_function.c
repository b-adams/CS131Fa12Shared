/** @file 120831_prog_with_function.c 
 *  @brief happyhappyhappybirthday!
 *  @author Prof. Adams
 */

#include <stdio.h>

/** 
 @brief Give someone a happy birthday.
 @param toWhom The name of the person you're happy for
 @param theirAge Hold old they are
 @return How many candles to put on their cake
 
 Says happy Nth birthday a few times, with the third time
 being directed at the person.
*/
int happyBirthdayTo(char* toWhom, int theirAge);

int main()
{
  happyBirthdayTo("pet rock", 19);
  happyBirthdayTo("Richard Gere", 63);
  return 0;
}

int happyBirthdayTo(char* toWhom, int theirAge)
{
	printf("Happy %dth birthday to you, ", theirAge);
	printf("happy %dth birthday to you, ", theirAge);
	printf("happy %dth birthday dear %s... ", 
           theirAge, toWhom);
	printf("happy %dth birthday to you!\n", theirAge);
	return theirAge+1;
}
