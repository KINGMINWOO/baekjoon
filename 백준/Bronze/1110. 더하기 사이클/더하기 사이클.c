#include <stdio.h>


int main(void)
{
	
	int N;
	scanf("%d", &N);
	int M = N;
	int cycle = 0;
	int a, b, c;
	while (1) {
		a = N / 10;
		b = N % 10;
		c = a + b;
		cycle += 1;
		N = (b * 10) + (c % 10);
		if (N == M) break;
	}
	
	printf("%d", cycle);

	return 0;
}