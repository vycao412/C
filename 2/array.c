#include <stdio.h>

void input(int* a, int n){
	int i;
	for(i=0; i<n; i++){
		printf("a[%d]= ",i);
		scanf("%d", &a[i]);
	}
}

void max(int a[], int n){
	int max=a[0]; int i;
	for(i=0; i<n; i++){
		if(max<a[i]) max=a[i];
	}
	printf("\nMax=%d", max);
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
	do{
		printf("Input length array:");
		scanf("%d", &n);
	} while(n<0 || n>=100);
	printf("Input %d value of array",n);
	input(a,n);
//	output(a,n);
	max(a,n);
	even(a,n);
	odd(a,n);
 return 0;
}


