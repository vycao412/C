#include <stdio.h>

void input(int* a, int n){
	int i;
	for(i=0; i<n; i++){
		printf("a[%d]= ",i);
		scanf("%d", &a[i]);
	}
}

void output(int* a, int n){
	for (int i=0; i<n; i++){
		printf("\na[%d]= %d", i, a[i]);
	}
}

int binarySearch(int x, int a[], int n){
	int i=0, j=n-1, c;
	while (i<=j){
		c= (i+j)/2;
		if (x==a[c]) return c;
		if (x < a[c]) j = c-1;
		else i = c+1;
	}
	return -1;
}

int main()
{
	int a[100];
	int n;
	int k1, k2;
	do{
		printf("Input length array:");
		scanf("%d", &n);
	} while(n<0 || n>=100);
	printf("Input %d value of array",n);
	input(a,n);
	output(a,n);
	printf("\nInput k1:");
	scanf("%d", &k1);
	printf("\nInput k2:");
	scanf("%d", &k2);
	int pos1= binarySearch(k1, a, n);
	int pos2= binarySearch(k2, a, n);
	if(pos1>=0) printf("\nPosition of value %d is: %d", k1, pos1);
	else printf("\n%d does not exist!", k1);
	if(pos2>=0)printf("\nPosition of value %d is: %d", k2, pos2);
	else printf("\n%d doesn not exist!", k2);
 return 0;
}


