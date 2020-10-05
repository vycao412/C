#include <stdio.h>
#define ENTER 10
int main() {
	int noDigits=0, noLetters=0, noOthers=0;
	char c=0;
	printf("Enter a string:",c);

	while(c!=ENTER /*dieu kien de tiep tuc chuong trinh*/) {
		scanf("%c",&c);
		if(c>='0'&&c<='9') noDigits++;
		else if((c>='a' && c<='z') || (c>='A' && c<='Z')) noLetters++;
		else noOthers++;
	}
	printf("noDigits:%d\nnoLetters:%d\nnoOthers:%d",noDigits,noLetters,noOthers);
	return 0;

}
