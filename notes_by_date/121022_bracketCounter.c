/**
 *@file 121022_bracketCoutner.c
 *@brief Count how many more { than } are in a file
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    //Need a file pointer to keep track of the input file
    FILE* sourceCode; //let's call it "sourceCode"
    
    //Need to open file so we can read from it
    //filename will be... argv[1] (user's first input after program)
    //mode will be "r" for read
    sourceCode = fopen(argv[1], "r"); //sourceCode gets file pointer for reading from argv[1]
    
    //Assume there's at least one character in the file
//    for(/*initialize*/; /*test condition*/; /*make progress*/)
 
    char someCharacter;
    int varsScanned;
    int opens;
    int closes;
    int everythingElses;
    opens=0;
    closes=0;
    everythingElses=0;
    //Extract next character from the file, AND note how many
    //variables are filled by the scan (using varsScanned)
    varsScanned = fscanf(sourceCode, "%c", &someCharacter);
    while(varsScanned!=EOF) //Since we don't yet know how many characters
    {
        switch(someCharacter)
        {
            case '{': opens++; printf("%c", someCharacter); break;
            case '}': closes++; printf("%c", someCharacter); break;
            default: everythingElses++; break;
        }
        varsScanned = fscanf(sourceCode, "%c", &someCharacter);
    }
    printf("\n\t{ %d\n\t} %d\n\tOther %d\n", opens, closes, everythingElses);
    return 0;
}