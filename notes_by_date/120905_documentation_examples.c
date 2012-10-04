#include <stdio.h>

/**
  @brief Displays your first initial.
  @param yourAge Your age, in years
  @returns The letter m, which is everyone's first initial
 */
char yourFirstInitial(int yourAge);


//Documentation goes directly above the declaration of the function being documented
/**
  @brief Puts a lot of BANGs on the screen and beeps at least once
  @param howLong How many times to bang on things
  @returns nothing (void function)
 */
void makeSomeNoise(int howLong);

/**
 @brief Adds three numbers
 @param a First number to add
 @param b Second number to add
 @param c Third number to add
 @returns The sum of a and b and c
 */
int addThreeNumber(int a, int b, int c);

/**
 @brief Computed/provides a random number
 @returns 1 (randomly determined number)

 Warning: Do not use this random number function for
  high security applications.
 */
int randomNumber();

/**
 @brief Makes a beep
 @author Larry and Prof. Adams
 */
void beep();

int main(int argc, char* argv[])
{
  makeSomeNoise(15);
  return 0;
}

int addThreeNumber(int a, int b, int c)
{
  return a+b+c;
}

void makeSomeNoise(int howLong)
{
  for(int i=0; i<howLong; i++)
  {
    printf("BANG!%c ",7);
  }
  printf("\n");
  return;
}


char yourFirstInitial(int yourAge)
{
  return 'm';
}

void beep()
{
  printf("%c", 7);
  return;
}

int randomNumber()
{
  return 1; //Determined randomly by fair coin flip
}

