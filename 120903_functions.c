#include <stdio.h>

//Function to say "Happy Birthday Kailin" many times
//No arguments - very static function
//Declaration!
char rejoice();

int main(int argc, char* argv[])
{
  printf("v%d Hello, World!\n", 5);
  //Function call
  rejoice();
  return 0;
}

//Definition!
char rejoice()
{ //Body of definition
  printf("Happy Birthday Kailin!\n");
  printf("\tHappy Birthday Kailin!\n");
  printf("**\tHappy Birthday Kailin!\t**\n");
  return 'q'; //Chosen arbitrarily
}
