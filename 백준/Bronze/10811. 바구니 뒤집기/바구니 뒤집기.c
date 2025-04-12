#include <stdio.h>


int main(void)
{
	int N, M;
	int i, j, d;
	int array[100];
	scanf("%d %d", &N, &M);
	for (int h = 0; h < N; h++) {
		array[h] = h + 1;
	}

	for (int a = 0; a < M; a++) {
		scanf("%d %d", &i, &j);
		d = j;
		for (int b = i - 1; b < (i+j-1)/2; b++) {
			
			int temp;
			temp = array[b];
			array[b] = array[d - 1];
			array[d - 1] = temp;
			d--;
		}
	}

	for (int c = 0; c < N; c++) {
		printf("%d ", array[c]);
	}

	
	return 0;
}