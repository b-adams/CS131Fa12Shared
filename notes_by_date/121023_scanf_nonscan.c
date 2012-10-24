#include <stdio.h>

/**
@brief Remove remaining content from input stream
@ref http://stackoverflow.com/questions/2187474/i-am-not-able-to-flush-stdin
*/
void flush();

int main(int argc, char const *argv[])
{
	int d1, d2, d3;
	int result;
	while(1)
	{
		printf("Enter three numbers in the format\nNUM # NUM $ NUM\n");
		result=scanf("%d # %d $ %d", &d1, &d2, &d3);
		printf("The result of your scan was [%d]. EOF is %d\n", result, EOF);

		flush();

	}
	return 0;
}

void flush()
{
	printf("\nFLUSHING: << ");
	for(int c=getchar(); (c != '\n' && c != EOF); c=getchar())
		printf("[%c]", c); //show character being flushed, in [brackets]
	printf(" >> : FLUSHED\n");
}

