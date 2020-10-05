#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAXN 100

int menu() {
	int choice;
	printf("\n1- Input data for family member\n");
	printf("2- Sort list of family member\n");
	printf("3- Save data into text file\n");
	printf("4- Print information of a family member basing on ID (read from text file)\n");
	printf("Select one: ");
	scanf("%d", &choice);
	return choice;
}

void xoa(char* a, int vitrixoa) {
	int n=strlen(a);
	for(int i=vitrixoa; i<n; i++)
		a[i]=a[i+1];
	a[n-1]='\0';
}

void xoakt(char* a) {
	for(int i=0; i<strlen(a); i++)
		if(a[i]==' ' && a[i+1]==' ') {
			xoa(a,i);
			i--;
		}
	if(a[0]==' ') xoa(a,0);
	if(a[strlen(a)-1]==' ')
		xoa(a, strlen(a)-1);
}

void clear(){
	while(getchar()!='\n');
}

int getInt() {
	int n, keeptrying = 1, rc;
	char after;

	do {
		printf("INPUT THE NUMBER OF FAMILY MEMBER: ");
		rc = scanf("%d%c", &n, &after);
		if(rc==0) {
			printf("**No input accepted!**\n\n");
			clear();
		} else if(after!='\n') {
			printf("**Trailing characters!**\n\n");
			clear();
		} else
			keeptrying=0;
	} while(keeptrying ==1);
		return n;
}

int validDay(int Day, int Month, int Year) {
	switch(Day,Month) {
		case 1:
			Month==1  && 1<=Day && Day<=31;
			return 1;
			break;
		case 2:
			Month==2;
			if( (Year%400==0&&Day<=29) )
				return 1;
			break;
		case 3:
			Month==3  && 1<=Day && Day<=31;
			return 1;
			break;
		case 4:
			Month==4  && 1<=Day && Day<=30;
			return 1;
			break;
		case 5:
			Month==5  && 1<=Day && Day<=31;
			return 1;
			break;
		case 6:
			Month==6  && 1<=Day && Day<=30;
			return 1;
			break;
		case 7:
			Month==7  && 1<=Day && Day<=31;
			return 1;
			break;
		case 8:
			Month==8  && 1<=Day && Day<=31;
			return 1;
			break;
		case 9:
			Month==9  && 1<=Day && Day<=30;
			return 1;
			break;
		case 10:
			Month==10 && 1<=Day && Day<=31;
			return 1;
			break;
		case 11:
			Month==11 && 1<=Day && Day<=30;
			return 1;
			break;
		case 12:
			Month==12 && 1<=Day && Day<=31;
			return 1;
			break;
			//default: return 0;
	}
	return 0;
}

int exist(char* filename) {
	int existed=0;
	FILE* f=fopen(filename, "r");
	if(f!=NULL) {
		existed=1;
		fclose(f);
	}
	return existed;
}

void input(char* filename, char ID[][10], char name[][30], int day[], int month[], int year[], char hobbies[][30], char professional[][30], int n) {
	int i;
	int Day, Month, Year;
	//FILE* f=fopen(filename,"w");

	for(i=1; i<=n; i++) {
		printf("ID [%d]: ", i);
		fflush(stdin);
		gets(ID[i]);
		strupr(ID[i]);

		printf("NAME [%d]: ", i);
		fflush(stdin);
		gets(name[i]);
		xoakt(name[i]);
		strupr(name[i]);

		do {
			printf("BIRTHDATE [%d]: ",i);
			scanf("%d%*c%d%*c%d%*c", &day[i], &month[i], &year[i]);
			Day=day[i];
			Month=month[i];
			Year=year[i];
		} while((validDay(Day, Month, Year))==0);


		printf("HOBBIES [%d]: ", i);
		fflush(stdin);
		gets(hobbies[i]);
		xoakt(hobbies[i]);
		strupr(hobbies[i]);

		printf("PROFESSIONAL [%d]: ", i);
		fflush(stdin);
		gets(professional[i]);
		xoakt(professional[i]);
		strupr(professional[i]);

		//fclose(f);
	}
}

void printToFile(char* filename, char ID[][10], char name[][30], int day[], int month[], int year[], char hobbies[][30], char professional[][30], int n) {
	FILE* f=fopen(filename, "w");
	fprintf(f, "%d", n);
	int i;
	for(i=1; i<=n; i++) {
		fprintf(f, 	"\n%s		%s		%d/%d/%d		%s			%s", ID[i], name[i], day[i], month[i], year[i], hobbies[i], professional[i]);
	}
	fclose(f);
}

void print(char* filename, char ID[][10], char name[][30], int day[], int month[], int year[], char hobbies[][30], char professional[][30], int n) {
	int i;
	printf("\t\t\t\tID\t\t\tNAME\t\t\tBIRTHDATE\t\t\tHOBBIES\t\t\tPROFESSIONAL\n\n");
	for(i=1; i<=n; i++) {
		printf("\n\t\t\t\t%s\t\t\t%s\t\t\t%d/%d/%d\t\t\t%s\t\t\t%s", ID[i], name[i], day[i], month[i], year[i], hobbies[i], professional[i]);
	}
}

