#include <stdio.h>


int main(void)
{
	int N;
	int A[1000000];
	scanf("%d", &N);
	int max = -1000001;
	int min = 1000001;

	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
		
		if (max <= A[i]) {
			max = A[i];
		}
		
		if (min >= A[i]) {
			min = A[i];
		}
	}
	
	printf("%d %d", min, max);
	

	return 0;
}