#include <stdio.h>

int main() {
	int N,t;
	printf("Nhap so ao:");
	scanf("%d", &N);
	if (N<=3) {
		t=N*120000;
		printf("Gia tien la:%u",t);
	} else if (N<=6) {
		t=(3*120000)+ (N-3)*90000;
		printf("Gia tien la:%u",t);
	} else if (N<=10) {
		t=(3*120000)+(3*90000)+(N-6)*85000;
		printf("Gia tien la:%u",t);
	} else {
		t=(3*120000)+(3*90000)+(4*85000)+(N-10)*70000;
		printf("Gia tien la:%u",t);
	}
	return 0;
}
