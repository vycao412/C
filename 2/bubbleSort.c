#include <stdio.h>

void ascBubbleSort(int* a, int n) {
	int i,j;
	for(i=0; i<n-1; i++) {
		for(j=n-1; j>i; j--) if(a[j]<a[j-1]) {
				int t = a[j];
				a[j] = a[j-1];
				a[j-1] = t;
			}
	}
}

void input(int* a, int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("a[%d]= ",i);
		scanf("%d", &a[i]);
	}
}

void print( int*a, int n) {
	for (int i=0; i<n; i++) {
		printf("\na[%d]= %d", i, a[i]);
	}
}

int main() {
	int a[100];
	int n;
	do {
		printf("Input length array:");
		scanf("%d", &n);
	} while(n<0 || n>=100);
	printf("Input %d value of array",n);
	input(a,n);
	ascBubbleSort(a,n);
	print(a,n);
	return 0;
}


