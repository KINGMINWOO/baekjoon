#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	
	char A[4], B[4];
	scanf("%s %s", A, B);

	for (int i = 2; i >= 0; i--) {
		if (A[i] > B[i]) {
			for (int j = 2; j >= 0; j--) {
				printf("%d", A[j]- 48);
			}
			break;
		}
		if (A[i] < B[i]) {
			for (int j = 2; j >= 0; j--) {
				printf("%d", B[j] - 48);
			}
			break;
		}
	}

	return 0;
}