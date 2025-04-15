#include <stdio.h>
#include <string.h>

int main(void)
{
	
	char A[4], B[4];
	scanf("%s %s", A, B);
	/*char temp;
	temp = A[0];
	A[0] = A[2];
	A[2] = temp;
	
	temp = B[0];
	B[0] = B[2];
	B[2] = temp;*/

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

	//printf("%s %s", A, B);
	/*int i = strcmp(A, B);
	switch (i)
	{
	case 1: for (int j = 0; j < 3; j++) {
		printf("%d", A[j] - 48);
		}
		break;

	case -1: for (int j = 0; j < 3; j++) {
		printf("%d", B[j] - 48);
		}
		break;

	default:
		break;
	}*/

	return 0;
}