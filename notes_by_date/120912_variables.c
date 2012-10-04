#include <stdio.h>

void happyBirthdaySomeTimes(int numTimes);

int main(int argc, char* argv[])
{
    printf("Argc is %d\n", argc);
    
    for(int i=0; i<argc; i=i+1)
    {
        printf("Argv[%d] is %s\n", i, argv[i]);
    }
    
    happyBirthdaySomeTimes(5);
    happyBirthdaySomeTimes(2);
    /*
    int leftSize; //Declaration of int-valued variable named leftSize
    int shoeSize; //Create cobweb-filled variable

    printf("1: Shoe:%d \t Left:%d\n", shoeSize, leftSize); //accessing variables
    shoeSize = 40; //Put 40 into it (Assign 40 to shoeSize)
    printf("2: Shoe:%d \t Left:%d\n", shoeSize, leftSize);
    leftSize = shoeSize / 2; //Put half shoeSize into Leftsize (accessing variables)
    printf("3: Shoe:%d \t Left:%d\n", shoeSize, leftSize);
    */
    return 0;
}

void happyBirthdaySomeTimes(int numTimes)
{
    if(numTimes<0) return;
    
    printf("numTimes is %d\n", numTimes);
    for(int i=0; i<numTimes; i=i+1)
    {
        printf("Happy Birthday\n");
    }
    happyBirthdaySomeTimes(numTimes-1);
    return;
}
