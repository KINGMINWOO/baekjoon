#include <stdio.h>


int main(void)
{
	int a;
	int array[10];
	int count = 10;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &a);
		array[i] = a % 42;
	}
	for (int j = 0; j < 10; j++) {
		for (int k = j + 1; k < 10; k++) {
			if (array[j] < 42 && array[j] == array[k]) {
				count -= 1;
				array[k] = 42;
			}
		}
	}
	printf("%d", count);
	
	return 0;
}