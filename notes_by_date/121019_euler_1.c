#include <stdio.h>

int take1(int k);
int take3(int k);
int take2(int k);

int main(void)
{
    //Note: x%3 == 0 exactly when x evenly divisible by 3
    // and x%5 == 0 when x divisible by 5
    int n;
    n=1000;
    printf("The sum through %d is...\nTake1: %d\nTake2: %d\nTake3: %d\n",
           n, take1(n), take2(n), take3(n));
    return 0;
}

int take1(int k)
{
    int sumSoFar;
    sumSoFar=0; //Make sure to start adding with nothing
    //CHOICE: FOR, WHILE, or Recursion?
    //goal: Scan each number from 0 through 999
    for(int i=0; i<k; i++) //We know where to end, use FOR
    {                          //Also, the only visits each number once
        //Sometimes (depending on if i is divisble
        //by 3 or 5 (or both), we want to add to
        //the running total. Sometimes we do not.
        if( (i%3 == 0) || (i%5 == 0) ) //i divisible by 3 or i divisible by 5
        {
          sumSoFar = sumSoFar + i; //we just found i should be added  
        }
        else
        {
            //skip it
        }
        
    }
    return sumSoFar;
    
}

int take2(int k)
{
    int sumSoFar;
    sumSoFar=0; //sane starting place
    
    //Add up everything divisible by 5
    for(int i=0; i<k; i=i+5)
    {
        sumSoFar = sumSoFar + i;    
    }
    //Add in everyhing divisible by 3
    for(int i=0; i<k; i=i+3)
    {
        sumSoFar = sumSoFar + i;    
    }     
    //Take out double-counted stuff (things divisible by 15)
    for(int i=0; i<k; i=i+15)
    {
        sumSoFar = sumSoFar - i;    
    }     
    
    return sumSoFar;
}

int take3(int k)
{
    int sumSoFar;
    sumSoFar=0;
    
    for(int i=0; i<k; i=i+5)
    {
        sumSoFar = sumSoFar + i;
    }
    for(int i=0; i<k; i=i+3)
    {
        if(i%5 != 0)
        {
            sumSoFar = sumSoFar + i;
        }
    }
    
    return sumSoFar;
}