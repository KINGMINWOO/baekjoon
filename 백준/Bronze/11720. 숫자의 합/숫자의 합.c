#include <stdio.h>


int main(void)
{
	int N;
	int sum = 0;
	char array[100];
	scanf("%d", &N);
	scanf("%s", array);
	
	
	for (int i = 0; i < N; i++) {
		sum += array[i] - 48;
	}
	printf("%d", sum);
	
	
	return 0;
}