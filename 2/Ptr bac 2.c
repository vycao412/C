#include <stdio.h>

int main()
{
	int a,b,c;
	float delta,x,x1,x2;
	printf("Nhap a:\n");
	scanf("%d", &a);
	printf("Nhap b:\n");
	scanf("%d", &b);
	printf("Nhap c:\n");
	scanf("%d", &c);
	if (a==0)
	{
		if (b!=0)	
		{
			if (c!=0)
			{
			x=(float)-c/b;	
			printf("Phuong trinh co 1 nghiem: x\=%f", x);
			}
			else
			printf("Phuong trinh co vo so nghiem");
		}
		else
		{
			if (c==0)
			printf("Phuong trinh co vo so nghiem");
			else
			printf("Phuong trinh vo nghiem");
		}
	
	}
	else
	{
		delta=b*b-4*a*c;
		if (delta>0)
		{
			x1=(-b+sqrt(delta))/4*a;
			x2=(-b-sqrt(delta))/4*a;
			printf("Phuong trinh co 2 nghiem phan biet:\n");
			printf("x1:\=%f\n", x1);
			printf("x2:\=%f", x2);
		}
		if (delta==0)
		{
		x1=x2=-b/(2*a);
		printf("Phuong trinh co nghiem kep: x1\=x2\=%f", x1,x2);
		}
		if (delta<0)
		printf("Phuong trinh vo nghiem");
	}
				
return 0;		
}
	
