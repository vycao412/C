/* Thang co bao nhieu ngay */

#include <stdio.h>

int main() {
	int thang, ngay;
	printf("Nhap thang:");
	scanf("%d",&thang);
	switch(thang) {
		case 1:
			thang==1;
			printf("Thang 1  co 31 ngay");
			break;
		case 2:
			thang==2;
			int nam;
			printf("Nhap nam:");
			scanf("%d",&nam);
			if ((nam%400==0) || (nam%4==0&&nam%100!=0)) printf("Thang 2  co 29 ngay");
			else printf("Thang 2 co 28 ngay");
			break;
		case 3:
			thang==3;
			printf("Thang 3  co 31 ngay");
			break;
		case 4:
			thang==4;
			printf("Thang 4  co 30 ngay");
			break;
		case 5:
			thang==5;
			printf("Thang 5  co 31 ngay");
			break;
		case 6:
			thang==6;
			printf("Thang 6  co 30 ngay");
			break;
		case 7:
			thang==7;
			printf("Thang 7  co 31 ngay");
			break;
		case 8:
			thang==8;
			printf("Thang 8  co 31 ngay");
			break;
		case 9:
			thang==9;
			printf("Thang 9  co 30 ngay");
			break;
		case 10:
			thang==10;
			printf("Thang 10 co 31 ngay");
			break;
		case 11:
			thang==11;
			printf("Thang 11 co 30 ngay");
			break;
		case 12:
			thang==12;
			printf("Thang 12 co 31 ngay");
			break;
		default:
			printf("Nhap sai thang");
	}
	return 0;
}


