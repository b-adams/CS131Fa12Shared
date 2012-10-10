#include <stdio.h>

int main(void)
{
  for(int big=0; big<40; big+=10)
  {
    for(int lil=0; lil<5; lil++)
    {
      printf(" %d", big+lil);
    }
    printf("\n");
  }
  return 0;
}
