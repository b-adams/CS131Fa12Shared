#include <stdio.h>
#include <stdbool.h>

#define VERBOSE true //Like a constant, but mainly used for turning on and off testing values

void displayLetters(int lettersC, char* lettersV);

int countInstances(int matchMe, int numsC, int* numsV);

int main(int argc, char const *argv[])
{
	//Size and location of an array of characters
	int numberOfLetters = 7; //size
	char coolLetters[numberOfLetters]; //location

	//Size and location of an array of numbers
	int numberOfNumbers = 5; //Size
	int zipDigits[numberOfNumbers]; //Location

	int numberOfOnes; //To store the value returned from a function call


	zipDigits[0]=1;
	zipDigits[1]=1;
	for(int i=2; i<numberOfNumbers; i++)
	{
		zipDigits[i] = zipDigits[i-1] + zipDigits[i-2];
	}
//	zipDigits[2]=2;
//	zipDigits[3]=3;
//	zipDigits[4]=5;
	
	coolLetters[1]='a';
	coolLetters[3]='b';
	coolLetters[6]='i';
	coolLetters[2]='m';
	coolLetters[5]='n';
	coolLetters[4]='o';
	coolLetters[0]='Z';
	
	printf("\nmain is calling displayLetters...\n");
	displayLetters(numberOfLetters, coolLetters);
	printf("main has finished calling displayletters.\n");

	printf("\nmain is calling countInstances...\n");
	numberOfOnes = countInstances(1, numberOfNumbers, zipDigits);
	printf("main has been informed there are %d ones.\n", numberOfOnes);


	return 0;
}

void displayLetters(int lettersC, char* lettersV) //Remember, lettersV is a char* (character pointer)
{
	char currentCharacter;
	if(VERBOSE) printf("Displaying the %d letters in character array at location %p\n", lettersC, lettersV);

	for(int offset=0; offset<lettersC; offset++)
	{
		currentCharacter = lettersV[offset];
		printf("Letter %d is: %c (ASCII Hex %x Decimal %d)\n", offset, currentCharacter, currentCharacter, currentCharacter);
	}

	if(VERBOSE) printf("All done displaying.\n");
	return;
}

int countInstances(int matchMe, int numsC, int numsV[numsC]) //Alternate argument syntax
{
	int totalSeen;
	if(VERBOSE) printf("Calculating how many of the %d numbers in int array at %p match with %d\n", numsC, numsV, matchMe);

	totalSeen=0;	//Start count at zero
	for(int offset=0; offset<numsC; offset++)
	{
		if(numsV[offset] == matchMe)
		{	//When the number matches...
			totalSeen++; //...the count goes up.
			if(VERBOSE) printf("+ MATCH! A %d has been spotted!\n", numsV[offset]);
		} 
		else 
		{	//When there's no match, just display
			if(VERBOSE) printf("- Just a %d, nothing to see, move along.\n", numsV[offset]);
		}
	}

	if(VERBOSE) printf("Done calculating. Returning %d\n", totalSeen);
	return totalSeen;

}
