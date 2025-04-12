#include <stdio.h>


int main(void)
{
	int N, M;
	int i, j, k;
	int array[100] = { 0 };
	scanf("%d %d", &N, &M);
	for (int h = 0; h < M; h++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int B = i - 1; B < j; B++) {
			array[B] = k;
		}
	}
	for (int A = 0; A < N; A++) {
		printf("%d ", array[A]);
	}
	return 0;
}