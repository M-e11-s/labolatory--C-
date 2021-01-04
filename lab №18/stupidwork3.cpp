#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

float reverse(int n)
{
int m = 0;
while (n)
{
m = m * 10 + n % 10;
n /= 10;
}
return m;
}

int main()
{
int a, c; printf("Input a: ");
scanf("%d", &a);
c = reverse(a);
printf("Reversed number is %d", c);
}