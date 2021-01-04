#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
	srand(time(NULL));
	float dd;
	clock_t start, finish;
	start = clock();
	const int n = 100000;
	int c, fl, size = n;
	int array[99999];
	for (int i = 0; i < n; i++) {
		array[i] = -1000 + rand() % 2001;
		printf("Array[%d]%d\n", i, array[i]);
	}
	int step = size / 2; 
	while (step > 0) { 
		for (int i = 0; i < (size - step); i++) { 
			int j = i; 
			while (j >= 0 && array[j] > array[j + step]) { 
				int c = array[j]; 
				array[j] = array[j + step]; 
				array[j + step] = c; j--; 
			} 
		}
		step = step / 2; 
	}
	for (int i = 0; i < n; i++) {
		printf("Array[%d]%d\n", i, array[i]);
	}
	finish = clock();
	dd = (float)(finish - start) / CLOCKS_PER_SEC;
	printf("Time = %f\n", dd);
}
