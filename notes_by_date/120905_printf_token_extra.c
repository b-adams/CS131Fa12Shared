#include <stdio.h>

int main(int argc, char* argv[])
{
  int k=1;
  for(int i=0; i<16; i++)
  {
    printf("[%6d] : [%d] : %d\n", k, k, i);
    k*=2;
  }
}
