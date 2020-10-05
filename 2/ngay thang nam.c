/* Kiem tra tinh hop le cua ngay, thang, nam */

#include <stdio.h>

void main()
{
	int day, month, year;
	printf("Nhap ngay:\n");
	scanf("%d",&day);
	printf("Nhap thang:\n");
	scanf("%d",&month);
	printf("Nhap nam:\n");
	scanf("%d",&year);
	switch(day,month)
	{
		case 1:  month==1  && 1<=day && day<=31; printf("Hop le"); break;
		case 2:  month==2;  
				if(year%400==0&&day<=29) printf("Hop le");
				else if(year%400!=0&&day==29) printf("Khong hop le");
				else 
				if (day>=30) printf("Khong hop le");
				else printf("Hop le");
			break;
		case 3:  month==3  && 1<=day && day<=31; printf("Hop le"); break;
		case 4:  month==4  && 1<=day && day<=30; printf("Hop le"); break;
		case 5:  month==5  && 1<=day && day<=31; printf("Hop le"); break;
		case 6:  month==6  && 1<=day && day<=30; printf("Hop le"); break;
		case 7:  month==7  && 1<=day && day<=31; printf("Hop le"); break;
		case 8:  month==8  && 1<=day && day<=31; printf("Hop le"); break;
		case 9:  month==9  && 1<=day && day<=30; printf("Hop le"); break;
		case 10: month==10 && 1<=day && day<=31; printf("Hop le"); break;
		case 11: month==11 && 1<=day && day<=30; printf("Hop le"); break;
		case 12: month==12 && 1<=day && day<=31; printf("Hop le"); break;
		default: printf("Khong hop le");
	}
}
