#include <stdio.h>
#include <stdlib.h> //Needed for malloc
const int JAN=1;
const int FEB=2;
const int MAR=3;
const int APR=4;
const int MAY=5;
const int JUN=6;
const int JUL=7;
const int AUG=8;
const int SEP=9;
const int OCT=10;
const int NOV=11;
const int DEC=12;

const int DAYS_PER_MONTH=30;
const int DAYS_PER_YEAR=365;
const int MONTHS_PER_YEAR=12;

typedef struct {
	int year;
	int month;
	int day;
} DATE;

void showDate(DATE* whichDate);
int daysFromTo(DATE* dateBegin, DATE* dateEnd);
DATE* getDateFromUser(char* dateDescription);
void addDaysToDate(int daysToAdd, DATE* dateToModify);

void testDates(void);

typedef struct {
	int numerator;
	int denominator;
} FRACTION;

FRACTION frac_add(FRACTION lhs, FRACTION rhs);
FRACTION frac_multiply(FRACTION lhs, FRACTION rhs);
FRACTION frac_reciprocal(FRACTION theFrac);
FRACTION frac_negate(FRACTION theFrac);
FRACTION frac_subtract(FRACTION lhs, FRACTION rhs);
FRACTION frac_divide(FRACTION lhs, FRACTION rhs);
void frac_show(FRACTION theFrac);
FRACTION frac_with(int numer, int denom);

void testFractions(void);

int main(void)
{
	testFractions();
	testDates();
	return 0;
}

void testDates(void)
{
	DATE* birthday=NULL;
	DATE* today=NULL;
	int distance;

	today=getDateFromUser("today's date");
	printf("You entered:"); 
	showDate(today); printf("\n");
	birthday=getDateFromUser("your birthday");
	distance = daysFromTo(birthday, today);
	printf("That's about %d days ago\n", distance);
	addDaysToDate(distance, today);
	printf("Just think: in %d more days, it'll be ", distance);
	showDate(today); printf("!\n");
}

DATE* getDateFromUser(char* dateDescription)
{
	DATE* newDate=NULL;
	newDate = malloc(sizeof(DATE));
	printf("Please enter %s in MM/DD/YYYY format:", dateDescription);
	if(scanf("%d/%d/%d", &(newDate->month), &(newDate->day), &(newDate->year)) != 3)
	{
		printf("That wasn't in the requested format. Your date will be 01/22/1984\n");
		newDate->month=1;
		newDate->year=1984;
		newDate->day=22;
	}
	return newDate; 
{

}
}
void showDate(DATE* whichDate)
{
	char* monthName;
	switch(whichDate->month)
	{
		case JAN: monthName="January"; break;
        case FEB: monthName="February"; break;
        case MAR: monthName="March"; break;
        case APR: monthName="April"; break;
        case MAY: monthName="May"; break;
        case JUN: monthName="June"; break;
        case JUL: monthName="July"; break;
        case AUG: monthName="August"; break;
        case SEP: monthName="September"; break;
        case OCT: monthName="October"; break;
        case NOV: monthName="November"; break;
        case DEC: monthName="December"; break;
        default:  monthName="!?!?"; break;

	}
	printf("%s %2d, %4d", monthName, whichDate->day, whichDate->year);
}

int daysFromTo(DATE* dateBegin, DATE* dateEnd)
{
	int diffYears;
	int diffMonths;
	int diffDays;
	diffYears  =  dateEnd->year - dateBegin->year;
	diffMonths = dateEnd->month - dateBegin->month;
	diffDays   =   dateEnd->day - dateBegin->day;
	return DAYS_PER_YEAR*diffYears + DAYS_PER_MONTH*diffMonths + diffDays;
}

void addDaysToDate(int daysToAdd, DATE* dateToModify)
{
	printf("Adding %d days to ", daysToAdd); 
	showDate(dateToModify);

	dateToModify->day += daysToAdd;
	if(dateToModify->day > DAYS_PER_MONTH) 
	{
		dateToModify->month += dateToModify->day / DAYS_PER_MONTH; //Increase months by excess month(s) in days
		dateToModify->day %= DAYS_PER_MONTH; //Keep remaining days that don't exceed a month
	}

	if(dateToModify->month > MONTHS_PER_YEAR)
	{
		dateToModify->year += dateToModify->month / MONTHS_PER_YEAR; //Increase years by excess year(s) in months
		dateToModify->month %= MONTHS_PER_YEAR; //Keep remaining months that don't exceed a year
	}

	//Note: There'a  problem with this logic. We'll get months numbered 0 to 11 instead of 1 to 12, 
	// and days 0 to 29 instead of 1 to 30!

	printf(" results in ");
	showDate(dateToModify);
	printf(".\n");			
}


FRACTION frac_with(int numer, int denom) //Gets copies of numer and denom
{
	FRACTION newFrac;
	newFrac.numerator = numer;
	newFrac.denominator = denom;
	return newFrac; //Returns a copy of this fraction
}
FRACTION frac_negate(FRACTION theFrac) //Receives a COPY of original fraction
{
	theFrac.numerator = -(theFrac.numerator); //Switch sign of numerator
	return theFrac; //returns a copy of the modified copy - original untouched
}

FRACTION frac_reciprocal(FRACTION theFrac) //Receives a COPY of original fraction
{
	int temp;
	temp = theFrac.numerator;
	theFrac.numerator = theFrac.denominator;
	theFrac.denominator = temp;
	return theFrac; //Return a copy of the modified copy - original should be untouched
}

FRACTION frac_subtract(FRACTION lhs, FRACTION rhs) 
{
	return frac_add(lhs, frac_negate(rhs));
}
FRACTION frac_divide(FRACTION lhs, FRACTION rhs)
{
	return frac_multiply(lhs, frac_reciprocal(rhs));
}
FRACTION frac_multiply(FRACTION lhs, FRACTION rhs)
{
	FRACTION product;
	product.numerator = lhs.numerator * rhs.numerator;
	product.denominator = lhs.denominator * rhs.denominator;
	if(product.denominator == 0) printf("LOOK OUT! Division by zero!\n");
	return product;
}
FRACTION frac_add(FRACTION lhs, FRACTION rhs)
{
	FRACTION sum;
	sum.denominator = lhs.denominator * rhs.denominator;
	sum.numerator = lhs.numerator*rhs.denominator + lhs.denominator*rhs.numerator;
	return sum;
}

void frac_show(FRACTION theFrac)
{
	if(theFrac.denominator == 0) printf("NaN"); //Not a Number :(
	else printf("%d/%d", theFrac.numerator, theFrac.denominator);
}

void testFractions(void)
{
	FRACTION twoThirds;
	printf("Creating two thirds...");
	twoThirds = frac_with(2, 3);
	frac_show(twoThirds); printf("\n");

	FRACTION threeHalves;
	printf("Its reciprocal is...");
	threeHalves = frac_reciprocal(twoThirds);
	frac_show(threeHalves); printf("\n");

	FRACTION thirteenSixths;
	printf("Adding 2/3 + 3/2...");
	frac_show(frac_add(twoThirds, threeHalves)); printf("\n");

	printf("The first numer is unmodified: ");
	frac_show(twoThirds); printf("\n");
	

}
