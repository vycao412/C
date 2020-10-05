/* Viet chuong trinh tinh tong cac so chan tu 1->20 */

#include <stdio.h>

int main()
{
	int i, S=0;
	for(i=1 /*dieu kien bat dau*/;i<=20 /*dieu kien ket thuc*/;i++ /*dieu kien de i di tiep*/)
	{
		if(i%2==0)
		{
			S=S+i;
		}
	}
	printf("Tong la:%d",S);
return 0;
}
