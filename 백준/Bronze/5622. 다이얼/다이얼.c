#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main(void)
{
	char ary[17];
	scanf("%s", ary);
	int i = 0;
	int count = 0;
	while(ary[i] != '\0'){
		if (ary[i] >= 'A' && ary[i] <= 'C') {
			count += 3;
		}
		else if (ary[i] >= 'D' && ary[i] <= 'F') {
			count += 4;
		}
		else if (ary[i] >= 'G' && ary[i] <= 'I') {
			count += 5;
		}
		else if (ary[i] >= 'J' && ary[i] <= 'L') {
			count += 6;
		}
		else if (ary[i] >= 'M' && ary[i] <= 'O') {
			count += 7;
		}
		else if (ary[i] >= 'P' && ary[i] <= 'S') {
			count += 8;
		}
		else if (ary[i] >= 'T' && ary[i] <= 'V') {
			count += 9;
		}
		else if (ary[i] >= 'W' && ary[i] <= 'Z') {
			count += 10;
		}
		i++;
	}
	printf("%d", count);

	return 0;
}