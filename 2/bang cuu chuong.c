#include <stdio.h>
int main()
{
	int n,i;
	printf("Nhap N:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	printf("%d x%2d=%2d\n",n,i,n*i);
return 0;
}
