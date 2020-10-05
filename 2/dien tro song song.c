#include <stdio.h>

double equivalent(double R1, double R2, double R3)
{
	double Z=1/(1/R1+1/R2+1/R3);
	return Z;
}

int main()
{
	double R1,R2,R3,Z;
	printf("\nInput 3 resistances:");
	scanf("%lf%lf%lf", &R1,&R2,&R3);
	printf("Their equivalent: %lf\n", equivalent(R1,R2,R3));
	return 0;
}
