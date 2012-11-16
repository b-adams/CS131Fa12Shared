#include <stdio.h>

typedef struct
{
	char firstInitial;
	char lastInitial;
	int heightFeet;
	int heightInches;
} PERSON;

int main(void)
{
	int peopleC;
	printf("How many people are here?");
	scanf("%d", &peopleC);
	PERSON peopleV[peopleC];
	PERSON* currentPerson;
	for(int i=0; i<peopleC; i++)
	{
		currentPerson = &(peopleV[i]);
		printf("Please enter first and last initials for person %d:", i);
		scanf(" %c %c", &currentPerson->firstInitial, &currentPerson->lastInitial);
		printf("Please enter their height, in the format: FEET'INCHES:");
		scanf("%d'%d", &currentPerson->heightFeet, &currentPerson->heightInches);
	}

	int totalHeight;
	for(int i=0; i<peopleC; i++)
	{
		currentPerson = &(peopleV[i]);
		totalHeight = 12*currentPerson->heightFeet + currentPerson->heightInches;
		printf("(%d)\t%c.%c. is %d inches tall\n", 
			i, currentPerson->firstInitial, currentPerson->lastInitial, totalHeight);
	}

	
	return 0;
}