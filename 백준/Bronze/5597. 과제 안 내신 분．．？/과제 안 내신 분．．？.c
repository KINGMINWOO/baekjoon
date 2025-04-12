#include <stdio.h>


int main(void)
{
	int a;
	int array[30];

	for (int A = 0; A < 30; A++) {
		array[A] = A + 1;
	}

	for (int i = 0; i < 28; i++) {
		scanf("%d", &a);
		for (int j = 0; j < 30; j++) {
			if (array[j] == a) {
				array[j] = 0;
				break;
			}

		}
	}

	for (int k = 0; k < 30; k++) {
		if (array[k] != 0) {
			printf("%d\n", array[k]);
		}
		
	}
	return 0;
}