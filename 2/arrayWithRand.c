#include <stdio.h>

void input(int* a, int n){
	int i;
	srand(time(NULL));
	for(i=0; i<n; i++){
		int r = rand();
		printf("rand %d is %d\n", i, r);
	}
}

void max(int rand(i), int n){
	int max=rand(0); int i; int r;
	for(i=0; i<n; i++){
		if(max<rand(i)) max=rand(i);
	}
	printf("\nMax= %d", max);
}

void even(int* a, int n){
	for (int i=0; i<n; i++){
		if(a[i]%2==0) printf("\nEven: %d\t", a[i]);
	}
}

void odd(int* a, int n){
	for (int i=0; i<n; i++){
		if(a[i]%2!=0) printf("\nOdd: %d\t", a[i]);
	}
}

void output(int* a, int n){
	for (int i=0; i<n; i++){
		printf("\na[%d]= %d", i, a[i]);
	}
}

int main()
{
	int a[100];
	int n;
	int rand();
	do{
		printf("Input length array:");
		scanf("%d", &n);
	} while(n<0 || n>=100);
//	printf("Input %d value of array",n);
	input(a,n);
//	output(a,n);
	max(a,n);
	even(a,n);
	odd(a,n);
 return 0;
}


