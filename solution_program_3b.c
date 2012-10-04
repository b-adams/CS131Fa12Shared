/** @file solution_program_3b.c */

#include <stdio.h>

int getPromptedNumber(char* thePrompt);

int main(void)
{
	int moolah;
	char* place;

	moolah = getPromptedNumber("How much ya got?");

	if(moolah>50)
	{
		place = "Fargo";
	} else if(moolah<20) {
		place = "Dinning Hall";
	} else {
		place = "Backstage Grill";
	}

	printf("Go to the... %s\n", place);

	return 0;
}

int getPromptedNumber(char* thePrompt)
{
	int userEntry;
	printf("%s", thePrompt);
	scanf("%d", &userEntry);
	return userEntry;
}


