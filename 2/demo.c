#include <stdio.h>

void printfInformation() {
	printf("**********");
	printf("Fullname: Cao Ngoc Nhat Vy\n");
	printf("Birthdate: 04/12/2000\n");
	printf("**********\n");
}
int sumDivisors(int n) {
	int sum=0;
	int i;
	for(i=1; i<=n/2; i++) {
		if (n%i==0)
			sum=sum+i;
	}
	return sum;
}
int main() {
	int n;
	printfInformation(); //in thong tin
	printf("Nhap vao so n:\n");
	scanf("%d",&n);
	printf("Tong cac uoc so la:%d", sumDivisors(n)); //tinh uoc so
	getchar();
	return 0;

}
