#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

//printf("Input the number of student: ");
//	scanf("%d%c", &n, &c);
//	while(((scanf("%d%c", &n, &c) !=2 || c!='\n') && clean_stdin())) {
//		printf("Data is error!\n");
//		printf("Input the number of student (integer): ");
//	}
	
int clean_stdin() {
	while(getchar() != '\n') {
	}
	return 1;
}

int main() {
	int input;
	char c;
	do {
		printf("Enter an integer: ");
	} while(((scanf("%d%c", &input, &c) !=2 || c!='\n') && clean_stdin()) || input>10);
	printf("done, number is %d", input);
	return 0;
}


