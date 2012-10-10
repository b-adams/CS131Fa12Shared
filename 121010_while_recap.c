#include <stdio.h>

int main(void)
{
  char ch;
  printf("Before loop");
  while(15)
  {
    scanf(" %c", &ch);
    printf("This");
    printf("That");
    printf("Other");
  }
  printf("After loop");
  return 0;
}
