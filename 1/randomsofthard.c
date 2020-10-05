#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	/*
	int i; int a=5, b=50;
	double x=3.5, y= 20.8;
	printf("10 Hardware random integers:\n");
	for (i=0;i<10; i++) printf("%d ", rand());
	/*Init randomise using system time-miliseconds
	    Each time the program executes, the system time changes.
	    So, random sequence changes
	*/
	/*
	srand(time(NULL));
	printf("\n\n10 Software random integers:\n");
	for (i=0;i<10; i++) printf("%d ", rand());
	printf("\n\n10 random integers between:%d...%d\n", a, b);
	for (i=0;i<10; i++) printf("%d ", a + rand()% (b-a));
	printf("\n\n5 random double between:%lf...%lf\n", x, y);
	for (i=0;i<5; i++) printf("%lf ", x + (double)rand()/RAND_MAX*(y-x));
	getchar();
	*/

	int i;
	int n=1;
	double x=1.5;
	/* Use time_t data type */
	time_t t1 = time(NULL); /*Get current time */   for (i=0; i<1000000000; i++) x= x+1;
	time_t t2 = time(NULL); /*Get current time */
	double dt = difftime(t2,t1);
	printf("\nCost of 1 billion real number adding operations: %lf sec\n", dt);
	t1 = time(NULL); /*Get current time */    for (i=0; i<1000000000; i++) n= n+1;
	t2 = time(NULL); /*Get current time */  dt = difftime(t2,t1);
	printf("\nCost of 1 billion integral number adding operations: %lf sec\n", dt);
	/* Use clock_t data type */
	n=1;
	clock_t ct1= clock(); /*Get current time */  for (i=0; i<1000000000; i++) n= n+1;
	clock_t ct2= clock(); /*Get current time */
	printf("\nCost of 1 billion integral number adding operations: %ld ticks\n", ct2-ct1);
	printf("\nor %lf secs\n", ((double)(ct2-ct1)/CLOCKS_PER_SEC));
	getchar();
}

