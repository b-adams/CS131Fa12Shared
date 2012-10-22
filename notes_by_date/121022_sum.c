#include <stdio.h>

int main(int argc, char* argv[])
{
    //NFF: Need For Files
    
    //NFF: A "file pointer" of type FILE*, with any name
    FILE* spOut; //FILE in all caps
    
    int thisThing;
    int thisthing;
    
    FILE* outputFile; //Also ok, just changing variable name
    
    //NFF: Opening a filename, in a Read/Write/Append mode, and
    //     storing the result in your file pointer
    outputFile = fopen(argv[1], "w"); //w is DANGEROUS! It deletes, then writes!

    int userNumber;
    int sumSoFar;
    sumSoFar=0;
    
    userNumber = 0;
    while(userNumber >= 0)
    {
        printf("Enter a number:"); //output to screen
        scanf("%d", &userNumber); //input from keyboard
        sumSoFar = sumSoFar + userNumber;
        
        //NFF: Output text to a file. fprintf function call
        //  first argument is your file pointer
        //  second argument is normal printf format string
        //  third and further arguments (optional) are data
        //    to fill into the format string tokens
        fprintf(outputFile, "%d ", userNumber); //output to file
    }
    fprintf(outputFile, "\n\nTotal: %d\n", sumSoFar); //to file
    printf("Data totalled. Thank you.\n"); //to screen
    
    //NFF: Put away your toys
    //  close the file
    fclose(outputFile);
    return 0;
}