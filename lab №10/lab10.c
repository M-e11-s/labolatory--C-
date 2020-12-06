#include<stdio.h>
#include<locale.h>
#include<math.h>



int Menu()
{
  int num;
  printf("------ Menu --------\n");
  printf("1)Task_1\n");
  printf("2)Task_2\n");
  printf("-> ");
  scanf("%d", &num);
  return num;
}

int main()
{
  
  int num;
  int i=1;
  int S=0,b;
  do {
    num = Menu();
    switch (num)
    {
        case 1: 
                for(i=1; S<=100; i++)
                {
                    S+=pow(i,2);
                }
                printf("S= %d \n",S);
                break;
        case 2: 
                for(int h=1; h<=10; h++)
                {
                    
                    for(int j=1; j<=10; j++)
                    {
                      if (h>j)
                      printf ("*");
                    }
                    printf ("\n");
                    
                }
                
                break;

    }
    

  } while (num != 0);
  
    
  

  return 0;
}
