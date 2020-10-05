#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAXN 100

int main()
{	int n=MAXN;
	char s[n];
	int i;
	int count=0;
	printf("Input string: ");
	gets(s);
	for(i=0; i<n; i++){
		if(isdigit(s[i])==1 && (i==0 || isdigit(s[i-1])==0) ) count++;
	}
	printf("%d", count);
	

 return 0;
}


