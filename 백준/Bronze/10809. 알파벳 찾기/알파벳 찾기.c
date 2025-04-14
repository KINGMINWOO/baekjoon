#include <stdio.h>

int main(void)
{

	char S[100] = { 0 };
	int P[26];
	for (int i = 0; i < 26; i++) {
		P[i] = -1;
	}
	scanf("%s", S);
	for (int i = 97; i <= 122; i++) {
		for (int j = 0; j < 100; j++) {
			if (S[j] == i) {
				P[i - 97] = j;
				break;
			}

		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", P[i]);
	}

		return 0;
}