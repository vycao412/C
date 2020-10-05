#include <stdio.h>

int main() {

	int d, m, y;
	printf("Nhap ngay thang nam:");
	scanf("%d%d%d",&d,&m,&y);
	int maxd=31;
	if(d<1 || d>31 || m<1 || m>12)
		printf("invalid date");
	if(d>=1 && d<=31 && m>=1 && m<=12)
	{
	if(m==4 || m==6 || m==9 || m==11) {
		maxd=30;
	} else if(m==2) {
		if(y%400==0 || y%4==0 && y%100!=0) {
			maxd=29;
		} else {
			maxd=28;
		}
	}
	if(d<=maxd) printf("valid date");
	else printf("invalid date");}
	return 0;

}


