#include <stdio.h>

/**
 * @brief Find n!
 * @param n Number to take factorial of
 * @return 1*2*3*...*n
*/
F_fact(int n);

/**
 * @brief Find n!
 * @param n Number to take factorial of
 * @return 1*2*3*...*n
*/
R_fact(int n);

int main(void)
{
  return 0;
}

F_fact(int n)
{
  int runningProduct;
  runningProduct=1;
  for(int i=0; i<n; i++)
  {
    runningProduct=(i+1)*runningProduct;
  }
  return runningProduct;
}

R_fact(int n)
{
  int theProduct;
  
  if(n==0)
  {
    return 1; //Be done already, we know this one
  } else if(n>0) {
    theProduct = n*R_fact(n-1);
  /*
   Trusting documentation which indicates
   R_fact(n-1) really is factorial of n-1
  */
  } else {
    printf("WTF!?\n");
  }
  return theProduct;
}
