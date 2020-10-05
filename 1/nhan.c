#include <stdio.h>

int main() {
	/*
	int start, end, i, j;
	printf("Enter the low end of the range:",start);
	scanf("%d", &start);
	printf("Enter the high end of the range:",end);
	scanf("%4d", &end);
	for(i=start; i<=end; i++) {
		printf("     %d",i);
	}
	for(j=start; j<=end; j++) {
		printf("\n%d",j);
		for(i=start; i<=end; i++)
			printf("  %4d", i*j);
	}
	return 0;
	*/

	double n1, n2, n;
	printf("Input lower limit:");
	scanf("%lf", &n1);
	printf("Input upper limit:");
	scanf("%lf", &n2);
	printf("Input any number:");
	scanf("%lf", &n); 
	if(n>=n1 && n<=n2) printf("Accept: %lf",n);
	else printf("Reject: %lf",n);
	return 0;
}


