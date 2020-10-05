#include <stdio.h>
#include <string.h>
#define MAXN 100

int main()
{	int n=MAXN;
	char s[n];
	int i, count=0;
	printf("Enter string: ");
	gets(s);
	for(i=0; i<n; i++){
		if((s[i]!=' ') && (i==0 || s[i-1]==' '))
		count++; 
	}
	printf("%d", count);
 return 0;
}

