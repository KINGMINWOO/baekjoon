#include <stdio.h>

int main(void)
{
	
	int X, N;
	scanf("%d", &X);
	scanf("%d", &N);
	int sum1 = 0;

	for (int i = 1; i <= N; i++) {
		int j, h;
		scanf("%d %d", &j, &h);
		sum1 += j * h;
	}
	if (sum1 == X) {
		printf("Yes");
	}
	else {
		printf("No");
	}

	return 0;
}