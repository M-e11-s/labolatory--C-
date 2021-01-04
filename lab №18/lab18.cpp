#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <time.h>


float perimetr(int a, int b)
{
	float P;
	P=4*(M_PI*a*b+(a-b))/(a+b);


	return P;
}


int main()
{
	int a,b;
	float P;
	printf("Enter a,b\n");
	printf("->");
	scanf("%d,%d", &a,&b);
	P=perimetr(a,b);
	printf("P: %f\n", P);

}