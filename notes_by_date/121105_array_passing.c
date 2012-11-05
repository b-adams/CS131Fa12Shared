#include <stdio.h>
#include <stdbool.h>

#define VERBOSE true //Like a constant, but mainly used for turning on and off testing values

void displayLetters(int lettersC, char* lettersV);

int countOdds(int numsC, int* numsV);

int main(int argc, char const *argv[])
{
	//Size and location of an array of characters
	int numberOfLetters = 7; //size
	char coolLetters[numberOfLetters]; //location

	//Size and location of an array of numbers
	int numberOfNumbers = 15; //Size
	int fibo[numberOfNumbers]; //Location

	//Using the same size but a new location for another array
	int powsOf2[numberOfNumbers];

	//To store the value returned from a function call
	int numberOfOdds; 

	//Setting contents of the coolLetters array (note: not setting them in order!)
	coolLetters[1]='a';
	coolLetters[3]='b';
	coolLetters[6]='i';
	coolLetters[2]='m';
	coolLetters[5]='n';
	coolLetters[4]='o';
	coolLetters[0]='Z';
	
	fibo[0]=0; //First fibonacci number is 0. Or 1. Depends on your preferences. 
	fibo[1]=1; //Second one is 1, regardless of your preference.

	for(int i=2; i<numberOfNumbers; i++)
	{ //Remaining numbers are always "the sum of the previous two"
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	//This is more efficient than writing out a bunch of fibonacci numbers by hand...
	//	fibo[2]=2;
	//	fibo[3]=3;
	//	fibo[4]=5;
	// ...etc

	powsOf2[0]=1; //2^0 is 1
	for(int i=1; i<numberOfNumbers; i++)
	{ //2^i is the same as 2 * 2^(i-1)
		powsOf2[i] = 2*powsOf2[i-1]; //i.e. each one is twice the previous one.
	}

	printf("\nmain is calling displayLetters...\n");
	displayLetters(numberOfLetters, coolLetters);
	printf("main has finished calling displayletters.\n");

	printf("\nmain is calling countOdds for fibonacci numbers...\n");
	numberOfOdds = countOdds(numberOfNumbers, fibo);
	printf("main has been informed there are %d odds in the list.\n", numberOfOdds);

	printf("\nmain is calling countOdds for powers of 2...\n");
	numberOfOdds = countOdds(numberOfNumbers, powsOf2);
	printf("main has been informed there are %d odds in the list.\n", numberOfOdds);

	printf("\nPrintf CAN display an array of characters with the s token: <<%s>>\n", coolLetters);
	printf("Printf CANNOT display an array of other things. This gives a warning: <<%s>>\n", fibo);
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

int countOdds(int numsC, int* numsV)
{
	int totalSeen;
	if(VERBOSE) printf("Calculating how many of the %d numbers in int array at %p are odd\n", numsC, numsV);

	totalSeen=0;	//Start count at zero
	for(int offset=0; offset<numsC; offset++)
	{
		if(numsV[offset]%2 == 1) 
		{ //When there's one left over after dividing by 2, you're odd
			totalSeen++; //...the count goes up.
			if(VERBOSE) printf("+ MATCH\t: %5d is odd\n", numsV[offset]);
		} 
		else 
		{	//When there's no match, nothing to do
			if(VERBOSE) printf("- Skip\t: %5d is even!\n", numsV[offset]);
		}
	}

	if(VERBOSE) printf("Done calculating. Returning %d\n", totalSeen);
	return totalSeen;

}
