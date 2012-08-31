#include <stdio.h>

int main(int argc, char* argv[])
{
  printf("Using tokens in printf\n");

  printf("\n\n--------------------------\n\n");

  printf("Here is a string: %s. Stringy!\n", "GODZILLA!");
  printf("Here is a 'decimal' number: %d. Decimated!\n", 42);
  printf("Actually, you should call it an integer: %d. Integral!\n", 42);
  printf("Here is a 'floating point' number: %f. Floaty!\n", 3.1415);
  printf("Here is a character: %c. Characteristic!\n", 'w');
  printf("Here are two integers: %d %d\n", 19, 82);
  printf("Here are two integers in a row a space: %d%d\n", 111, 222);
  printf("Here is what you get when you add those: %d\n", 111+222);
  printf("Here are four characters in a row: %c%c%c%c\n", '2', 'd', ' ', '!');
  
  printf("\n\n--------------------------\n\n");

  printf("The numeric value of the character %c is %d\n", 'a', 'a');
  printf("The character value of the number %d is %c\n", 70, 70);
  printf("Displaying Pi (%f) as an integer has weird results: %d\n", 3.1415, 3.1415);
  printf("Displaying The Answer (%d) as a float is strange as well: %f\n", 42, 42);

  printf("\n\n--------------------------\n\n");

  printf("and why is there a %d here?\n", printf("How did this text get here, "));
  printf("and why is there a %d here?\n", printf("How did this text arrive, "));
  printf("and why is there a %d here?\n", printf("How did this text move, "));
  
  printf("\n\n--------------------------\n\n");

  printf("0\t1\t2\t3\t4\n|\t|\t|\t|\ntabs\tmake\ta\ttable\n0\t1\t2\t3\t4\n");

  printf("\n\n--------------------------\n\n");

  return 0;
}
