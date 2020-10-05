#include <stdio.h>

int prime(int n1) {
	int i1;
	for(i1=2; i1*i1<n1; i1++)
		if (n1%i1==0) return 0;
	return 1;
}

void printMinMaxDigits(int n2) {
	int digit;
	int min,max;
	digit = n2%10;
	n2= n2/10;
	min = max = digit;
	while (n2>0) {
		digit = n2%10;
		n2 = n2/10;
		if (min > digit) {
			min = digit;
		}
		if (max < digit) {
			max = digit;
		}
	}
	printf("Minium digit = %d\n", min);
	printf("Maxium digit = %d\n", max);
}


int menuProgram1() {
	int choice1;
	printf("\nMenu of Program 1:");
	printf("\n1- Process primes\n");
	printf("2- Print min, max digit in an integer\n");
	printf("3- Quit\n");
	printf("Select an operation: ");
	scanf("%d", &choice1);
	return choice1;
}


int program1() {
	int userChoice1;
	int n1, n2;
	do {
		userChoice1=menuProgram1();
		switch (userChoice1) {
			case 1:
				do {
					printf("Input n:");
					scanf("%d", &n1);
				} while(n1<0);
				if(prime(n1)==1) printf("It is a prime\n");
				else printf("It is not a prime\n");
				break;
			case 2:
				do {
					printf("Input n:");
					scanf("%d", &n2);
				} while (n2<0);
				printMinMaxDigits(n2);
				break;
			case 3:
				menuWorkshop4();
				break;
			default:
				printf("Good Bye!");
		}
	} while(userChoice1>=1 && userChoice1<=3);
	return userChoice1;
}


double fibonacciSequence ( int n3) {
	int t1=1, t2=1, f=1, i2 ;
	for ( i2= 3; i2<=n3; i2++) {
		f= t1 + t2;
		t1= t2;
		t2=f;
	}
	return f;
}


int checkADate ( int day, int month, int year) {
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


int menuProgram2() {
	int choice2;
	printf("\nMenu of Program 2:");
	printf("\n1- Fibonacci sequence\n");
	printf("2- Check a date\n");
	printf("3- Quit\n");
	printf("Select an operation: ");
	scanf("%d", &choice2);
	return choice2;
}


int program2() {
	int userChoice2;
	int n3;
	int day, month, year;
	do {
		userChoice2=menuProgram2();
		switch (userChoice2) {
			case 1:
				do {
					printf("Nhap n:");
					scanf("%d",&n3);
				} while (n3<0);
				printf("%lf",fibonacciSequence(n3));
				break;
			case 2:
				printf("Nhap ngay thang nam:");
				scanf("%d%d%d", &day, &month, &year);
				if(checkADate(day,month,year)==1) printf("Valid date");
				else printf("Invalid date");
				break;
			case 3:
				menuWorkshop4();
				break;
			default:
				printf("Good Bye!");
		}
	} while(userChoice2>=1 && userChoice2<=3);
	return userChoice2;
}


int menuWorkshop4() {
	int choice3;
	printf("\nMenu of Workshop 4:\n");
	printf("Program 1:\n");
	printf("Program 2:\n");
	printf("Others: Quit\n");
	printf("Please select: ");
	scanf("%d", &choice3);
	return choice3;
}


int main() {
	int userChoice;
	do {
		userChoice=menuWorkshop4();
		switch(userChoice) {
			case 1:
				program1();
				break;
			case 2:
				program2();
				break;
			default:
				printf("Good Bye!");
		}
	} while(userChoice>0 && userChoice<3);
	return 0;
}



