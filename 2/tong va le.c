/* Viet chuong trinh tinh tong cac so chan va so le */

#include <stdio.h>

int main() {
	int x=0,n,i, sumodd=0, sumeven=0;
	i=1;
	printf("Nhap n:");
	scanf("%d",&n);
	for (; i<=n;) {
		sumodd=sumodd+i;
		i+=2;
	}
	printf("Tong la:%d",sumodd);

	for (; x<=n;) {
		sumeven=sumeven+x;
		x+=2;
	}
	printf("Tong la:%d",sumeven);
	return 0;
}
