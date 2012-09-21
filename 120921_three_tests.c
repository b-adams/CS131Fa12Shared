/** 
 @file 120921_three_tests.c
 */
#include <stdio.h>

/**
 @brief Mystery function 1
 @returns An integer of some sort
 */
int getNumberFromUser();

/**
 @brief Mystery function 2
 @returns A character of some sort
 */
char getACharacterFromUser();

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
	getNumberFromUser();
	printf("Line:%d\n",32);
	getACharacterFromUser();
	printf("Line:%d\n",34);
	notAGoodPause();
	printf("Line:%d\n",36);
	notAGoodPause();
	printf("Line:%d\n",38);
	notAGoodPause();
	printf("Line:%d\n",40);
	return 0;
}

int getNumberFromUser()
{
	printf("***getNumberFromUser() called***\n");
	int var1;
	printf("Enter a number: ");
	scanf("%d", &var1);
	printf("***getNumberFromUser() returning %d***\n", var1);
	return var1;
}

char getACharacterFromUser()
{
	printf("***getACharacterFromUser() called***\n");
	char var2;
	printf("Please enter a character: ");
	scanf(" %c", &var2);
	printf("***getACharacterFromUser() returning %c***\n", var2);
	return var2;
}

void notAGoodPause()
{
	printf("***notAGoodPause() called***\n");
	printf("Message3\t");
	scanf(" ");
	printf("***notAGoodPause() returning***\n");
	return;
}