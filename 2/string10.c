#include <stdio.h>
#include <string.h>

void nhap(char names[][31], int n){
	int i;
	for(i=0; i<n; i++){
		printf("Nhap ten thu %d/%d: ", i+1, n);
		fflush(stdin);
		scanf("%30[^\n]", names[i]);
		strupr(names[i]);
	}
}

void xuat(char names[][31], int n){
	int i;
	for(i=0; i<n; i++)
	puts(names[i]);
}

void sapxep(char names[][31], int n){
	int i, j;
	char t[31];
	for(i=0; i<n; i++){
	for(j=n-1; j>i; j--)
	if(strcmp(names[j], names[j-1])<0){
		strcpy(t, names[j]);
		strcpy(names[j], names[j-1]);
		strcpy(names[j-1], t);}
	}
}

int main()
{
	char names[10][31];
	int n=10;
	nhap(names,n);
	xuat(names,n);
	sapxep(names,n);
	printf("DS sau khi sap xep:\n");
	xuat(names,n);
 return 0;
}


