#include <stdio.h>

int main(int argc, char* argv[])
{
	char* progname;
	progname = argv[0];
	printf("You typed: %s\n", progname);

	printf("%c", progname[0]);

	for(int i=0; i<10; i++) printf("\t%c\n", progname[i]);

	for(int i=0; i<22; i++)
		printf("%c", "more than one mongoose"[21-i] );

	printf("\n");
	return 0;
}
