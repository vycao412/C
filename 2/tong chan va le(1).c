/* Viet chuong trinh tinh tong cac so chan tu 1->20 */

#include <stdio.h>

int main()
{
	int i,n, sumodd=0, sumeven=0;
	printf("Nhap n:");
	scanf("%d",&n);
	for(i=1 /*dieu kien bat dau*/;i<=n /*dieu kien ket thuc*/;i++ /*dieu kien de i di tiep*/)
	{
		if(i%2==0)
		{
			sumeven=sumeven+i;
		}
		else sumodd=sumodd+i;
	}
	printf("Tong so le la:%d",sumodd);
	printf("Tong so chan la:%d",sumeven);
return 0;
}
