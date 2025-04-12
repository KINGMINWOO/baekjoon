#include <stdio.h>


int main(void)
{
	int N, M;
	int i, j;
	int array[100];
	scanf("%d %d", &N, &M);
	for (int A = 0; A < N; A++) {
		array[A] = A + 1;
	}
	
	for (int h = 0; h < M; h++) {
		scanf("%d %d", &i, &j);
		int temp;
		temp = array[i - 1];
		array[i - 1] = array[j - 1];
		array[j - 1] = temp;
	}
	for (int A = 0; A < N; A++) {
		printf("%d ", array[A]);
	}
	return 0;
}