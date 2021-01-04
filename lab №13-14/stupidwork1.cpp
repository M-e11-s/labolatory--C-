#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

double random(double min, double max)
{
	return (double)(rand()) / RAND_MAX * (max - min) + min;
}
int main() {
	srand(time(NULL));
	float dd;
	clock_t start, finish;
	start = clock();
	const int n = 100000;
	float c, fl;
	float array[99999];
	for (int i = 0; i < n; i++) {
		array[i] = random(-1000, 1000);
		printf("Array[%d]%f\n", i, array[i]);
	}
	do {
		fl = 0;
		for (int i = 1; i < n; i++)
			if (array[i - 1] > array[i]) {
				c = array[i]; array[i] = array[i - 1];
				array[i - 1] = c;
				fl = 1;
			}
	} while (fl);
	for (int i = 0; i < n; i++) {
		printf("Array[%d]%f\n", i, array[i]);
	}
	finish = clock();
	dd = (float)(finish - start) / CLOCKS_PER_SEC;
	printf("Time = %f\n", dd);
}
