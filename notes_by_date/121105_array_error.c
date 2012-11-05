#include <stdio.h>

const int DIGITS_IN_ZIPCODE = 5;

void printNumberArray(int numsC, int numsV[numsC]);

void silentChange(int numsC, int* numsV);

int main(int argc, char const *argv[])
{
	int zipCode1[DIGITS_IN_ZIPCODE];
	int zipCode2[DIGITS_IN_ZIPCODE];
	
	for(int i=0; i<DIGITS_IN_ZIPCODE; i++)
	{
		zipCode1[i]=(i+0); //Making zipCode1 be 01234
		zipCode2[i]=(i+5); //Making zipCode2 be 56789
	}
	
	printf("Zipcode1 (%p) is: ", zipCode1);
	printNumberArray(DIGITS_IN_ZIPCODE, zipCode1);
	printf("\n");

	printf("Zipcode2 (%p) is: ", zipCode2);
	printNumberArray(DIGITS_IN_ZIPCODE, zipCode2);
	printf("\n");

	printf("\nModifying zip1[%d] and zip2[%d]...\n", 
		DIGITS_IN_ZIPCODE, DIGITS_IN_ZIPCODE);
	
	printf("entry %d (at %p) is %d. Setting it to %d\n", 
		DIGITS_IN_ZIPCODE, &zipCode1[DIGITS_IN_ZIPCODE], 
		zipCode1[DIGITS_IN_ZIPCODE], zipCode1[DIGITS_IN_ZIPCODE] = -3);

	printf("entry %d (at %p) is %d. Setting it to %d\n", 
		DIGITS_IN_ZIPCODE, &zipCode2[DIGITS_IN_ZIPCODE], 
		zipCode2[DIGITS_IN_ZIPCODE], zipCode2[DIGITS_IN_ZIPCODE] = -3);

	printf("\nModifying zip1[%d] and zip2[%d]...\n", 
		DIGITS_IN_ZIPCODE+1, DIGITS_IN_ZIPCODE+1);
		
	silentChange(DIGITS_IN_ZIPCODE+1, zipCode1);
	silentChange(DIGITS_IN_ZIPCODE+1, zipCode2);

	
	printf("Mischief managed...\n");


	printf("\nPeeking into memory starting at zip1...\n");
	printNumberArray(3*DIGITS_IN_ZIPCODE, zipCode1);
	printf("\n\nPeeking starting with zip 2...\n");
	printNumberArray(3*DIGITS_IN_ZIPCODE, zipCode2);
	
	printf("\n\nNOTE: On many computers, one of these two displays will show BOTH arrays\n");
	
	return 0;
}

void printNumberArray(int numsC, int numsV[numsC])
{
	for(int i=0; i<numsC; i++)
	{
		printf("\n\t(offset=%d) %d (@ %p)", i, numsV[i], &numsV[i]);
	}

}

void silentChange(int numsC, int* numsV)
{
	printf("entry %d (at %p)  is %d. Setting it to -2\n", numsC, &numsV[numsC], numsV[numsC]);
	numsV[numsC] = -2;
	return;
}
