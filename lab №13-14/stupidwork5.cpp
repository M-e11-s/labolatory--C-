#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#define N 100

void massive(int arr[], int m) {
    printf("\n\n [");
    for (int l = 0; l < m; l++) printf("%4d", arr[l]);
    printf(" ]");
}

int main() {
    srand(time(NULL));
    int f[N], n = 20, a, b, tmp, tmp2, kl = 1, max = 0;
        for (int i = 0; i < n; i++) {
            f[i] = -1000 + rand() % 2001;
            printf("%4d", f[i]);
        }
        printf(" ]");
        for (int i = n - 1; i >= 0; i--) {
            max = 0;
            for (int k = 1; k <= i; k++) if (f[max] < f[k]) max = k;
            if (max != i) {
                tmp = f[0];
                f[0] = f[max];
                f[max] = tmp;
                tmp2 = f[0];
                f[0] = f[i];
                f[i] = tmp2;
                massive(f, n);
            }
        }
        massive(f, n);
}
