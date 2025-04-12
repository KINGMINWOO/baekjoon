#include <stdio.h>


int main(void)
{
	int T;
	char S[1000];
	int count = 0;
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++) {
		scanf("%s", S);
		for (int j = 0; j < 1000; j++) {
			if (S[j] !='\0') {
				count += 1;
			}
			else {
				break;
			}
		}
		printf("%c%c\n", S[0], S[count - 1]);
		count = 0;
		
	}
	

	return 0;
}