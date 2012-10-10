#include <stdio.h>

int main(void)
{
  int c1;
  c1=0;
  while(c1<5)
  {
    printf("%d", c1);
    c1=c1+1;
  }

  for(int c2=0; c2<5; c2=c2+1)
  {
    printf("%d", c2);
  }

  for(int c3=0; 
      c3<5; 
      c3++)
  {
    printf("%d", c3); //Note: Cannot use c2, it's not "in scope" here
  }
}
