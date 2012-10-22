#include <stdio.h>

int main(int argc, char* argv[])
{
    //NFF: Need For Files
    
    //NFF: A "file pointer" of type FILE*, with any name
    //same for reading and writing
    FILE* dataIn; //FILE in all caps
    
    //NFF: Opening a filename, in a Read/Write/Append mode, and
    //     storing the result in your file pointer
    dataIn = fopen(argv[1], "r"); //r for Read mode

    int userNumber;
    int sumSoFar;
    sumSoFar=0;
    
    userNumber = 0;
    while(userNumber >= 0)
    {
        printf("Getting a number from file"); //output to screen
        //NFF: Input from a file. fscanf function call
        //  first argument is your file pointer
        //  second argument is normal scanff format string
        //  third and further arguments (optional) are
        //    ampersand-led variable names for storing data in
        fscanf(dataIn, "%d", &userNumber); //input from file
        printf("Got %d\n", userNumber);
        sumSoFar = sumSoFar + userNumber;
    }
    printf("\n\nTotal: %d\n", sumSoFar); //to screen
    
    //NFF: Put away your toys
    //  close the file
    fclose(dataIn);
    return 0;
}