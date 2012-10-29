/* Problem While 1 (problem 5 page 5) */
int digits=0;
int x=getUserInput();
while(x != 0)
  digits=digits+1;
  x=x/10;
  printf("x remaining: %d  digits seen: %d\n", x, digits);
printf("%d has %d digits\n", x, digits);