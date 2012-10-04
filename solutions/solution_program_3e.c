/** @file solution_program_3e.c */

#include <stdio.h>

int getPromptedNumber(char* thePrompt);

int main(void)
{
	int userTemp;

	userTemp = getPromptedNumber("What temperature is your steak?");
	
	if(userTemp<70) printf("Yick. Raw meat!\n");
	else if(userTemp>=145) printf("Just right (or burnt...)\n");
	else printf("Undercooked\n");
	
	return 0;
}

int getPromptedNumber(char* thePrompt)
{
	int userEntry;
	printf("%s", thePrompt);
	scanf("%d", &userEntry);
	return userEntry;
}


