#include<stdio.h>
#include<locale.h>
#include<math.h>
#include <time.h>

void FillArr(int arr[],int size)
{
  srand(time(NULL));
  for (int i=0;i<size;i++)
    *(arr+i)=-100+rand()%201;
}
void reFillArr(int arr[],int size)
{
  int buffer;
  for (int i=0;i<size/2;i++)
  {
    buffer=*(arr+size-i);
    *(arr+size-i)=*(arr+i);
    *(arr+i)=buffer;
  }
}
void del_el(int arr[],int size,int what_d)
{
  for (int i=what_d;i<size;i++)
  {
    *(arr+i)=*(arr+i+1);

  }
  
}
void add_element(int arr,int size)
{
  *(arr+2)=5343;
  for (i=4;i<size;i++)
  {
    buffer=*arr+i
    *arr+i+1=*arr+i;
  }
}

int Menu()
{
  int num;
  printf("------ Menu --------\n");
  printf("1)Task_1\n");
  printf("2)Task_2\n");
  printf("3)Task_3.1\n");
  printf("4)Task_3.2\n");
  printf("-> ");
  scanf("%d", &num);
  return num;
}

int main()
{
  
  int num;
  do {
    num = Menu();
    switch (num)
    {
        case 1:
            {
              int *p;
              int x=100,y=-3,m[5]={23,2421,446,433};
              p=&y;
              printf("Y=%d\n",*p);
              x=*p;
              printf("X=%d\n",x);
              y=7;
              printf("p=%p\n",p);
              *p+=5;
              printf("Y=%d\n",y );
              break;
            }

        case 2:
        {
          const int x=10;
          int arr[x];
          FillArr(arr,x);
          for (int i=0;i<x;i++)
          {
            printf("%d\t",arr[i] );
          }
          printf("\n");
          int size=x;
          int size_byte=4*x;
          printf("size:%d    size_byte:%d\t",size,size_byte );
          printf("\n");
          printf("First:%p   Last:%p\t",arr,(arr+x-1));
          printf("\n");
          reFillArr(arr,x);
          for (int i=0;i<x;i++)
          {
            printf("%d\t",*(arr+i) );
          }
          printf("\n");
          break;
        }

        case 3:
        {
          int size;
          printf("Arr size:");
          scanf("%d",&size);
          int arr[size];
          FillArr(arr,size);
          for (int i=0;i<size;i++)
          {
            printf("%d\t",*(arr+i) );
          }
          printf("\n");
          int element;
          printf("Del_Element ->"); scanf("%d",&element);
          del_el(arr,size,element);
          for (int i=0;i<size-1;i++)
          {
            printf("%d\t",*(arr+i) );
          }
          printf("\n");
          break;
        }
        case 4:
        {
          int size;
          printf("Arr size:");
          scanf("%d",&size);
          int arr[size];
          FillArr(arr,size);
          add_element(arr,size);
          break;
        }
    }
    

  } while (num != 0);
  return 0;
}
