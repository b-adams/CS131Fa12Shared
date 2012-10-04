/** @file solution_program_3f.c */

#include <stdio.h>

int getPromptedNumber(char* thePrompt);

int main(void)
{
	int views;

	views = getPromptedNumber("How many times have you seen Lord of the Rings?");
	
	if(views>5) printf("Maybe watch it again, for good measure");
	else if(views>0) printf("You definitely need to see it again");
	else if(views==0) printf("You need to see it!");
	else printf("!?!?negative views!?!?!");

	printf("Remember the popcorn");
	
	return 0;
}

int getPromptedNumber(char* thePrompt)
{
	int userEntry;
	printf("%s", thePrompt);
	scanf("%d", &userEntry);
	return userEntry;
}


