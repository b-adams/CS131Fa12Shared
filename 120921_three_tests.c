/** 
 @file 120921_three_tests.c
 */
#include <stdio.h>

/**
 @brief Mystery function 1
 @returns An integer of some sort
 */
int func1();

/**
 @brief Mystery function 2
 @returns A character of some sort
 */
char func2();

/**
 @brief Mystery function 3
 @returns Nothing
 */
void func3();

/**
 @brief Entry point for the program
 @returns 0 if all goes well
 */
int main(void)
{
	printf("Line:%d\n",30);
	func1();
	printf("Line:%d\n",32);
	func2();
	printf("Line:%d\n",34);
	func3();
	printf("Line:%d\n",36);
	return 0;
}

int func1()
{
	printf("***func1() called***\n");
	int var1;
	printf("Message1\t");
	scanf("%d", &var1);
	printf("***func1() returning %d***\n", var1);
	return var1;
}

char func2()
{
	printf("***func2() called***\n");
	char var2;
	printf("Message2\t");
	scanf("%c", &var2);
	printf("***func2() returning %c***\n", var2);
	return var2;
}

void func3()
{
	printf("***func3() called***\n");
	printf("Message3\t");
	scanf(" ");
	printf("***func3() returning***\n");
	return;
}