#include <stdio.h>

int main() {
	int N,t;
	printf ("Nhap so luong dien su dung (kwhs):");
	scanf("%d",&N);
	if (N<=100)
		printf("Gia tien dien la:%u",t=N*950);
	else if(N<=150)
		printf("Gia tien dien la:%u",t=(100*950)+(N-100)*1250);
	else if (N<=200)
		printf("Gia tien dien la:%u",t=(100*950)+(50*1250)+(N-150)*1350);
	else
		printf("Gia tien dien la:%u",t=(100*950)+(50*1250)+(50*1350)+(N-200)*1550);
	return 0;
}
