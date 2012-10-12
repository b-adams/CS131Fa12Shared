#include <stdio.h>

int main(void)
{
  int sum;
  int userInput;
  int runningTotal;
  runningTotal=0;
  for(int i=0; i<10; i++)
  {
    printf("Enter a number: ");
    scanf("%d", &userInput);
    while(userInput<1)
    {
      printf("Bad number. Be positive");
      scanf("%d", &userInput);
    }
    runningTotal = runningTotal + userInput;
  }
  sum = runningTotal;
  printf("The sum of your 10 numbers is: %d\n", sum);
  return 0;
}
