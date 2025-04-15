#include <stdio.h>


int main(void)
{
	char ary[1000000];

	scanf("%[^\n]s", ary);
	//printf("%s", ary);
	int count = 0;
	int i = 0;
	while (ary[i] != '\0') {
		if (ary[i] > ' ') {
			if (ary[i + 1] == ' ' || ary[i + 1] == '\0') count += 1;
		}
		i++;
	}
	printf("%d", count);
	
	return 0;
}