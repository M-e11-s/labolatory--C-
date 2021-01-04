#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

void add_arr(int size)
{
	int arr[size];
	for (int i=0;i<size;i++)
		arr[i]=-100000+rand()%200001;

}
void show_arr(int size)
{
	int i=0;
	int arr[size];
	if(i<size)
	{
		printf("%d\t",arr[i]);
		show_arr(size-1);
	}
	
}
void NumToByte(int n, int base, int out,int index)
{
	if(n>=1)
	{
		out+=(n%base)*pow(10,index);
    NumToByte(n/base,base,out,index++);
  }
	else
	printf("%d\n",out );
}


int Menu()
{
  printf("\n");
  int num;
  printf("------ Menu --------\n");
  printf("1)Task_1\n");
  printf("2)Task_2\n");
  printf("3)Task_2\n");
  printf("-> ");
  scanf("%d", &num);
  return num;
}

int main()
{
srand(time(NULL));
  
  int num;
  do {
    num = Menu();
    switch (num)
    {
    	case 1:
    	{
    		int a;
    		printf("Array size:");
    		scanf("%d",&a);
    		add_arr(a);
    		show_arr(a);
    		break;
    	}
    	case 2:
    	{
    		int n=0;
    		int base;
    		printf("Num -> "); scanf("%d",&n);
    		printf("Byte ->"); scanf("%d",&base);
    		int out=0;
    		for (int i=0;n>=1;i++)
    		{
    			out+=(n%base)*pow(10.,i);
    			n/=base;
    		}
    		printf("Num in byte -> %d",out );
    		break;
    	}
    	case 3:
    	{
    		int n=0;
    		int base;
    		int index=0;
    		printf("Num -> "); scanf("%d",&n);
    		printf("Byte ->"); scanf("%d",&base);
    		int out=0;

    		NumToByte(n,base,out,index);
    	}
    }
}while(num!=0);
return 0;
}