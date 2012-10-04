/** 
 @file 120921_three_tests.c
 */
#include <stdio.h>

/**
 @brief Mystery function 2
 @returns A character of some sort
 */
void pause();

/**
 @brief Mystery function 3
 @returns Nothing
 */
void notAGoodPause();

/**
 @brief Entry point for the program
 @returns 0 if all goes well
 */
int main(void)
{
	printf("Line:%d\n",30);
	pause();
	printf("Line:%d\n",32);
	pause();
	printf("Line:%d\n",34);
	pause();
	printf("Line:%d\n",36);
	return 0;
}

void pause()
{
	char var2;
	printf("PAUSED. Press a key and then ENTER to continue");
	scanf(" %c", &var2);
}

void notAGoodPause()
{
	printf("***notAGoodPause() called***\n");
	printf("Message3\t");
	scanf(" ");
	printf("***notAGoodPause() returning***\n");
	return;
}