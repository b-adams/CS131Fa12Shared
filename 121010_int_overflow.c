#include <stdio.h>

int main(void)
{
  int num;
  num = 1;
  while(num > 0)
  {
    printf("%d\n", num);
    num = num * 2;
  }
  printf("Final result: %d\n", num);
}
