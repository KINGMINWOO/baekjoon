#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int N, M;
	int ary1[20000001] = { 0, };
	scanf("%d", &N);
	int num;
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		ary1[num + 10000000] += 1;
	}
	scanf("%d", &M);
	int ary2[M];
	for (int i = 0; i < M; i++) {
		scanf("%d", &ary2[i]);
	}
	for (int i = 0; i < M; i++) {
		printf("%d ", ary1[ary2[i] + 10000000]);
	}

	return 0;
}