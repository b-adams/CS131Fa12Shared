#include <stdio.h>

int main(void)
{

  int y;
  int x;
  int width;
  int height;
  printf("Enter width and height");
  scanf("%d %d", &width, &height);


//  for(int big=0; big<30; big=big+10)
  for(y=0; y<height; y=y+1)
  {
//    printf("Big loop begins: big=%d lil=%d\n", big, lil);
    for(x=0 ; x<y; x=x+1)
    {
      printf(" (%d,%d)", x, y);
    }
    printf("\n");
  }

  return 0;
}
