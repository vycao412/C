#include <stdio.h>
#include <string.h>
#define MAXN 100

char* replaceAll(int* source, int* subStr, int repStr){
	int subL= strlen(subStr);
	int repL= strlen(repStr);
	char temp[100];
	char* ptr= strstr(source, subStr);
	int i;
	while (ptr!=NULL){
		strcpy(ptr, ptr+subL);
		if(repL>0){
			strcpy(temp, ptr);
			strcpy(ptr+repL, temp);
			for(i=0; i<repL; i++) *(ptr+i)= repStr[i];
		}
		ptr=strstr(source, subStr);
	}
	return source;
}

int main()
{	int n=MAXN;
	char s[n], subStr[n], repStr[n];
	char sub, rep;
	printf("Input string: ");
	gets(s);
	printf("Input word of sub: ");
	scanf("%c", sub);
	printf("Input word of rep: ");
	scanf("%c", rep);
	replaceAll(s, subStr, repStr);
	
 return 0;
}


