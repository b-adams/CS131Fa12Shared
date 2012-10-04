#include <stdio.h>
#include <stdbool.h>

int getNumberBetween(int min, int max);

void countDownByTwoFrom(int fromWhat);

int main(void)
{
    bool keepGoing;
    
    countDownByTwoFrom(23);
    
    keepGoing = true;
    printf("About to loop\n");
    //while(false) body never runs
    //while(true) infinite loop
    while(keepGoing)
    {
        printf("Enter 5:");
        keepGoing = (getNumberBetween(3,7) != 5);
    }
    printf("Done looping\n");
    return 0;
}

int getNumberBetween(int min, int max)
{
    int userNumber;
    userNumber = min-1; //To give it a bad value
    while((userNumber>max) || (userNumber<min)) //Boolean expression re-evaluated each time
    {
        printf("Please enter a number between %d and %d:", min, max);
        scanf("%d", &userNumber);
    }
    
    return userNumber;
}

void countDownByTwoFrom(int fromWhat)
{
    int theCount; //To keep track of where we are (the LCV)
    theCount = fromWhat;
    while(theCount > 0)
    {
        printf("%d \n", theCount);
        theCount = theCount-2;
    }
    
    theCount=0;
    while(theCount<12)
    {
        printf("Ding!\n");
        theCount=theCount+1;
    }
}