void output(char* filename, char ID[][10], char name[][30], int day[], int month[], int year[], char hobbies[][30], char professional[][30], int n) {
	int i;
	FILE* f=fopen(filename,"r");
	for (i=1; i<=n; i++) {
		fprintf(f, "%s	%s	%d/%d/%d	%s	%s", ID[i], name[i], day[i], month[i], year[i], hobbies[i], professional[i]);
	}
	fclose(f);
}

void swapString(char*a, char*b) {
	char t[30];
	strcpy(t,a);
	strcpy(a,b);
	strcpy(b,t);
}

void swapNumber(int *a, int*b) {
	int t=*a;
	*a=*b;
	*b=t;
}

void sort(char* filename, char ID[][10], char name[][30], int day[], int month[], int year[], char hobbies[][30], char professional[][30], int n) {
	FILE* f=fopen(filename,"r");
	int i, j, k;
	for(i=0; i<n; i++) {
		for(j=i; j<=n; j++) {
			if((year[j]<year[i]) || (year[j]==year[i] && month[j]<month[i] ) || (year[j]==year[i] && month[j]==month[i] && day[j]<day[i]) ) {

				swapString(ID[i], ID[j]);

				swapString(name[i], name[j]);

				swapNumber(&day[i], &day[j]);
				swapNumber(&month[i], &month[j]);
				swapNumber(&year[i], &year[j]);

				swapString(hobbies[i], hobbies[j]);

				swapString(professional[i], professional[j]);
			}
		}
	}

}

void searchInFile(char* filename, char ID[][10], char name[][30], int day[], int month[], int year[], char hobbies[][30], char professional[][30], int n) {
	FILE* f=fopen(filename,"r");
	char id[10];
	int i;
	int flag=0;
	printf("Find family member (enter ID): ");
	fflush(stdin);
	gets(id);
	for (i=1; i<=n; i++) {
		if (strcmp(id,ID[i])==0) {
			fprintf(f, "FAMILY NUMBER %d\n",i);
			fprintf(f, "	ID: %-10s\n", ID[i]);
			fprintf(f, "	NAME: %-30s\n", name[i]);
			fprintf(f, " 	BIRTHDATE: %d/%d/%d", day[i], month[i], year[i]);
			fprintf(f, "	HOBBIES: %-30s\n", hobbies[i]);
			fprintf(f, "	PROFESSIONAL: %-30s\n", professional[i]);
			flag=1;
			break;
		}
	}
	if (flag==0) printf("Not found\n");
}

void search(char* filename, char ID[][10], char name[][30], int day[], int month[], int year[], char hobbies[][30], char professional[][30], int n) {
	char id[10];
	int i;
	int flag=0;
	printf("Find family member (enter ID): ");
	fflush(stdin);
	gets(id);
	for (i=1; i<=n; i++) {
		if (strcmp(id,ID[i])==0) {
			printf("FAMILY NUMBER %d\n",i);
			printf("	ID: %-10s\n", ID[i]);
			printf("	NAME: %-30s\n", name[i]);
			printf(" 	BIRTHDATE: %d/%d/%d", day[i], month[i], year[i]);
			printf("	HOBBIES: %-30s\n", hobbies[i]);
			printf("	PROFESSIONAL: %-30s\n", professional[i]);
			flag=1;
			break;
		}
	}
	if (flag==0) printf("Not found\n");
}

int main() {
	char ID[MAXN][10];
	char name[MAXN][30];
	int day[MAXN];
	int month[MAXN];
	int year[MAXN];
	char hobbies[MAXN][30];
	char professional[MAXN][30];
	char filename[30];
	int n;
	int userChoice;
	printf("Program for writing then reading a file\n");
	printf("Enter a filename: ");
	gets(filename);
	if(exist(filename)==1) {
		printf("The file %s existed. Override it Y/N? :", filename);
		if(toupper(getchar())=='N') return 0;
	}
	printf("Write file:\n");
	do {
		userChoice=menu();
		switch(userChoice) {
			case 1:
				n=getInt();
				input(filename, ID, name, day, month, year, hobbies, professional, n);
				printToFile(filename, ID, name, day, month, year, hobbies, professional, n);
				print(filename, ID, name, day, month, year, hobbies, professional, n);
				//output(filename, ID, name, day, month, year, hobbies, professional, n);
				break;
			case 2:
				sort(filename, ID, name, day, month, year, hobbies, professional, n);
				printToFile(filename, ID, name, day, month, year, hobbies, professional, n);
				print(filename, ID, name, day, month, year, hobbies, professional, n);
				//output(filename, ID, name, day, month, year, hobbies, professional, n);
				break;
			case 3:
				printf("SAVED");
				break;
			case 4:
				search(filename, ID, name, day, month, year, hobbies, professional, n);
				break;
			default:
				printf("GOOD BYE!");
		}
	} while(userChoice>0 && userChoice<5);
	return 0;
}


