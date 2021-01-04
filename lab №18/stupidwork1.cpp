#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>

float combine(int a, int b)
{
double d; 
while (b) {
d = 0.1 * (b % 10 + 0.1 * a);
b /= 10;
}
d += a;
 return d;
}

int main()
{
unsigned int a, b; float c;
printf("Input a, b: ");
scanf("%d, %d", &a, &b);
c = combine(a, b);
printf("Combined number is %f", c);
}