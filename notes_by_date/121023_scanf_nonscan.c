#include <stdio.h>

/**
@brief Remove remaining content from input stream
@ref http://stackoverflow.com/questions/2187474/i-am-not-able-to-flush-stdin
*/
void flush();

void flushTo(char someLetter);

int main(int argc, char const *argv[])
{
	int d1, d2, d3;
	int result;
	while(1)
	{
		printf("Enter three numbers in the format\nNUM # NUM $ NUM\n");
		result=scanf("%d # %d $ %d", &d1, &d2, &d3);
		printf("The result of your scan was [%d]. EOF is %d\n", result, EOF);

		flushTo('m');

	}
	return 0;
}

void flush()
{
	printf("\nFLUSHING: << ");

	//for(int c=getchar(); (c != '\n' && c != EOF); c=getchar())
	//	printf("[%c]", c); //show character being flushed, in [brackets]
	
	int c=fgetc(stdin); 
	while(c != '\n' && c != EOF)
	{
		printf("[%c]", c); //show character being flushed, in [brackets]
		c=fgetc(stdin);
	}

	printf(" >> : FLUSHED\n");
}

void flushTo(char someLetter)
{
	printf("\nFLUSHING: << ");

	//for(int c=getchar(); (c != '\n' && c != EOF); c=getchar())
	//	printf("[%c]", c); //show character being flushed, in [brackets]
	
	int c=getchar(); 
	while(c != someLetter && c != EOF)
	{
		printf("[%c]", c); //show character being flushed, in [brackets]
		c=getchar();
	}
	printf("\n\nA ((%c)) has been spotted!\n\n", someLetter);
	ungetc(someLetter, stdin);
	flush();

	printf(" >> : FLUSHED\n");
	
}






