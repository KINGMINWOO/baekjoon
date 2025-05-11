#include <stdio.h>

int fibonacci(int num);

int main(void)
{
	int n;
	scanf("%d", &n);

	printf("%d", fibonacci(n));

	return 0;
}

// 피보나치 수열을 구하는 함수
// f(3) = f(1) + f(2)
// f(10) = f(9) + f(8)
int fibonacci(int num) {
	if (num == 0) {
		return 0;
	}
	else if (num <= 2) {
		return 1;
	}

	return fibonacci(num - 2) + fibonacci(num - 1);
}