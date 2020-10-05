#include <stdio.h>
#include <string.h>
#define MAXN 100

int menuProgram1() {
	int choice;
	printf("1- Add a student\n");
	printf("2- Remove a student\n");
	printf("3- Search a student\n");
	printf("4- Print the list in ascending order\n");
	printf("5- Back to menu of Workshop 7\n");
	printf("Select one: ");
	scanf("%d", &choice);
	return choice;
}

void inputArray(char names[][40], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("Student %d: ",i+1);
		fflush(stdin);
		scanf("%30[^\n]", names[i]);
		strupr(names[i]);
	}
}

void outputArray(char names[][40], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("Student %d: %s\n",i+1,names[i]);
	}
}

int isFull(char names, int n) {
	return n==MAXN;
}

int isEmpty(char names, int n) {
	return n==0;
}

void add(char names[][40], char name, int n) {
	int i;
	char t[40];
	if(n==MAXN) printf("The array is FULL!\n");
	else {
		printf("Input name of student who is added: ");
		fflush(stdin);
		gets(t);
		for(i=0; i<n; i++) {
			for(int j=i+1; j<n; j++) {
				if(strcmp(names[j],names[i]) <0) {
					strcpy(t, names[j]);
					strcpy(names[j], names[i]);
					strcpy(names[i], t);
				}
			}
		}
	}
}

void removed(char names[][40], char name, int *n) {
	int i, j;
	char t[40];
	if(n==0) printf("Sorry!The array is EMPTY!\n");
	else {
		printf("Input name of student who is removed: ");
		fflush(stdin);
		gets(t);
		for(i=0; i<*n; i++) {
			if(strcmp(t, names[i])==0) {
				for(j=i; j<*n; j++) {
					strcpy(names[i], names[i+1]);
				}
				(*n)++;
			}
		}
	}
}

void search(char names[][40], char name, int *n) {
	int i;
	char t[40];
	printf("Input name of student who you want to search: ");
	fflush(stdin);
	gets(t);
	for(i=0; i<*n; i++)
		if(strcmp(t,names[i])==0) printf("%d",i);
}

void asc(char names[][40], int n) {
	int i, j;
	char t[40];
	for(i=0; i<n-1; i++) {
		for(j=n-1; j>i; j--)
			if (strcmp(names[j], names[j-1])<0) {
				strcpy(t, names[j]);
				strcpy(names[j], names[j-1]);
				strcpy(names[j-1], t);
			}
	}
}

int main() {
	char names[100][40], name;
	int n=0;
	int userChoice;
	do {
		printf("Input the number of student: ");
		scanf("%d", &n);
	} while(n<0 || n>100);
	inputArray(names,n);
	outputArray(names,n);
	do {
		userChoice=menuProgram1();
		switch(userChoice) {
			case 1:
				add(names,name,n);
				break;
			case 2:
				removed(names,name,&n);
				break;
			case 3:
				search(names,name,&n);
				break;
			case 4:
				asc(names,n);
				outputArray(names,n);
				break;
			default:
				printf("Good Bye!");
		}
	} while(userChoice>0 && userChoice<5);
	return 0;
}


