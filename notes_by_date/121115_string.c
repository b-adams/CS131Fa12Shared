/**
 @file 121115_string.c
 @author Prof Adams
 @brief Demonstration of assorted string-related code

 Questions:
 * How can strlen tell how long the string/character array is?
 * Why are only N-1 letters allowed in an N letter string?
 * What is always the last character in a string? (What's its ASCII code)
 * When scanning into the same 'buffer' (character array), what happens to the old data?
*/
#include <stdio.h> //for printf
#include <string.h> //for strlen
#include <stdlib.h> //for malloc

/**
 @brief Display info about a character
 @param ch The character to display

 Displays the character in brackets (to make non-printing characters easier to spot)
 as well as the ASCII code in base-16 and base-10
*/
void showChar(char ch);

/**
@brief Display info about a string 
@param ch Pointer to the "string buffer" to display

Shows the string, its length, its location in memory, and then 
shows the fifteen characters starting at the beginning of the string
*/
void showString(char* str);

/**
 @brief Entry point for the program
 @returns 0 if all goes well

 Demonstrate some ways strings get used and abused.
*/
int main(void)
{
	char* candidate; //Declaring... A STRING! (it's a pointer... to the start of an array...)
	candidate = "Barack Romney"; //String auto-created, 'candidate' points to first letter.
	showString(candidate);
	candidate = "Mitt Obama"; //String autogen, 'candidate' points to first letter
	showString(candidate);

	showString("Mickey Mouse"); //String autogen and passed to function

	showString("Chuck Norris' Roundhouse"); //String autogen and pass

	char nominee[12]; //12-character array, whose first letter is pointed to by 'nominee'
	candidate = nominee; //Make 'candidate' point to the same thing 'nominee' does.

	while( candidate[0]!='*') //As long as the name doesn't start with a *
	{
		printf("Enter your own candidate (max 11 letters, * to end):");
		scanf("%11s", candidate); //Semi-necessary magic number, one less than 12.
		showString(candidate);
	}

	printf("\n\nFANCY CODE BEGINS\n\n");

	char fmt[5];
	char* input;
	int size;
	printf("How many letters do you need?");
	scanf("%d", &size);

	input = malloc((size+1)*sizeof(char)); //Allocate enough space for that many characters, plus one
	sprintf(fmt, "%%%ds", size); //Create a format string like "%12s" with the size built in
	printf("Please enter at most %d characters: ", size);
	scanf(fmt, input); //Use that format string to limit the scan, store result wherever input points
	showString(input);

	return 0;
}

void showChar(char ch)
{
	printf("[%c]\t has ASCII code %x, character number %d\n", ch, ch, ch);
}

void showString(char* str)
{
	printf("\n***%s*** is %lu long and is located at %p\n", str, strlen(str), str);
	for(int index=0; index<15; index++)
	{
		printf("%3dth char: ", index);
		showChar(str[index]);
	}
	printf("\n\n");
}
