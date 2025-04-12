#include <stdio.h>


int main(void)
{
	int N;
	int array[100];
	int v;
	int sum = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &array[i]);
		//printf("%d ", array[i]);
	}
	scanf("%d", &v);

	for (int j = 0; j < N; j++) {
		if (array[j] == v) {
			sum += 1;
		}
	}
	if (sum > 0) {
		printf("%d", sum);
	}
	else {
		printf("0");
	}

	return 0;
}