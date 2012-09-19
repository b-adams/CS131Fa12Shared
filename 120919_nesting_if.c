/** 
 @file 120919_nesting_if.c
 @brief demonstrate nesting if statements and...
 @author Prof Adams.
*/

#include <stdio.h>
#include <stdbool.h>

/**
 @brief Entry point for program
 @param argc Number of command-line arguments
 @param argv The command-line tokens that were typed
 @returns 0 if no news (good news)
*/
int main(int argc, char* argv[])
{
  bool hot;
  bool dry;

  char answer;
  printf("Is it hot? Y or N (please use caps)");
  scanf(" %c", &answer);
  if(answer == 'Y')
  {
    hot=true;
  } else {
    hot=false;
  }

  printf("Is it dry? Y or N (please use caps)");
  scanf(" %c", &answer); 
  dry = (answer=='Y'); 
/* above is a shorter version of "If it is true that
   the answer is Y, then store true in dry. If it is
   false that the answer is Y, then store false in dry.
*/

//A bit of error checking
//THAT IS CURRENTLY BROKEN if you enter N and then Y
//  if(hot==false && answer!='N')
//  {
//    printf("Eh, %c was a bad input.\n", answer);
//    return 1;
//  }
//end error checking

  if(dry) //could also say "if(dry==true)", but that's redundant
  {
    printf("Flip flops!");
  } else {
    if(hot)
    {
      printf("Galoshes (oh god, galoshes)");
    } else {
      printf("Blanket");
    }
  }

  printf(" and underwear");

  return 0;
}
