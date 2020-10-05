#include <stdio.h>
int main() {
	int N,i,j,k;
	printf("Nhap N:");
	scanf("%d",&N);
	for(i=1; i<=N; i++) {
		for(j=1; j<=i; j++)
			printf("* ");
		for(k=1; k<=N-i; k++)
			printf(" ");
		
		printf("\n");
	}
	return 0;
}

