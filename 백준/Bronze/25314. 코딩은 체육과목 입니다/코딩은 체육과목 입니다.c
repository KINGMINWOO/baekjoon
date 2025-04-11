#include <stdio.h>

int main(void)
{
	
	int N;
	scanf("%d", &N);
	for (int i = 4; i <= N; i = i + 4) {
		if (N % 4 == 0) {
			printf("long ");
		}
		
	}
	printf("int");

	return 0;
}