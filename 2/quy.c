/* Thang thuoc quy may trong nam */

#include <stdio.h>

int main() {
	int thang;
	printf("Nhap thang:");
	scanf("%d",&thang);
	if (thang<=3) printf("Quy 1");
	else if (thang<=6) printf("Quy 2");
	else if (thang<=9) printf("Quy 3");
	else if(thang<=12) printf("Quy 4");
	else printf("Nhap sai thang");
	return 0;
}
