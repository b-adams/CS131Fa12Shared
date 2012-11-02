bool test(int year, int day, bool correctAnswer);

int main(void)
{
	test(2006,  1, false);
	test(2006, 89, false);
	test(2006, 90,  true);
	test(2006,297,  true);
	test(2006,298, false);
	test(2006,365, false);

	test(2008,  1, false);
	test(2008, 65, false);
	test(2008, 66,  true);
	test(2008,300,  true);
	test(2008,301, false);
	test(2008,365, false);
}

bool test(int year, int day, bool correctAnswer)
{
	bool correct = (messWithClocks(year,day)==correctAnswer);
	printf("Y%d D%3d: %s\n", year, day, correct?"OK":"Error");
	return correct;
}