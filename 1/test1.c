#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

int mainMenu() {
	int choice;
	printf("\nMAIN MENU:\n");
	printf("1- Workshop 2\n");
	printf("2- Workshop 3\n");
	printf("3- Workshop 4\n");
	printf("4- Workshop 5\n");
	printf("OTHERS: Quit\n");
	printf("PLEASE SELECT: ");
	scanf("%d", &choice);
}

//Workshop 2
//Menu
void menuWorkshop2() {
	int choice2;
	printf("\n\nMenu of Workshop 2:\n");
	printf("1. Four operators\n");
	printf("2. Yearly Personal Income Tax\n");
	printf("3. Sum of Integers\n");
	printf("4. Swap two integers\n");
	printf("5. Number of Vowels, Consonants and Others\n");
	printf("6. ASCII Code Table\n");
	printf("7. ASCII code difference between two characters\n");
	printf("8. Back to Main Menu\n");
	printf("Others: Quit\n");
	printf("Please Select: ");
	scanf("%d", &choice2);
}

//Program 1
int fourOperators() {
	int num1;
	int num2;
	char op;
	double result;
	printf("Nhap 2 so hang va phep tinh:");
	scanf("%d%c%d",&num1, &op, &num2);
	switch (op) {
		case '+' :
			printf("Ket qua la:%lf", result=num1+num2);
			break;
		case '-':
			printf("Ket qua la:%lf", result=num1-num2);
			break;
		case '*':
			printf("Ket qua la:%lf", result=num1*num2);
			break;
		case '/':
			printf("Ket qua la:%lf", result=num1/num2);
			break;
		default:
			printf("Phep tinh khong phu hop");
	}
	return result;
}

//Program 2
void yearlyPersonalIncomeTax() {
	int taxFree, pa, n, pd, ti, income, incomeTax;
	printf("Tong thu nhap: \n");
	scanf("%d",&income);
	printf("Tien nuoi ban than: \n");
	scanf("%d",&pa);
	printf("Tien cap duong: \n");
	scanf("%d",&pd);
	printf("So nguoi phu thuoc: \n");
	scanf("%d",&n);
	taxFree = (pa + n*pd);/* Neu tinh theo nam thi nhan 12 */
	ti = income - taxFree;
	if (ti<=0) printf("Khong phai chiu thue");
	else if(ti<=5000000) printf("So tien thue phai chiu la: %u",incomeTax=ti*0.05);
	else if(ti<10000000) printf("So tien thue phai chiu la: %u",incomeTax=ti*0.1);
	else if(ti<=18000000) printf("So tien thue phai chiu la: %u",incomeTax=ti*0.15);
	else printf("So tien thue phai chiu la: %d", incomeTax=ti*0.2);
}

//Program 3
int sumIntegers() {
	int x, sum=0;
	do {
		printf("Nhap x: ");
		scanf("%d",&x);
		sum+=x;
	} while(x!=0);
	printf("Tong la: %d",sum);
	return sum;
}

//Program 4
void swap() {
	int x, y;
	do {
		printf("Input x: ");
		scanf("%d",&x);
		printf("Input y: ");
		scanf("%d",&y);
		int t=x;
		x=y;
		y=t;
		printf("Output x: %d\n",x);
		printf("Output y: %d\n",y);
	} while(x==y);
	menuWorkshop2();
}

//Program 5
void numberCharacters() {
	char ch=0;
	int nVowels=0, nConsonants=0, nOthers=0;
	printf("Input a string of characters: ", ch);
	scanf("%c",&ch);
	do {
		ch=toupper(ch);	//convert ch to its uppercase
		if(ch>='A' && ch<='Z') {
			switch(ch) {
				case 'A':
					nVowels++;
					break;
				case 'E':
					nVowels++;
					break;
				case 'I':
					nVowels++;
					break;
				case 'O':
					nVowels++;
					break;
				case 'U':
					nVowels++;
					break;
				default:
					nConsonants++;
			}
		} else if(ch!=10) nOthers++;
	} while(ch!='\n');
	printf("Number of Vowels: %d\n", nVowels);
	printf("Number of Consonants: %d\n", nConsonants);
	printf("Number of Others: %d\n", nOthers);
}

//Program 6
void asciiCodeTable() {
	int i;
	for(i=0; i<=255; i++) {
		printf("%d : %c, %o, %x\n\n", i, i, i, i);
		if(i!=0 && i%20==0) getchar();
	}
}

