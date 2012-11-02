/* Listing 4. Problem While 2 (problem 5 page 5) */
int x;
printf("Enter any number except zero");
scanf("%d", &x);
while(x=0)
{
  printf("EXCEPT zero! Try again.\n");
  scanf("%d", &x);
}
printf("Thank you. %d is nicely non-zero", x);