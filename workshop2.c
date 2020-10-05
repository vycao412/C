#include <stdio.h>

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
int yearlyPersonalIncomeTax(int taxFree, int pa, int n, int pd, int ti, int income, int incomeTax) {
	taxFree = (pa + n*pd);/* Neu tinh theo nam thi nhan 12 */
	ti = income - taxFree;
	if (ti<=0) printf("Khong phai chiu thue");
	else if(ti<=5000000) printf("So tien thue phai chiu la:%u",incomeTax=ti*0.05);
	else if(ti<10000000) printf("So tien thue phai chiu la:%u",incomeTax=ti*0.1);
	else if(ti<=18000000) printf("So tien thue phai chiu la:%u",incomeTax=ti*0.15);
	else printf("So tien thue phai chiu la:%d", incomeTax=ti*0.2);
	return incomeTax;
}


//Program 3
int sumIntegers() {
	int x, sum=0;
	do {
		printf("Nhap x:");
		scanf("%d",&x);
		sum+=x;
	} while(x!=0);
	printf("Tong la:%d",sum);
	return sum;
}


//Program 4
int swap() {
	int x, y;
	do {
		printf("Input x:");
		scanf("%d",&x);
		printf("Input y:");
		scanf("%d",&y);
		int t=x;
		x=y;
		y=t;
		printf("Output x:%d\n",x);
		printf("Output y:%d\n",y);
	} while(x!=0 &&y!=0);
	return x,y;
}


//Program 5
int numberCharacters() {
	char ch=0;
	int nVowels=0, nConsonants=0, nOthers=0;
	do {
		ch=getchar();
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
	printf("Number of Vowels:%d\n", nVowels);
	printf("Number of Consonants:%d\n", nConsonants);
	printf("Number of Others:%d\n", nOthers);
	return nVowels, nConsonants, nOthers;
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


//Menu
int menu() {
	int choice;
	printf("\nSelect one\n");
	printf("1. Four operators:\n");
	printf("2. Yearly Personal Income Tax:\n");
	printf("3. Sum of Integers:\n");
	printf("4. Swap two integers:\n");
	printf("5. Number of Vowels, Consonants and Others:\n");
	printf("6. ASCII Code Table:\n");
	printf("7. ASCII code difference between two characters:\n");
	printf("Others: Quit\n");
	scanf("%d", &choice);
	return choice;
}


int main() {
	int userChoice;
	int pa, pd ,n, taxFree, ti, income, incomeTax;	//Program 2
	char ch=0;	//Program 5
	int nVowels=0, nConsonants=0, nOthers=0;	//Program 5
	char c1, c2, t;
	int i;	//Program 7
	do {
		userChoice=menu();
		switch(userChoice) {
			case 1:
				fourOperators();
				break;
			case 2:
				printf("Tong thu nhap:\n", income);
				scanf("%d",&income);
				printf("Tien nuoi ban than:\n", pa);
				scanf("%d",&pa);
				printf("Tien cap duong:\n", pd);
				scanf("%d",&pd);
				printf("So nguoi phu thuoc:\n", n);
				scanf("%d",&n);
				break;
			case 3:
				sumIntegers();
				break;
			case 4:
				swap();
				break;
			case 5:
				printf("Input a string of characters:", ch);
				scanf("%c",&ch);
				numberCharacters();
				break;
			case 6:
				asciiCodeTable();
				break;
			case 7:
				asciiCode();
				break;
			default:
				printf("Good Bye!");
		}
	} while(userChoice>=1 && userChoice<=7);
	return 0;
}


