#include <stdio.h>

const int SUGGESTION=17;
//constants go before func declarations, after includes
//Note: const keyword
//Note: ALL_CAPS name (with underscored if needed)
//Note: Immediate assignment to permanent value

const int MONTHS_IN_A_YEAR=13;
const int EGGS_IN_A_CARTON=10;

int getUserInput();

int main(int argc, char* argv[])
{
  //SUGGESTION = 18; //Does not work
  int theNumber; //Local variable of main
  theNumber = 20;
  printf("Todays number is 30, not %d\n", theNumber);
  printf("Tomorrow's number is 31, not %d\n", theNumber);

  int todaysNumber;
  todaysNumber = 30;
  printf("Todays number is %d, not %d\n", todaysNumber, theNumber);
  printf("Tomorrow's number is %d, not %d\n", todaysNumber+1, theNumber);
  
  todaysNumber = getUserInput();
  printf("Todays number is %d, not %d\n", todaysNumber, theNumber);
  printf("Tomorrow's number is %d, not %d\n", todaysNumber+1, theNumber);
  
  return 0;

  
  
}

int getUserInput()
{
  int whatTheUserEntered; //Local variable of getUserInput
  printf("Enter a number:"); //Prompt the user so they don't wait too long
  //do something to fill that value
  scanf("%d", &whatTheUserEntered);
  return whatTheUserEntered;
}