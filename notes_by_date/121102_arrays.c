#include <stdio.h>
//Program to input multiple numbers
//and then spit them out backward
int main(void)
{
	int numsC;
	printf("How many inputs would you like to reverse?");
	scanf("%d", &numsC);
	//Declare an array of --slots many-- integers
	int numsV[numsC];

	printf("Created array at location %p\n", numsV);
	printf("Please enter %d numbers: ", numsC);

	//Store data from user into first, second, and third
	//slots in the x array
	for(int offset=0; offset<numsC; offset++)
	{
		scanf("%d", &numsV[offset]);
	}

	//Display data to user from third, second, and first
	//slots in the x array
	for(int offset=numsC-1; offset>=0; offset--)
	{
		printf("%d\n", numsV[offset]);
	}

	return 0;
}
