#include <stdio.h>


int main(void)
{
	char S[100];
	int count = 0;
	
	scanf("%s", S);
	for (int i = 0; i < 100; i++) {
		if (S[i] !='\0') {
			count += 1;
		}
		else {
			break;
		}
	}
	printf("%d", count);

	return 0;
}