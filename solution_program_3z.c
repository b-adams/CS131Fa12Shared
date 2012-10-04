/** @file solution_program_3z.c */

#include <stdio.h>

int getPromptedNumber(char* thePrompt);

int main(void)
{
	int age;
	int serviceTime;

	age = getPromptedNumber("How old are you?");
	serviceTime = getPromptedNumber("How long did you serve?");

	if(age < 18)
	{
		printf("Junior: No taxes");
	} else if(age>65) {
		if(serviceTime<5) printf("Old Civilian: 10 percent");
		else printf("Old Vet: 20 percent");
	} else {
		if(serviceTime<5) printf("Civilian: 50 percent");
		else printf("Vet: 20 percent");
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


