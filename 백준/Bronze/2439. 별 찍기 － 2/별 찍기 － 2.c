#include <stdio.h>

int main(void)
{
	//     *
	//    **
	//   ***
	//  ****
	// *****
    int N;
    scanf("%d", &N);

	for (int i = 1; i <= N; i++) {

		for (int h = 1; h <= N - i; h++) {
			printf(" ");
		}

		for (int j = 1; j <= i; j++) {

			printf("*");
		}
		printf("\n");
	}
	return 0;
}