#include <stdio.h>


int main(void)
{
	int N;
	double sum = 0;
	int max = 0;
	double ave;
	double array[1000] = { 0 };
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%lf", &array[i]);
		
	}

	for (int i = 0; i < N; i++) {
		if (max <= array[i]) {
			max = array[i];
		}
	}
	for (int i = 0; i < N; i++) {
		array[i] = array[i] / max * 100;
		sum += array[i];
	}
	ave = sum / N;

	printf("%lf", ave);



	return 0;
}