//Program 7
void asciiCode() {
	char c1, c2, t;
	int i;
	getchar();
	printf("Input c1: ",c1);
	scanf("%c", &c1);
	getchar();
	printf("Input c2: ",c2);
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

int workshop2() {
	int userChoice2;
	do {
		menuWorkshop2();
		switch(userChoice2) {
			case 1:
				fourOperators();
				break;
			case 2:
				yearlyPersonalIncomeTax();
				break;
			case 3:
				sumIntegers();
				break;
			case 4:
				swap();
				break;
			case 5:
				numberCharacters();
				break;
			case 6:
				asciiCodeTable();
				break;
			case 7:
				asciiCode();
				break;
			case 8:
				mainMenu();
				break;
			default:
				printf("Good Bye!");
		}
	} while(userChoice2>=1 && userChoice2<=8);
	return 0;
}

//Workshop 3
//Program 1
int prime(int n) {
	int m = sqrt(n); /* m: square root of n */
	int i;  /* variable having value from 2 to m  */
	if (n<2) return 0; /* Condition 1 is not satisfied */
	for ( i=2; i<=m; i++) /* checking the second condition */
		if (n%i==0) return 0 ; /* n is divided by i ' n is not a prime */
	return 1; /* n is a prime */
}
int isPrime() {
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	for(int i=2; i<=n; i++) {
		if (prime(i)==1) printf("%d\t",i);
	}
	return n;
}

//Program 2
int validDate(int d, int m, int y) {
	int maxd = 31; 
	if ( d<1 || d>31 || m<1 || m>12) return 0;
	if ( m==4 || m==6 || m==9 || m==11) maxd=30;
	else if (m==2) {
		if ( y%400==0 || ( y%4==0 && y%100!=0)) maxd=29;
		else maxd=28;
	}
	if(d<=maxd) return 1;
	return 0;
}
int checkValidDate() {
	int d, m, y;
	printf("Nhap ngay thang nam: ");
	scanf("%d%d%d", &d, &m, &y);
	if(validDate(d,m,y)==1) printf("Valid date");
	else printf("Invalid date");
	return 0;
}

//Program 3
int getRelPos(double x, double y, double r) {
	double d2=x*x + y*y;  /* d2= x2+ y2  */
	double r2= r*r;            /* r2*/
	if (d2<r2) return 1 ; /* d2<r2 'the point is in the circle */
	else if (d2==r2) return 0 ; /* d2=r2 'the point is on the circle */
	return -1 ; /* d2 > r2 'the point is out of the circle */
}
int resultGetRelPos() {
	int x,y,r,result;
	printf("Nhap toa do x,y: ");
	scanf("%d%d", &x, &y);
	do {
		printf("Nhap r: ");
		scanf("%d",&r);
	} while (r<0);
	result=getRelPos(x,y,r);
	if(result==1) printf("The point is in the circle");
	else if(result==0) printf("The point is on the circle");
	else printf("The point is out of the circle");
	return result;
}

//Program 4
double factorial(int n) {
	double p=1;
	int i;
	for (i=2; i<=n; i++) p *= i;
	return p;
}
int resultFactorial() {
	int n;
	do {
		printf("Nhap n: ");
		scanf("%d",&n);
	} while (n<0);
	printf("%lf",factorial(n));
	return n;
}

//Program 5
double fibo(int n) {
	int t1=1, t2=1, f=1, i ;
	for ( i= 3; i<=n; i++) {
		f= t1 + t2;
		t1= t2;
		t2=f;
	}
	return f;
}
int resultFibo() {
	int n;
	do {
		printf("Nhap n: ");
		scanf("%d",&n);
	} while(n<1);
	printf("%lf",fibo(n));
	return n;
}

//Program 6
int isFibonacci (int n) {
	int t1=1, t2=1, f=1;
	if (n==1) return 1; /* n belongs to the Fibonacci sequence*/
	while (f<n) {         /* Find out the Fibo number f to n */
		f= t1 + t2;
		t1=t2;
		t2=f;
	}
	return n==f;  /* if n==f ' n is Fibo element ' return 1 */
}
int resultIsFibonacci() {
	int n;
	do {
		printf("Nhap n: ");
		scanf("%d",&n);
	} while(n<1);
	if(isFibonacci(n)==1) printf("It is a Fibonacci element");
	else printf("It is not a Fibonacci element");
	return 1;
}

//Program 7
int sumDigits (int n) {
	int sum=0; /* initialize sum of digits */
	do {
		int remainder = n%10 ; /* Get a digit at unit position */
		n = n/10;
		sum += remainder;
	} while (n>0);
	return sum;
}
int resultSumDigits() {
	int n,S;
	do {
		printf("Nhap n: ");
		scanf("%d",&n);
		if(n>=0) {
			S=sumDigits(n);
			printf("Sum: %d",S);
		}
	} while(n<=0);
	return S;
}

//Program 8
double makeDouble(int  ipart, int fraction) {
	double d_f= fraction;
	while (d_f >=1) d_f = d_f/10; /* create the fraction <1 */
	if (ipart<0) return ipart - d_f; /* case  -51 - 0.139 */
	return ipart + d_f ;  /* case 32 + 0.25 */
}
int resultMakeDouble() {
	double ipart, fraction, value;
	printf("Input ipart: ");
	scanf("%lf",&ipart);
	do {
		printf("Input fraction: ");
		scanf("%lf",&fraction);
	} while(fraction<0);
	value=makeDouble(ipart,fraction);
	printf("Value=%lf",value);
	return value;
}

//Program 9
int  gcd(int a, int b) {
	while ( a != b )
		if (a>b) a-=b;
		else b -= a;
	return a;
}
int lcm (int a, int b) {
	return (a*b)/(gcd(a,b));
}
int gcdANDlcm() {
	int a,b,d,m;
	do {
		printf("Input a: ");
		scanf("%d",&a);
		printf("Input b: ");
		scanf("%d",&b);
	} while(a<=0 || b<=0);
	d = gcd(a,b);
	m = lcm(a,b);
	printf("d=%d\n",d);
	printf("m=%d",m);
	return 0;
}

//Program 10
void printMinMaxDigits(int n) {
	int digit;
	int min,max;
	digit = n%10;
	n= n/10;
	min = max = digit;
	while (n>0) {
		digit = n%10;
		n = n/10;
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
void resultPrintMinMaxDigits() {
	int n;
	do {
		printf("Input nonnegative interger: ");
		scanf("%d", &n);
	} while (n<0);
	printMinMaxDigits(n);
}

//Function of menu
int menuWorkshop3() {
	int choice3;
	printf("\nMenu of Workshop3:\n");
	printf("1 - Program 1 :Primes between 2 and n\n");
	printf("2 - Program 2 :Valid date or Invalid date\n");
	printf("3 - Program 3 :The relative position of point with the circle\n");
	printf("4 - Program 4 :Factorial\n");
	printf("5 - Program 5 :The value at the n(th) position in Fibonacci sequence\n");
	printf("6 - Program 6 :It is an element of the Fibaonaaci or not\n");
	printf("7 - Program 7 :The sum of decimal digits\n");
	printf("8 - Program 8 :The real number of integral part and fraction\n");
	printf("9 - Program 9 :Greatest common divisor and Least common multiple\n");
	printf("10- Program 10:The minimum and the maximum digits of a nonnegative integer\n");
	printf("11- Back to Main Menu\n");
	printf("Others: Quit\n");
	printf("Please Select: ");
	scanf("%d",&choice3);
	return choice3;
}
int workshop3() {
	int userChoice3;
	do {
		userChoice3=menuWorkshop3();
		switch(userChoice3) {
			case 1:
				isPrime();
				break;
			case 2:
				checkValidDate();
				break;
			case 3:
				resultGetRelPos();
				break;
			case 4:
				resultFactorial();
				break;
			case 5:
				resultFibo();
				break;
			case 6:
				resultIsFibonacci();
				break;
			case 7:
				resultSumDigits();
				break;
			case 8:
				resultMakeDouble();
				break;
			case 9:
				gcdANDlcm();
				break;
			case 10:
				resultPrintMinMaxDigits();
				break;
			case 11:
				mainMenu();
				break;
			default:
				printf("Good Bye!");
		}
	} while(userChoice3>=1 && userChoice3<=11);
	return 0;
}


//Workshop 4
int menuWorkshop4() {
	int choice4;
	printf("\nMenu of Workshop 4:\n");
	printf("1- Program 1:\n");
	printf("2- Program 2:\n");
	printf("3- Back to Main Menu\n");
	printf("Others: Quit\n");
	printf("Please Select: ");
	scanf("%d", &choice4);
	return choice4;
}

int menuProgram1Workshop4() {
	int choice41;
	printf("\nMenu of Program 1:");
	printf("\n1- Process primes\n");
	printf("2- Print min, max digit in an integer\n");
	printf("3- Back to Menu of Workshop 4\n");
	printf("Others: Quit\n");
	printf("Please Select: ");
	scanf("%d", &choice41);
	return choice41;
}

int program1Workshop4() {
	int userChoice41;
	do {
		userChoice41=menuProgram1Workshop4();
		switch (userChoice41) {
			case 1:
				isPrime();
				break;
			case 2:
				checkValidDate();
				break;
			case 3:
				menuWorkshop4();
				break;
			default:
				printf("Good Bye!");
		}
	} while(userChoice41>=1 && userChoice41<=3);
	return 0;
}

//Program 2
double fibonacciSequence() {
	int t1=1, t2=1, f=1, i2, n3 ;
	do {
		printf("Nhap n: ");
		scanf("%d",&n3);
		for (i2= 3; i2<=n3; i2++) {
			f= t1 + t2;
			t1= t2;
			t2=f;
		}
	} while (n3<0);
	printf("%lf",fibonacciSequence(n3));
	return f;
}

int menuProgram2Workshop4() {
	int choice2;
	printf("\nMenu of Program 2:");
	printf("\n1- Fibonacci sequence\n");
	printf("2- Check a date\n");
	printf("3- Back to Menu of Workshop 4\n");
	printf("Others: Quit\n");
	printf("Please Select: ");
	scanf("%d", &choice2);
	return choice2;
}

int program2Workshop4() {
	int userChoice42;
	do {
		userChoice42=menuProgram2Workshop4();
		switch (userChoice42) {
			case 1:
				fibonacciSequence();
				break;
			case 2:
				checkValidDate();
				break;
			case 3:
				menuWorkshop4();
				break;
			default:
				printf("Good Bye!");
		}
	} while(userChoice42>=1 && userChoice42<=3);
	return userChoice42;
}

int workshop4() {
	int userChoice4;
	do {
		userChoice4=menuWorkshop4();
		switch(userChoice4) {
			case 1:
				program1Workshop4();
				break;
			case 2:
				program2Workshop4();
				break;
			case 3:
				mainMenu();
				break;
			default:
				printf("Good Bye!");
		}
	} while(userChoice4>=1 && userChoice4<=3);
	return 0;
}


//Workshop 5
//5.1
int menuWorkshop5() {
	int choice5;
	printf("\nMenu of Workshop 5:\n");
	printf("1- Program 1\n");
	printf("2- Program 2\n");
	printf("3- Program 3\n");
	printf("4- Program 4\n");
	printf("5- Back to Main Menu\n");
	printf("Please Select: ");
	scanf("%d", &choice5);
	return choice5;
}

int intRandom1(int minDice, int maxDice) {
	return 1 + rand() % (6+1-1);	//min + rand() % (max+1-min)
}
int program1Workshop5() {
	int dice1, dice2, countDice, totalDice;
	srand(time(NULL));	//random khong lap lai
	do {
		printf("Total sought: ");
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
		printf("Total sought: ");
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

void checkCharacter() {
	char c1, c2, t;
	int i;
	getchar();
	printf("Input c1: ",c1);
	scanf("%c", &c1);
	getchar();
	printf("Input c2: ",c2);
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
	printf("Others: Quit\n");
	printf("Please Select: ");
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
				checkValidDate();
				break;
			case 2:
				checkCharacter();
				break;
			case 3:
				menuWorkshop5();
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
	printf("Input your deposit: ");
	scanf("%lf", &deposit);
	printf("Input yearly rate: ");
	scanf("%lf", &yearlyRate);
	printf("Input number of years: ");
	scanf("%lf", &numberOfYears);
	if (deposit>0 && (yearlyRate>0 && yearlyRate<1) && numberOfYears>0 )
		P=(deposit)*pow((1+yearlyRate),numberOfYears);
	printf("Your amount after this duration: %lf", P);
	return P;
}

int menuProgram4Workshop5() {
	int choice4;
	printf("\nMenu of Program 4 in Workshop 5:\n");
	printf("1- Quadratic equation\n");
	printf("2- Bank deposit problem\n");
	printf("3- Back to Menu of Workshop 5\n");
	printf("Others: Quit\n");
	printf("Please Select: ");
	scanf("%d", &choice4);
	return choice4;
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
			case 3:
				menuWorkshop5();
				break;
			default:
				printf("Good Bye!");
		}
	} while(userChoice54>=1 && userChoice54<=3);
	return userChoice54;
}

int workshop5() {
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
			case 5:
				mainMenu();
				break;
			default:
				printf("Good Bye!");
		}
	} while(userChoice5>=1 && userChoice5<=5);
	return 1;
}


//Main Menu
int main() {
	int userChoice;
	do {
		userChoice=mainMenu ();
		switch(userChoice) {
			case 1:
				menuWorkshop2();
				break;
			case 2:
				menuWorkshop3();
				break;
			case 3:
				menuWorkshop4();
				break;
			case 4:
				menuWorkshop5();
				break;
			default:
				printf("GOOD BYE!");
		}
	} while(userChoice>=1 && userChoice<=4);
	return 0;
}




