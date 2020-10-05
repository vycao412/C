#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXN 100

int menu() {
	int choice;
	printf("\n1- Add a value\n");
	printf("2- Search a value\n");
	printf("3- Print out the array\n");
	printf("4- Print out values in a range\n");
	printf("5- Remove the first existence of a value\n");
	printf("6- Remove all existence of a value\n");
	printf("7- Print out the array in ascending order\n");
	printf("8- Print out the array in descending order\n");
	printf("Others: Quit\n");
	printf("Select one: ");
	scanf("%d", &choice);
	return choice;
}

void input(int* a, int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("a[%d]= ",i);
		scanf("%d", &a[i]);
	}
}

void output(int* a, int n) {
	for (int i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
}

int isFull (int* a, int n) {
	return n==MAXN;
}

int isEmpty (int* a, int n) {
	return n==0;
}

void add (int value, int* a, int* pn) {
	a[*pn] = value;
	(*pn)++;
}

int search (int x, int* a, int n) {
	int i;
	for(i=0; i<n; i++) if (a[i]==x) return i;
	return -1;
}

void printRange (int a[], int maxVal, int minVal) {
	int i;
	int n;
	
		printf("Input minVal: ");
		scanf("%d", &minVal);
		printf("Input maxVal: ");
		scanf("%d", &maxVal);
	for(i=0; i<n; i++) 
		if (a[i]<maxVal && a[i]>minVal) printf("%d ", a[i]);	
}

int removeOne (int pos, int* a, int* pn) {
	if(pos<0 || pos >=*pn) return 0;
	int i;
	for(i=pos; i<*pn-1; i++) a[i]=a[i+1];
	(*pn)--;
	return 1;
}

int removeAll (int x, int* a, int* pn) {
	int result= 0;
	int i, j;
	for(i=(*pn)-1; i>=0; i--)
		if (a[i]==x) {
			result= 1;
			for(j=i; j<(*pn)-1; j++)
				a[j]=a[j+1];
			(*pn)--;
		}
	return result;
}

void printAsc (int* a, int n) {
	// Get addresses of elements
	int** adds= (int**)calloc(n, sizeof(int*));
	int i, j;
	for(i=0; i<n; i++) adds[i]= &a[i];
	// Asc Sort addresses based on values of elements
	int* t;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (*adds[j]< *adds[j-1])(
				    t= adds[j]);
	adds[j]= adds[j-1];
	adds[j-1]= t;
// Print elements based on it's pointer
	for (i=0; i<n; i++) printf("%d", *adds[i]);
	free(adds); // de-allocate memory
}

void printDesc (int* a, int n) {
	// Get addresses of elements
	int** adds= (int**) calloc (n, sizeof(int*));
	int i, j;
	for (i=0; i<n; i++) adds[i]= &a[i];
	// Desc Sort addresses based on values of elements
	int* t;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (*adds[j]> *adds[j-1]) {
				t= adds[j];
				adds[j]= adds[j-1];
				adds[j-1]= t;
			}
	// Print elements based on it's pointer
	for (i=0; i<n; i++) printf("%d", *adds[i]);
	free(adds);
}

void print(int* a, int n) {
	int i;
	for (i=0; i<n; i++) printf("%d", a[i]);
}

int main() {
	int a[MAXN];
	int n=0;
	int value;
	int maxVal, minVal;
	int userChoice;
	int rand();
	do {
		printf("Input length array:");
		scanf("%d", &n);
	} while(n<0 || n>=100);
	input(a,n);
	output(a,n);
	do {
		userChoice=menu();
		switch(userChoice) {
			case 1:
				if (isFull(a,n)) printf("\nSorry! The array is full.\n");
				else {
					printf("Input an added value:");
					scanf("%d", &value);
					add (value, a, &n);
					printf("Added\n");
				}
				break;
			case 2:
				if (isEmpty(a,n)) printf("\nSorry! The array is empty.\n");
				else {
					printf("Input the searched value:");
					scanf("%d", &value);
					int pos= search(value, a, n);
					if (pos<0) printf("Not found!\n");
					else printf("Position is found: %d\n", pos);
				}
				break;
			case 3:
				print(a,n);
				break;
			case 4:
				printRange(a, maxVal, minVal);
				break;
			case 5:
				if (isEmpty(a,n)) printf("\nSorry! The array is empty.\n");
				else {
					printf("Input the removed value:");
					scanf("%d", &value);
					int pos= search(value, a, n);
					if (pos<0) printf("Not found!\n");
					else {
						removeOne(pos, a, &n);
						printf("Remove!\n");
					}
					break;
				case 6:
					if (isEmpty(a,n)) printf("\nSorry! The array is empty.\n");
					else {
						printf("Input a value that will be removed all: ");
						scanf("%d", &value);
						if (removeAll(value, a, &n)==0) printf("Not found!\n");
						else printf("Removed!\n");
					}
					break;
				case 7:
					printAsc(a,n);
					break;
				case 8:
					printDesc(a,n);
					break;
				default:
					printf("\nGoodbye.\n");
				}
		}
	} while (userChoice>0 && userChoice<9);

	return 0;
}


