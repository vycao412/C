#include <stdio.h>
#define MAXN 100

void input(int* a, int *pn) {
	*pn=0;
	printf("Enter maximum %d elements, 0 for termination\n", MAXN);
	int x;	//inputted value
	do {
		scanf("%d", &x);
		if(x!=0) a[(*pn)++]=x;
	} while (x!=0 && *pn<MAXN);
}

void max(int a[], int n) {
	int i;
	int max=a[0];
	for(i=0; i<n; i++) {
		if(max<a[i]) max=a[i];
	}
	printf("\nMax: %d", max);
}

void even(int* a, int n) {
	for (int i=0; i<n; i++) {
		if(a[i]%2==0) printf("\nEven: %d\t", a[i]);
	}
}

void odd(int* a, int n) {
	for (int i=0; i<n; i++) {
		if(a[i]%2!=0) printf("\nOdd: %d\t", a[i]);
	}
}

void output(int* a, int n) {
	for (int i=0; i<n; i++) {
		printf("\na[%d]= %d", i, a[i]);
	}
}

int main() {
	int a[MAXN];
	int n;
	input(a, &n);
	output(a,n);
	max(a,n);
	even(a,n);
	odd(a,n);
	return 0;
}


