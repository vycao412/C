#include <stdio.h>

int main()
{
	int a,b;
	float x;
	printf("Nhap a va b: \n");
	scanf("%d%d", &a, &b);
	if (a!=0)
	{
		x=(float)-b/a;
		printf("Phuong trinh co nghiem: x\=%f",x);
	}
	else
	{
		if (b!=0)
		printf("Phuong trinh vo nghiem");
		else
		printf("Phuong trinh vo so nghiem");
	}
		
return 0;
}
