#include <stdio.h>

int main()
{
	int mark; int reward; int noofShirts;
	printf("Your mark:");
	scanf("%d",&mark);
	switch (mark)
	{
		case 10: reward = 1000000; noofShirts=4; break;
		
		case 9: reward = 500000; noofShirts=3; break;
		
		case 8: reward = 200000; noofShirts=2; break;

		case 7: reward = 100000; noofShirts=1; break;
		
		default: reward = 0; noofShirts=0; break;
	}
	printf("Reward:%d, Shirts:%d\n", reward, noofShirts);
return 0;
}
