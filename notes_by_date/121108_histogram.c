#include <stdio.h>

const int DIGITS=10;
const int BAD_INPUT=-1;

int getInRange(int lowest, int highest);
int getLastDigit(void);

void histoPrint(int dataC, int* dataV);

int main(void)
{
  int frequencies[DIGITS]; //The frequency table
  int aDigit; 
  int copiesSeen; //Not needed for one-line version

  //Step one: Clear the array
  for(int offset=0; offset<DIGITS; offset++) frequencies[offset]=0;

  //Step two: Get user inputs. Keep going as long as they enter numbers.
  while((aDigit=getLastDigit()) != BAD_INPUT ) //Get next digit, and test that it's a digit before looping
  {
  	copiesSeen = frequencies[aDigit]; //Look up how many we've seen so far
  	copiesSeen = copiesSeen+1; //We've now seen one more
  	frequencies[aDigit] = copiesSeen; //Update how many we've seen
  }

  //for(int aDigit; (aDigit=getLastDigit()) != BAD_INPUT; frequencies[aDigit]++); //The unreadable version of the entire loop above

  //Step three: Display frequencies
  histoPrint(DIGITS, frequencies);
  return 0;
}

int getInRange(int lowest, int highest)
{
	int input;
	printf("Enter a number between %d and %d: ", lowest, highest);
	scanf("%d", &input);
	while(input<lowest || highest<input)
	{
		printf("Try again: ");
		scanf("%d", &input);
	}
	return input;
}
int getLastDigit(void)
{
	int input;
	printf("Enter a number (only the last digit will be used): ");
	if(scanf("%d", &input)) //We scanned in a number
	{
		return input%10;
	}
	else //There were no numbers, return a clearly bad result 
	{
		printf("Huh. That's not a number...\n");
		return BAD_INPUT;
	}
	
}

void histoPrint(int dataC, int* dataV)
{
	int appearances;
	for(int i=0; i<dataC; i++)
	{
		appearances = dataV[i]; //This line a long-cut for code readability
		printf("%3d appeared %3d times: ", i, appearances);

		for(int stars=0; stars<appearances; stars++) printf("*"); //print appearances-many stars
		
		printf("\n");
	}
	return;
}
