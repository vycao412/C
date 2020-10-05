#include <stdio.h>

void ascSelectionSort( int* a, int n) {
	int minIndex;
	int i,j;
	for (i=0; i<n-1; i++) {
		minIndex = i;
		for (j=i+1; j<n; j++) if (a[minIndex]> a[j]) minIndex=j;
		if (minIndex>i) {
			int t = a[minIndex];
			a[minIndex] = a[i];
			a[i] = t;
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
	ascSelectionSort(a,n);
	print(a,n);
	return 0;
}


