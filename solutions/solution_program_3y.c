/** @file solution_program_3y.c */
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	bool massive, pricey, collectible;
	int size, cost, produced;

	printf("Please enter your vehicle's size, cost, and number produced");
	scanf("%d %d %d", &size, &cost, &produced);

	massive = (size*cost >= 2000000);
	collectible = (cost * produced >= 50000);
	pricey = (cost > 10000000);
	
	if(massive || pricey || collectible) printf("You're in!");
	else printf("No admission");
	
	return 0;
}


