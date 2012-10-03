#include <stdio.h>
#include <stdbool.h>

int getNumberBetween(int min, int max);

int main(void)
{
    bool keepGoing;
    
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
