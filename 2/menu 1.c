#include <stdio.h>
#include <math.h>
// Function 1 : Test whether a character is a vowel
int isVowel( int c) {
	return (c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U');

}
// Function 2: sum divisors of an integer
int sumDivisors(int n) {
	int S=0, i;
	for (i=1; i<=n/2; i++)
		if (n%i==0) S+=i;
	return S;
}
// Function 3: Test whether an Inreger is prime or not
int isPrime(int n) {
	int sqrtn = sqrt(n), i;
	for (i=2; i<=sqrtn; i++)
		if (n%i==0) return 0;
	return 1;
}
// Function for menu
int menu() {
	int choice;
	printf("\n1- Test vowel for a character");
	printf("\n2- Sum of divisors");
	printf("\n3- Test prime for an integer");
	printf("\nOthers: Quit");
	printf("\nPlease choice:");
	scanf("%d",&choice);
	return choice;
}


int main() {
	int userChoice;
	int n;	// Integer inputted
	char c;	// Character inputted
	do {
		userChoice = menu();
		switch(userChoice) {
			case 1:
				printf("Enter one character:");
				fflush(stdin); // clear the keyboard buffer
				c= getchar();
				if (isVowel(c)==1) printf("It is a vowel\n");
				else printf("It is not a vowel\n");
				break;
			case 2:
				do {
					printf("Input a positive integer:");
					scanf("%d",&n);
				} while (n<=0);
				printf("Sum of it's divisors:%d\n", sumDivisors(n));
				break;
			case 3:
				printf("Input an integer:");
				scanf("%d",&n);
				if(isPrime(n)==1) printf("It is a prime.\n");
				else printf("It is not a prime.\n");
				break;
			default:
				printf("Good bye!");
		}
	} while(userChoice>=1 && userChoice<4);
	return 0;
}
