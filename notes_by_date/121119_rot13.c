#include <stdio.h>
#include <string.h> //for strlen
#include <stdbool.h> //for bools

bool isUpper(char letter);
bool isLower(char letter);

void rot13(int strsize, char* word);

int main(void)
{
	//char* input; //doesn't create space for input
	char input[8388600]; //creates a buffer
	printf("Please enter a word:");
	scanf("%99s",input); //one less than buffer size (to allow for terminal invisible character)
	printf("You entered [%s]\n", input);
	rot13(strlen(input),input);
	printf("That, rotated, is [%s]\n", input);
	rot13(strlen(input),input);
	printf("Rotated twice, it's [%s]\n", input);
	return 0;
}

void rot13(int strsize, char* word)
{
	for(int ltr=0; ltr<strsize; ltr++)
	{
		if(isLower(word[ltr]))
		{
			if(word[ltr] < 'n')
				word[ltr] = 13 + word[ltr];
			else //word[ltr] >= 'n'
				word[ltr] = word[ltr] - 13;
		}
		if(isUpper(word[ltr]))
		{
			if(word[ltr] < 'N')
				word[ltr] = 13 + word[ltr];
			else //word[ltr] >= 'N'
				word[ltr] = word[ltr] - 13;
		}
	}
}

bool isUpper(char letter)
{
	//Check if letter is between
	//whatever the ASCII codes are for
	//A (65) and Z (90)
	if('A' <= letter && letter <= 'Z')
		return true;
	else
		return false;
}

bool isLower(char letter)
{
	return ('a'<=letter && letter<='z');
}
