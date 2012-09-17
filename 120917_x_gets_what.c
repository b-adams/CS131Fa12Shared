#include <stdio.h>

int main(int argc, char* argv[])
{
  int x; //Declare int-valued variable named x
  printf("Please enter a number:");
  scanf("%d", &x);
  printf("You have entered ::%d::\n", x);
  x=x+1; //"x gets x plus one"
         //aka modify x by adding 1 add one to x
  printf("x is now: %d\n",x);
  x=x+5;
  x=x+x;
  x=2*x;
  x=x-x; //??? x=0
  //2=x; //illegal

  for(int i=0; i<10; i=i+1)
  {
    printf("Repeat %d\n", i);
  }

  for(int i=0; i<10; i++) //i++ does the same thing as i=i+1
  {
    printf("Repeat %d\n", i);
  }

  return 0;
}
