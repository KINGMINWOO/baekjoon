#include <stdio.h>

int main(void)
{

	int H, M;
	scanf("%d %d", &H, &M);
	int h, m;
	int time = 60 * H + M - 45;
	if (time >= 0) {
		int time = 60 * H + M - 45;
		h = time / 60;
		m = time % 60;
	}
	else {
		int time2 = 24 * 60 + time;
		h = time2 / 60;
		m = time2 % 60;
	}
	printf("%d %d", h, m);

	return 0;
}