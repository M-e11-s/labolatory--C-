#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>

int mySqrt(int n)
{
n = n * n;
return n;
}

int main()
{
int a, c; 
printf("Input a: ");
scanf("%d", &a);
c = mySqrt(a);
printf("Square number is %d", c);
}