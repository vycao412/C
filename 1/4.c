#include <stdio.h>
int main ()
{
	int a,b;
	float c,d;
	double e,f;
	printf("Input Integer 1:");
		scanf("%d",&a);
		printf("Integer 1: %d	address: %u \n", a, &a);
	printf("Input Integer 2:");
		scanf("%d",&b);
		printf("Integer 2: %d	address: %u \n", b &b);
	printf("Input Float Number 1:");
		scanf("%f",&c);
		printf("Float Number 1: %f	address: %u  \n", c, &c);
	printf("Input Float Number 2:");
		scanf("%f",&d);
		printf("Float Number 2: %f	address: %u  \n", d, &d);
	printf("Input Double Number 1:");
		scanf("%lf",&e);
		printf("Double Number 1: %lf	address: %u  \n", e, &e);
	printf("Input Double Number 2:");
		scanf("%lf",&f);
		printf("Double Number 2: %lf	address: %u  \n", f, &f);
return 0;
}
