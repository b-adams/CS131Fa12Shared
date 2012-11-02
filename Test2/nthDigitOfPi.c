/* For use with problem 3 page 3 */
int nthDigitOfPi(int n)
{
	switch(n)
	{
		case 0: return 3;
		case 1: return 1;
		case 2: return 4;
		case 3: return 1;
		case 4: return 5;
		case 5: return 9;
		case 6: return 2;
		case 7: return 6;
		case 8: return 5;
		case 9: return 3;
		case 10: return 5;
		case 11: return 8;
		case 12: return 9;
		case 13: return 7;
		default: printf("That is just too many digits!"); return -1;
	}
}