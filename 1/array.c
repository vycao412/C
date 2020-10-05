#include <stdio.h>

void input(){
	int i, n;
	int a[n];
	for(i=0;i<=n;i++)
	printf("a[%d], addr:%u, %u\n",&a[i]);
	getchar();
}
void output(){
	int i, n;
	int a[n];
	for(i=0;i<=n;i++)
	printf("a[%d], addr:%u, %u\n", i, *(a+i), a[i]);
	getchar();
}

int main() {
	int MAXN=100;
	int a[MAXN];
	int n;
	int maxVal;
	do {
		printf("How many elements which will be used 1..%d:", MAXN);
		scanf("%d", &n);
	} while(n<1 || n>MAXN);
	printf("Enter %d values of the arrays:\n",n);
	input(a,n);
	output(a,n);
	return 0;
}


