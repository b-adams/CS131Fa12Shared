#include <stdio.h>

int main(void)
{
	float accounts[8];
	for(int i=0; i<8; i++)
	{
		accounts[i]=i*1.1;
	}
	for(int offset=0; 1==1; offset++)
	{
		printf("Offset %3d Content %f\n",offset, accounts[offset]);
		if(offset>200) break;
	}
	return 0;
}
