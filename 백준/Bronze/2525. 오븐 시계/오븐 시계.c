#include <stdio.h>

int main(void)
{

	int H, M;
	int O;
	scanf("%d %d", &H, &M);
	scanf("%d", &O);
	int h, m;
	int time = 60 * H + M + O;
	if (time < 24 * 60) {
		h = time / 60;
		m = time % 60;
	}
	else {
		int time2 = time - 24 * 60 ;
		h = time2 / 60;
		m = time2 % 60;
	}
	printf("%d %d", h, m);

	return 0;
}