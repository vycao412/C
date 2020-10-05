#include <stdio.h>

int main() {
	int N[10];
	int n;
	int t, total;
	int i, result=0;
	printf("Input a number (>=1 000 000): ");
	scanf("%d", &n);
	
	for(i=10; i>0; i--) {
		N[i]= n%10;
		n= n/10;
	}

	t= (N[1]*10) + (N[2]*9) + (N[3]*8) + (N[4]*7) + (N[5]*6) + (N[6]*5)+ (N[7]*4) + (N[8]*3) + (N[9]*2);
	result= t + N[10];
	if (result%11==0) printf("Valid");
	else printf("Invalid");

	return 0;
}


