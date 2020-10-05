#include <stdio.h>

int main()
{
	int arr[5];
	
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (int i = 0; i < 5 - 1; i++) {
		for (int j = 0; j < 5 - j - 1; j++) {
			if (arr[i] > arr[i + 1]) {
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = arr[tmp];
			}
		}
	}
	
	for (int i = 0; i < 5; i++)
		printf("%d\n", arr[i]);
 return 0;
}


