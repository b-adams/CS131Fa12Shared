#include <stdio.h>

//Function to say "Happy Birthday Kailin" many times
//No arguments - very static function
//Declaration!
void rejoice();

//Partying will rejoice five times
void party();

//Example with arguments and return values
int addTwoNumbers(int firstNumber, int secondNumber);

int main(int argc, char* argv[])
{
  printf("v%d Hello, World!\n", 6);
  //Function call
  //party(); //too much partying, all done!
  printf("Here's a number: %d\n", 4);
  printf("Here's another number: %d\n", 3);
  printf("Here's their total: %d\n", addTwoNumbers(3,4));
  printf("Goodbye, %s World!\n", "cruel");
  printf("%d letters", printf("YO!\n"));
  return 0;
}

//Definition!
void rejoice()
{ //Body of definition
  printf("Happy Birthday Kailin!\n");
  printf("\tHappy Birthday Kailin!\n");
  printf("**\tHappy Birthday Kailin!\t**\n");
  return ; //Chosen arbitrarily
}

void party()
{
  rejoice();
  rejoice();
  rejoice();
  rejoice();
  rejoice();
  printf("\n\n\t********\nThat's a lot of partying...\n\n\n");
  party();
  return;
}

int addTwoNumbers(int firstNumber, int secondNumber)
{
  printf("FYI, I am now adding %d and %d\n", firstNumber, secondNumber);
  return firstNumber + secondNumber;
}
