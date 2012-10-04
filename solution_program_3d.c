/** @file solution_program_3d.c */

#include <stdio.h>

int getPromptedNumber(char* thePrompt);

int main(void)
{
	int horseWeight, grain;
	
	horseWeight = getPromptedNumber("How heavy is the horse?");

	if(955<=horseWeight && horseWeight<=1000)
	{
		grain=2;
	} else if(1001<=horseWeight && horseWeight<=1100) {
		grain=3;
	} else if(1101<=horseWeight && horseWeight<=1150) {
		grain=4;
	} else {
		grain=999; //Dunno, abnormal horse?
	}
	
	printf("The %dlb horse needs %d lbs of grain and 8lbs of hay today.\n", horseWeight, grain);

	return 0;
}

int getPromptedNumber(char* thePrompt)
{
	int userEntry;
	printf("%s", thePrompt);
	scanf("%d", &userEntry);
	return userEntry;
}


