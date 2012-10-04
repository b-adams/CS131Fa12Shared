#include <stdio.h>

int main(void)
{
    int twelve;
    printf("Please enter 12:");
    scanf("%d", &twelve);
    if(twelve!=12)
    printf("Ok [line 9]");
      if(twelve==13)
        printf("Really? [line 11]");
    else
      printf("Line 13");
      
    printf("\n\n");
    
    return 0;
}