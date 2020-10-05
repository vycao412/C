/* Write a program that require user input 2 number & 1 operator + ; print out the result of num1+num2 */
/* Kiem tra neu khong phai dau + thi thong bao cho nguoi dung biet.*/

#include <stdio.h>
int main()
{
	int num1, num2;
	char op;
	printf("Input 2 numbers and operator +:\n");
	scanf("%d%c%d", &num1, &op, &num2);
	fflush(stdin);
	if (op == '+')
	{
			int Result=num1 + num2;
			printf("%d", Result);
	}	
	else
		printf("Wrong");
	return 0;
}

