#include <stdio.h>


int main(void)
{

	int T, R;
	scanf("%d", &T);
	char ary[20];
	for (int i = 0; i < T; i++) {
		scanf("%d %s", &R, ary);
		
		for (int i = 0; i < 20; i++) {
			
			if (ary[i] == '\0') {
				break;
			}
			for (int j = 0; j < R; j++) {
				printf("%c", ary[i]);
			}
			
		}
		printf("\n");
	}

	return 0;
}