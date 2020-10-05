#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



//Workshop 5
//5.1
int intRandom1(int minDice, int maxDice) {
	return 1 + rand() % (6+1-1);	//min + rand() % (max+1-min)
}

int program1Workshop5() {
	int dice1, dice2, countDice, totalDice;
	srand(time(NULL));	//random khong lap lai
	do {
		printf("Total sought:");
		scanf("%d", &totalDice);
	} while (totalDice<2 || totalDice>12);
	countDice=1;
	do {
		dice1=intRandom1(2,12);	//random tong tu 2 den 12
		dice2=intRandom1(2,12);
		printf("Result of throw %d: %d + %d\n", countDice, dice1, dice2);
		countDice++;
	} while((dice1+dice2)!=totalDice);
	return dice1,dice2;
}


//5.2
int intRandom2(int min, int max) {
	return 1 + rand() % (10+1-1);	//min + rand() % (max+1-min)
}

int program2Workshop5() {
	int pick1, pick2, countPick, totalPick;
	srand(time(NULL));	//random khong lap lai
	do {
		printf("Total sought:");
		scanf("%d", &totalPick);
	} while (totalPick<2 || totalPick>20);
	countPick=1;
	do {
		pick1=intRandom2(2,20);	//random tong tu 2 den 20
		pick2=intRandom2(2,20);
		printf("Result of picks %d and %d: %d + %d\n", countPick++, countPick, pick1, pick2);	//sau khi gan count1 roi moi tang count len 1 de gan vao luc sau
		countPick++;
	} while((pick1+pick2)!=totalPick);
	return pick1, pick2;
}


//5.3
int validDate (int day, int month, int year) {
	int maxday = 31; /*max day of months 1, 3, 5, 7, 8, 10, 12 */
	/* basic checking */
	if ( day<1 || day>31 || month<1 || month>12) return 0;
	/* update maxd of a month */
	if ( month==4 || month==6 || month==9 || month==11) maxday=30;
	else if (month==2) {
		/* leap year? */
		if ( year%400==0 || ( year%4==0 && year%100!=0)) maxday=29;
		else maxday=28;
	}
	if(day<=maxday) return 1;
	return 0;
}

void checkCharacter() {
	char c1, c2, t;
	int i;
	getchar();
	printf("Input c1:",c1);
	scanf("%c", &c1);
	getchar();
	printf("Input c2:",c2);
	scanf("%c", &c2);
	if(c1>c2) {
		t=c1;
		c1=c2;
		c2=t;
	}
	i=c2-c1;
	for(i=c1; i<=c2; i++) {
		printf("%d : %c, %o, %x\n", i, i, i, i);
	}
}

int menuProgram3Workshop5() {
	int choice53;
	printf("\nMenu of Program 3 in Workshop 5:\n");
	printf("1- Processing date data\n");
	printf("2- Character data\n");
	printf("3- Back to Menu of Workshop 5\n");
	printf("4- Quit\n");
	printf("Select one:");
	scanf("%d", &choice53);
	return choice53;
}

int program3Workshop5() {
	int userChoice53;
	int day53, month53, year53;
	do {
		userChoice53=menuProgram3Workshop5();
		switch(userChoice53) {
			case 1:
				printf("Nhap ngay thang nam:");
				scanf("%d%d%d", &day53, &month53, &year53);
				if(validDate(day53,month53,year53)==1) printf("Valid date");
				else printf("Invalid date");
				break;
			case 2:
				checkCharacter();
				break;
			default:
				printf("Good Bye!");
		}
	} while(userChoice53>0 && userChoice53<4);
	return userChoice53;
}


//5.4
void quadraticEquation() {
	int a, b, c;
	float delta, x, x1, x2, x3, x4;
	printf("Nhap a:\n");
	scanf("%d", &a);
	printf("Nhap b:\n");
	scanf("%d", &b);
	printf("Nhap c:\n");
	scanf("%d", &c);
	if (a==0) {
		if (b!=0) {
			if (c!=0) {
				x=(float)-c/b;
				printf("Phuong trinh co 1 nghiem: x=%f",x);
			} else
				printf("Phuong trinh co vo so nghiem");
		} else {
			if (c==0)
				printf("Phuong trinh co vo so nghiem");
			else
				printf("Phuong trinh vo nghiem");
		}
	} else {
		delta=b*b-4*a*c;
		if (delta>0) {
			x1=(-b+sqrt(delta))/4*a;
			x2=(-b-sqrt(delta))/4*a;
			printf("Phuong trinh co 2 nghiem phan biet:\n");
			printf("x1=%f\n", x1);
			printf("x2=%f", x2);
		}
		if (delta==0) {
			x3=x4=-b/(2*a);
			printf("Phuong trinh co nghiem kep: x3=x4=%f", x3,x4);
		}
		if (delta<0)
			printf("Phuong trinh vo nghiem");
	}
}

int bankDeposit() {
	double deposit, yearlyRate, numberOfYears, P;
	printf("Input your deposit:");
	scanf("%lf", &deposit);
	printf("Input yearly rate:");
	scanf("%lf", &yearlyRate);
	printf("Input number of years:");
	scanf("%lf", &numberOfYears);
	if (deposit>0 && (yearlyRate>0 && yearlyRate<1) && numberOfYears>0 )
		P=(deposit)*pow((1+yearlyRate),numberOfYears);
	printf("Your amount after this duration: %lf", P);
	return P;
}

int menuProgram4Workshop5() {
	int choice;
	printf("\nMenu of Program 4 in Workshop 5:\n");
	printf("1- Quadratic equation\n");
	printf("2- Bank deposit problem\n");
	printf("3- Back to Menu of Workshop 5\n");
	printf("4- Quit\n");
	printf("Select one:");
	scanf("%d", &choice);
	return choice;
}

int program4Workshop5() {
	int userChoice54;
	int a,b,c;
	do {
		userChoice54=menuProgram4Workshop5();
		switch(userChoice54) {
			case 1:
				quadraticEquation();
				break;
			case 2:
				bankDeposit();
				break;
			default:
				printf("Good Bye!");
		}
	} while(userChoice54>0 && userChoice54<4);
	return program4Workshop5;
}


int menuWorkshop5() {
	int choice5;
	printf("\nMenu of Workshop 5:\n");
	printf("1- Program 1\n");
	printf("2- Program 2\n");
	printf("3- Program 3\n");
	printf("4- Program 4\n");
	printf("5- Back to Main Menu\n");
	printf("Select one:");
	scanf("%d", &choice5);
	return choice5;
}


int main() {
	int userChoice5;
	do {
		userChoice5=menuWorkshop5();
		switch(userChoice5) {
			case 1:
				program1Workshop5();
				break;
			case 2:
				program2Workshop5();
				break;
			case 3:
				program3Workshop5();
				break;
			case 4:
				program4Workshop5();
				break;
			default:
				printf("Good Bye!");
		}
	} while(userChoice5>0 && userChoice5<6);
	return 0;
}





