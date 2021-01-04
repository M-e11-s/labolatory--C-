#include<stdio.h>
#include<locale.h>
#include<math.h>


void stars(int n)
{
  for (int i=0;i<n;i++)
  {
    printf("*");
    printf("\n");
  }
}

int hmcDigit(int num)
{
  int n;
  do{
    num=num/10;
    n++;
  }while(num>0 || num<0);
return n;
}
int DigitN(int num,int digit)
{
  int r;
  r=num/(pow(10,digit));
  r%=10;
  return r;
}
void changes(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    if(arr[i]>=0 && arr[i]<=3)
    {
      arr[i]=arr[i]*3;
    }
    else if(fabs(arr[i])>7)
          {
            arr[i]=arr[i]/4;
          }
  }
  for(int i=0;i<n;i++)
  {
    printf("%2d",arr[i] );
  }
}

void ShiftLeft3 (float a, float b, float c)
{
  float buffer;
  buffer=b;
  b=c;
  c=a;
  a=buffer;

  printf(" %.3f, %.3f, %.3f\n",a,b,c );
}


int Menu()
{
  int num;
  printf("------ Menu --------\n");
  printf("1)Task_1\n");
  printf("2)Task_2\n");
  printf("3)Task_3\n");

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
        int n;
        printf("How much stars: ");
        scanf("%d",&n);
        stars(n);
        break;
      }

      case 2:
      {
       int n;
       printf("NUm of symb:");
       scanf("%d",&n);
       int arr[n];
       for (int i=0;i<n;i++)
       {
        arr[i]=rand()%8;
        printf("%2d",arr[i] );
       }
       printf("\n");
       changes(arr,n);
       printf("\n");
       break;
      }

      case 3:
      {
        float A,B,C;
        
        printf("Input A,B,C: ");
        scanf(" %f, %f, %f",&A,&B,&C);
        ShiftLeft3(A,B,C);    
        break;  
      }
      case 4:
      {
        int N,K;
        int r;
        int n;
        

        printf("Input number\n");
        printf("-> ");
        scanf("%d", &K);
        printf("Which symbol do you want?\n");
        printf("Must be smaller than digits in number.\n");
        printf("-> ");
        scanf("%d", &N);
        n=hmcDigit(K);
        if (N>n)
        {
          printf("I cant find\n");
          break;
        }
        r=DigitN(K,N);
        printf("\n%d\n",r);
        
      }
    }

}while (num !=0);
return 0;
}


