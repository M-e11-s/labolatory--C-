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
	const int n = 100000; float a, fl;
	int imin;
	float array[99999];
	for (int i = 0; i < n; i++) {
		array[i] = random(-1000, 1000);
		printf("Array[%d]%f\n", i, array[i]);
	}
	for (int i = 0; i < n - 1; i++) {
		imin = i;
		for (int j = i + 1; j < n; j++) if (array[imin] > array[j]) imin = j;
		a = array[i];
		array[i] = array[imin];
		array[imin] = a;
	}
	for (int i = 0; i < n; i++) {
		printf("Array[%d]%f\n", i, array[i]);
	}
	finish = clock();
	dd = (float)(finish - start) / CLOCKS_PER_SEC;
	printf("Time = %f", dd);
	return 0;
}
