#include <stdio.h>


int main(void)
{
	int A[19];
	int max = 0;
	int a;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &A[i]);

		if (max <= A[i]) {
			max = A[i];
			a = i;
		}
		
	}
	
	printf("%d\n", max);
	printf("%d\n", a + 1);
	

	return 0;
}