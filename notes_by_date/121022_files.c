#include <stdio.h> //for EOF, NULL, FILE, fprintf, fscanf...
#include <stdlib.h>
#include <stdbool.h> //For bool, true, false

int main(int argc, char* argv[])
{
    FILE* spOut;
    if(argc!=2)
    {
        printf("Incorrect number of inputs. Syntax is:\n");
        printf("\t%s [logfile]\n", argv[0]);
        return 1; //bad return value
    }
    spOut = fopen(argv[1], "a"); //open in "append" mode
    
    char l;
    l='!';
    while(l != '*')
    {
        printf("Please enter a letter:");
        scanf("%c", &l);
        fprintf(spOut, "%c", l);
    }
    fclose(spOut);
    printf("Wrote data to file %s\n", argv[1]);
    
    return 0;
}