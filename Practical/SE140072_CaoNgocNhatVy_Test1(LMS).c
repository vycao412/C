#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 50

void MSSV(){
	printf("\t\t\t\t*************************************************\n");
	printf("\t\t\t\t\tStudent ID: SE140072\n\n");
	printf("\t\t\t\t\tStudent Name: CAO NGOC NHAT VY\n\n");
	printf("\t\t\t\t\tClass: SE1411\n\n");
	printf("\t\t\t\t*************************************************\n");
}

int menu() {
	int choice;
	printf("\nWELCOME TO PRACTICAL: \n");
	printf("1- PROGRAM 1\n");
	printf("2- PROGRAM 2\n");
	printf("Select one: ");
	scanf("%d", &choice);
	return choice;
}

void clear(){
	while(getchar()!='\n');
}

int getInt(int min, int max) {
	int n, keeptrying = 1, rc;
	char after;

	do {
		printf("Input the number of books\n"
    			"in the range [%d, %d]: ",
		       min, max);
		rc = scanf("%d%c", &n, &after);
		if(rc==0) {
			printf("**No input accepted!**\n\n");
			clear();
		} else if(after!='\n') {
			printf("**Trailing characters!**\n\n");
			clear();
		} else if(n< min || n >max) {
			printf("**Out of range!**\n\n");
		} else
			keeptrying=0;
	} while(keeptrying ==1);
		return n;
}

int menuProgram1() {
	int choice1;
	printf("\n1- Add a book name\n");
	printf("2- Search a book name\n");
	printf("3- Print the list in ascending order\n");
	printf("4- Back to MAIN MENU\n");
	printf("Others: Quit!\n");
	printf("Select one: ");
	scanf("%d", &choice1);
	return choice1;
}

int isFull (char* books, int n) {
	return n==MAXN;
}

int isEmpty (char* books, int n) {
	return n==0;
}

void xoa(char books[], int vitrixoa) {
	int n=strlen(books);
	for(int i=vitrixoa; i<n; i++)
		books[i]=books[i+1];
	books[n-1]='\0';
}

void xoakt(char* books) {
	for(int i=0; i<strlen(books); i++)
		if(books[i]==' ' && books[i+1]==' ') {
			xoa(books,i);
			i--;
		}
	if(books[0]==' ') xoa(books,0);
	if(books[strlen(books)-1]==' ')
		xoa(books, strlen(books)-1);
}

void input(char books[][31], int n) {
	int i;
	for (i=0; i<n; i++) {
		printf("Book %d/%d: ", i+1, n);
		fflush(stdin);
		scanf("%31[^\n]", books[i]);
		xoakt(books[i]);
		strupr(books[i]);
	}
}

void output(char books[][31], int n) {
	int i;
	for(i=0; i<n; i++)
		puts(books[i]);
}


void add(char books[][31], int *n, char book[31]) {
	printf("Input added name: ");
	fflush(stdin);
	gets(books[*n]);
	xoakt(books[*n]);
	strupr(books[*n]);
	(*n)++;
	printf("Added!");
}

int search(char book, char books[][31], int n) {
	int i;
	for(i=0; i<n; i++) if (books[i]==book) return i;
	return -1;
}

void bubbleSort(char books[][31], int n) {
	int i, j;
	char t[31];
	for(i=0; i<n-1; i++) {
		for(j=n-1; j>i; j--)
			if(strcmp(books[j], books[j-1])<0) {
				strcpy(t, books[j]);
				strcpy(books[j], books[j-1]);
				strcpy(books[j-1], t);
			}
	}
}
void program1() {
	char books[MAXN];
	int n, i;
	int max=50, min=1;
	char book[31];
	int userChoice1;
	n=getInt(min, max);
	input(books,n);
	output(books,n);
	do {
		userChoice1=menuProgram1();
		switch(userChoice1) {
			case 1:
				if (isFull(books,n)) printf("\nSorry! The array is full.\n");
				else {
					add(books, &n, book);
				}
				break;
			case 2:
				if (isEmpty(books,n)) printf("\nSorry! The array is empty.\n");
				else {
					int result=search(book,books,n);
					if(result==-1) printf("Not Found!");
					else printf("This is book %d", result+1);
				}
				break;
			case 3:
				bubbleSort(books,n);
				output(books,n);
				break;
			case 4:
				practical();
				break;
			default:
				printf("Good Bye!");
		}
	} while(userChoice1>0 && userChoice1<6);
}

