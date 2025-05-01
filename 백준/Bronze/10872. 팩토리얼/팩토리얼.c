#include <stdio.h>


int main(void)
{
	int N;
	scanf("%d", &N);
	int a = 1;
	for (int i = 0; i < N; i++) {
		a = a * (N - i);
	}
	printf("%d", a);
	return 0;
}