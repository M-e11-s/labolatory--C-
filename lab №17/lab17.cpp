#include <stdio.h>
#include <math.h>
#include <locale.h>

void Task_1()
{
  const int column=100, line=100;
  int n,m;
  int c=0,l=0;
  int arr[line][column];
  int next;
  printf ("input size of line\n");
  printf("->");
  scanf("%d", &n);
  printf ("input size of column\n");
  printf("->");
  scanf("%d", &m);

  for (l=0;l<n;l++)
    for (c=0;c<m;c++)
    {
      arr[l][c]= -100+rand()%201;
      printf("%2d", arr[c][l]);
      next++;
      if (n % next==0)
      {
        printf("\n\n");
      }
    }



}

int main ()
{
  int n;
  printf("TAsk number\n");
  printf("->");
  scanf("%d", &n);

{
  if (n==1)
  {
    Task_1();
  }
}while(n!=0);
}
