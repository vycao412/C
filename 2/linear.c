#include <stdio.h>

//int random(int min,max)

void input(int* a, int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("a[%d]= ",i);
		scanf("%d", &a[i]);
	}
}

void output(int* a, int n) {
	for (int i=0; i<n; i++) {
		printf("\na[%d]= %d", i, a[i]);
	}
}

int firstLinearSearch(int x, int a[], int n) {
	int i;
	for(i=0; i<n; i++) {
		if(x==a[i]) return i;
	}
	return -1;
}

int lastLinearSearch(int x, int *a, int n) {
	int i;
	for(i=n-1; i>=0; i--) {
		if(x==a[i]) return i;
	}
	return -1;
}

int main() {
	int a[5];
	int n;
	int x;
	do {
		printf("Input length array:");
		scanf("%d", &n);
	} while(n<0 || n>=100);
	printf("Input %d value of array",n);
	input(a,n);
	output(a,n);
	printf("\nInput x: ");
	scanf("%d",&x);
	int pos1= firstLinearSearch(x,a,n);
	if (pos1>=0) {
		int pos2= lastLinearSearch(x,a,n);
		printf("First existence:%d, last existence:%d\n", pos1, pos2);
	} else printf("%d does not exist!\n", x);
	return 0;
}


