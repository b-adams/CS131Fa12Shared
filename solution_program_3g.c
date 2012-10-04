/** @file solution_program_3g.c */

#include <stdio.h>

int getPromptedNumber(char* thePrompt);

int main(void)
{
	int age;
	int temperature;

	age = getPromptedNumber("I am the bouncer at this club. Please enter your age.");
	temperature = getPromptedNumber("Also, what is the temperature outside?");

	if(age>21)
	{
		printf("Welcome to the club!\n");
		if(temperature < 70) printf("Can I take you coat for you?");
		else printf("Just get dancing.");
	} else {
		printf("Sorry friend. You are too young for this club.");
		if(temperature<70) printf("Better keep on that coat");
		else printf("Time for you to go");
	}
	printf("Have  great evening");
	return 0;
}

int getPromptedNumber(char* thePrompt)
{
	int userEntry;
	printf("%s", thePrompt);
	scanf("%d", &userEntry);
	return userEntry;
}


