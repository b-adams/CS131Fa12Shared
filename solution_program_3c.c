/** @file solution_program_3c.c */
#include <stdbool.h>
#include <stdio.h>

int getPromptedNumber(char* thePrompt);

int main(void)
{
	int gradYear;
	bool oddLine;
	gradYear = getPromptedNumber("How much ya got?");
	oddLine = (gradYear%2); 

	printf("Dear ");
	if(gradYear < 2005)
	{
		printf("alumnae, here is your ");
		if(oddLine)
		{
			printf("Lavender and Marigold");
		} else {
			printf("Cerulean and Aquamarine");
		}
	} else {
		printf("alumni, here is your ");
		if(oddLine)
		{
			printf("Purple and Yellow");
		} else {
			printf("Blue and Green");
		}
	}
	printf("shirt\n");
	return 0;
}

int getPromptedNumber(char* thePrompt)
{
	int userEntry;
	printf("%s", thePrompt);
	scanf("%d", &userEntry);
	return userEntry;
}


