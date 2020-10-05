#include <stdio.h>
#include <string.h>
#include <conio.h>
#define SIZE 100

void main() {
	char names[SIZE];
	gets(names);
	int n=strlen(names);
	if(names[0]>='A' && names[0]<='Z') printf("%c", names[0]);
	else printf("%c",names[0]-32);
	for(int i=1; i<n; i++) {
		if(names[i]!=' ') {
			if(names[i]>='A' && names[i]<='Z') printf("%c",names[i]+32);
			else printf("%c", names[i]);
		} else {
			printf("%c", names[i]);
			if(names[i+1]>='A' && names[i+1]<='Z') {
				printf("%c", names[i+1]);
				i++;
			} else {
				printf("%c", names[i+1]-32);
				i++;
			}
		}
	}
}

