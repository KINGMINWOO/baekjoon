#include <stdio.h>
#include <string.h> //strlen()
#include <stdlib.h>

int main(void)
{
	char ary[80];
	
	int N;
	scanf("%d", &N);
	int count, sum;
	for (int i = 0; i < N; i++) {
		count = 0;
		sum = 0;
		scanf("%s", ary);
		for (int j = 0; j < strlen(ary); j++) {
			if (ary[j] == 'O') {
				count += 1;
			}
			else {
				count = 0;
			}
			sum += count;
		}
		printf("%d\n", sum);
	}
	

	return 0;
}