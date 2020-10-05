#include <stdio.h>
//Program 1
int prime( int n1 ) {
	int m = sqrt(n1); /* m: square root of n */
	int i;  /* variable having value from 2 to m  */
	if (n1<2) return 0; /* Condition 1 is not satisfied */
	for ( i=2; i<=m; i++) /* checking the second condition */
		if (n1%i==0) return 0 ; /* n is divided by i ' n is not a prime */
	return 1; /* n is a prime */
}


//Program 2
int validDate ( int day, int month, int year) {
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


//Program 3
int getRelPos ( double x, double y, double r) {
	double d2=x*x + y*y;  /* d2= x2+ y2  */
	double r2= r*r;            /* r2*/
	if (d2<r2) return 1 ; /* d2<r2 'the point is in the circle */
	else if (d2==r2) return 0 ; /* d2=r2 'the point is on the circle */
	return -1 ; /* d2 > r2 'the point is out of the circle */
}


//Program 4
double factorial ( int n4) {
	double p=1;
	int i;
	for (i=2; i<=n4; i++) p *= i;
	return p;
}


//Program 5
double fibo ( int n5) {
	int t1=1, t2=1, f=1, i ;
	for ( i= 3; i<=n5; i++) {
		f= t1 + t2;
		t1= t2;
		t2=f;
	}
	return f;
}


//Program 6
int isFibonacci (int n6) {
	int t1=1, t2=1, f=1;
	if (n6==1) return 1; /* n belongs to the Fibonacci sequence*/
	while (f<n6) {         /* Find out the Fibo number f to n */
		f= t1 + t2;
		t1=t2;
		t2=f;
	}
	return n6==f;  /* if n==f ' n is Fibo element ' return 1 */
}


//Program 7
int sumDigits (int n7) {
	int sum=0; /* initialize sum of digits */
	do {
		int remainder = n7%10 ; /* Get a digit at unit position */
		n7 = n7/10;
		sum += remainder;
	} while (n7>0);
	return sum;
}


//Program 8
double makeDouble(int  ipart, int fraction) {
	double d_f= fraction;
	while (d_f >=1) d_f = d_f/10; /* create the fraction <1 */
	if (ipart<0) return ipart - d_f; /* case  -51 - 0.139 */
	return ipart + d_f ;  /* case 32 + 0.25 */
}


//Program 9
int  gcd( int a, int b) {
	while ( a != b )
		if (a>b) a-=b;
		else b -= a;
	return a;
}
int lcm ( int a, int b) {
	return (a*b)/(gcd(a,b));
}


//Program 10

void printMinMaxDigits(int n10) {
	int digit;
	int min,max;
	digit = n10%10;
	n10= n10/10;
	min = max = digit;
	while (n10>0) {
		digit = n10%10;
		n10 = n10/10;
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


//Function of menu
int menu() {
	int choice;
	printf("\n\nSelect program:\n");
	printf("1.  Program 1 :Primes between 2 and n\n");
	printf("2.  Program 2 :Valid date or Invalid date\n");
	printf("3.  Program 3 :The relative position of point with the circle\n");
	printf("4.  Program 4 :Factorial\n");
	printf("5.  Program 5 :The value at the n(th) position in Fibonacci sequence\n");
	printf("6.  Program 6 :It is an element of the Fibaonaaci or not\n");
	printf("7.  Program 7 :The sum of decimal digits\n");
	printf("8.  Program 8 :The real number of integral part and fraction\n");
	printf("9.  Program 9 :Greatest common divisor and Least common multiple\n");
	printf("10. Program 10:The minimum and the maximum digits of a nonnegative integer\n");
	printf("Others: Quit\n");
	printf("Please choice:");
	scanf("%d",&choice);
	return choice;
}
int main() {
	int userChoice;
	int n1, n4, n5, n6, n7, n10;	//program 1,4,5,6,7
	int day,month,year; //program 2
	double x, y, r;	//program 3
	int ipart, fraction;	//program 8
	int a,b,d,m;	//program 9

	do {
		userChoice=menu();
		switch(userChoice) {
			case 1:
				printf("Nhap so n:");
				scanf("%d",&n1);
				for(int i=2; i<=n1; i++) {
					if (prime(i)==1) printf("%d\t",i);
				}
				break;
			case 2:
				printf("Nhap ngay thang nam:");
				scanf("%d%d%d", &day, &month, &year);
				if(validDate(day,month,year)==1) printf("Valid date");
				else printf("Invalid date");
				break;
			case 3:
				printf("Nhap toa do:");
				scanf("%d%d", &x, &y);
				do {
					printf("Nhap r:");
					scanf("%d",&r);
				} while (r<0);
				int result=getRelPos(x,y,r);
				if(result==1) printf("The point is in the circle");
				else if(result==0) printf("The point is on the circle");
				else printf("The point is out of the circle");
				break;
			case 4:
				do {
					printf("Nhap n4:");
					scanf("%d",&n4);
				} while (n4<0);
				printf("%lf",factorial(n4));
				break;
			case 5:
				do {
					printf("Nhap n5:");
					scanf("%d",&n5);
				} while(n5<1);
				printf("%lf",fibo(n5));
				break;
			case 6:
				do {
					printf("Nhap n6:");
					scanf("%d",&n6);
				} while(n6<1);
				if(isFibonacci(n6)==1) printf("It is a Fibonacci element");
				else printf("It is not a Fibonacci element");
				break;
			case 7:
				do {
					printf("Nhap n7:");
					scanf("%d",&n7);
					if(n7>=0) {
						int S=sumDigits(n7);
						printf("Sum:%d",S);
					}
				} while(n7<=0);
				break;
			case 8:
				printf("Input ipart:");
				scanf("%lf",&ipart);
				do {
					printf("Input fraction:");
					scanf("%lf",&fraction);
				} while(fraction<0);
				double value=makeDouble(ipart,fraction);
				printf("Value=%lf",value);
				break;
			case 9:
				do {
					printf("Input a:");
					scanf("%d",&a);
					printf("Input b:");
					scanf("%d",&b);
				} while(a<=0 || b<=0);
				d = gcd(a,b);
				m = lcm(a,b);
				printf("d=%d\n",d);
				printf("m=%d",m);
				break;
			case 10:
				do {
					printf("Input non-negative interger:");
					scanf("%d", &n10);
				} while (n10<0);
				printMinMaxDigits(n10);
				break;
			default:
				printf("Good Bye!");
		}
	}

	while(userChoice>=1 && userChoice<=10);
	return 0;
}


