#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	__int32_t N, M, cnt = 0;

	scanf("%d", &N);

	M = ~N + 1;

	for (int i = 0; i < 32; i++) {
		if ((N ^ M) & (1 << i))
			cnt++;
	}
	printf("%d", cnt);
}