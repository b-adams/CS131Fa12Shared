/** @file solution_program_3h.c */

#include <stdio.h>

int getPromptedNumber(char* thePrompt);

int main(void)
{
	int time;
	char ampm;

	time = getPromptedNumber("What time is it, rounded to nearest hour?");
	printf("is that AM or PM?");
	scanf(" %cM", &ampm);

	switch(ampm)
	{
		case 'A':
		case 'a': 
			if(1<time && time<9) printf("You should be sleeping");
			else printf("You should be awake");
		break;
		case 'P':
		case 'p': 
			if(9<time && time<12) printf("You should be sleeping");
			else printf("You should be awake");
		break;
		default: printf("Wait... %cM? What's that?", ampm); break;
	}
	return 0;
}

int getPromptedNumber(char* thePrompt)
{
	int userEntry;
	printf("%s", thePrompt);
	scanf("%d", &userEntry);
	return userEntry;
}


