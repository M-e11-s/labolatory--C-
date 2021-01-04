#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int sum(int n, int a[])
{
int i, s = 0;
for (i = 0; i < n; i++) s+= a[i];
return s;
}

int max(int a, int b)
{
if (a >= b) return a; else return b;
}

int min(int a, int b)
{
if (a <= b) return a; else return b;
}

int mult(int n, int a[])
{
int i, m = 1;
for (i = 0; i < n; i++) m *= a[i];
return m;
}

int main()
{
srand(time(NULL)); 
int choice, i;
int n, array[50];
printf("Select size of the array: "); 
scanf("%d", &n);
printf("\n");
for (i = 0; i < n; i++)
{
array[i] = -10 + rand() % 21;
}
for (i = 0; i < n; i++)
{
printf("A[%d]: %d ", i+1, array[i]);
}
printf("\nWhich function to call?\n1 - Array sum\n2 - Array max\n3 - Array min\n4 - Array mult\n-> ");
scanf("%d", &choice);
switch (choice)
{
case 1:
{
int s;
s = sum(n, array);
printf("Sum of the array is %d", s);
} break; 
case 2:
{
int c = array[0];
for (int i = 0; i < n; i++) c = max(array[i], c);
printf("Maximum of the array is %d\n", c);
} break; 
case 3:
{
int c = array[0];
for (int i = 0; i < n; i++) c = min(array[i], c);
printf("Minimum of the array is %d\n", c);
} break; 
case 4:
{
int m;
m = mult(n, array);
printf("Sum of the array is %d\n", m);
} break;
default: printf("Wrong number");
}
}