//Program 2
int menuProgram2() {
	int choice2;
	printf("\n1- Add new book\n");
	printf("2- Remove a book based on a code inputted\n");
	printf("5- Back to MAIN MENU\n");
	printf("Others: Quit!\n");
	printf("Select one: ");
	scanf("%d", &choice2);
	return choice2;
}

void inputBook(char code[][10], char name[][20], char author[][30], int n) {
	int i;
	for(i=1; i<=n; i++) {
		printf("Code [%d]: ", i);
		fflush(stdin);
		gets(code[i]);
		strupr(code[i]);

		printf("Name [%d]: ", i);
		fflush(stdin);
		gets(name[i]);
		xoakt(name[i]);
		strupr(name[i]);

		printf("Author [%d]: ", i);
		fflush(stdin);
		gets(author[i]);
		xoakt(author[i]);
		strupr(author[i]);
	}
}

void printBook(char code[][10], char name[][20], char author[][30], int n) {
	int i;
	for (i=1; i<=n; i++) {
		printf("BOOK NUMBER %d\n",i);
		printf("	Name: %-10s\n", name[i]);
		printf("	Code: %-20s\n", code[i]);
		printf("	Author: %-31s\n", author[i]);
	}
}

void addBook(char code[][10], char name[][20], char author[][30], int *pn) {
	(*pn)++;

	printf("Code[%d]: ",*pn);
	fflush(stdin);
	gets(code[*pn]);
	strupr(code[*pn]);

	printf("Name[%d]: ",*pn);
	fflush(stdin);
	gets(name[*pn]);
	xoakt(name[*pn]);
	strupr(name[*pn]);

	printf("Author[%d]: ",*pn);
	fflush(stdin);
	gets(author[*pn]);
	xoakt(author[*pn]);
	strupr(author[*pn]);

	printf("Added!");
	
	puts(code[*pn]);
	puts(name[*pn]);
	puts(author[*pn]);
}

void swapString(char*a,char*b) {
	char t[50];
	strcpy(t,a);
	strcpy(a,b);
	strcpy(b,t);
}

void removeBook(char code[][10], char name[][20], char author[][30], int *pn) {
	int i;
	char codeBook[10];
	int flag=0;
	printf("Remove a book (enter Code): ");
	fflush(stdin);
	gets(codeBook);
	strupr(codeBook);
	for (i=1; i<=*pn && flag==0; i++) {
		if (strcmp(codeBook,code[i])==0) {
			flag=1;
			for(int j=i; j<=*pn; j++){
			swapString(code[j], code[j+1]);
			swapString(name[j], name[j+1]);
			swapString(author[j], author[j+1]);
			(*pn)--;}
			printf("Removed!");
		}
	}
	if (flag==0) printf("Not found\n");
}

void program2() {
	char code[MAXN][10];
	char name[MAXN][20];
	char author[MAXN][30];
	int min=1, max=50;
	int userChoice2;
	int n=0;
	n=getInt(min, max);
	inputBook(code, name, author, n);
	printBook(code, name, author, n);
	do {
		userChoice2=menuProgram2();
		switch(userChoice2) {
			case 1 :
				addBook(code, name, author, &n);
				break;
			case 2 :
				if (n>0) {
					removeBook(code, name, author, &n);
				} else printf("Array is empty\n");
				break;
			case 3:
				practical();
				break;
			default :
				printf("Good Bye!");
		}
	} while (userChoice2>0 && userChoice2<6);
}

int practical() {
	int userChoice;
	do {
		userChoice=menu();
		switch(userChoice) {
			case 1:
				program1();
				break;
			case 2:
				program2();
				break;
			default:
				printf("GOOD BYE!");
		}
	} while(userChoice>0 && userChoice<5);
	return userChoice;
}

int main()
{
	MSSV();
	practical();
 return 0;
}


