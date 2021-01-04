#include<stdio.h>
#include<locale.h>
#include<math.h>



int Menu()
{
  int num;
  printf("------ Menu --------\n");
  printf("1)Task_1\n");





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
            }
    }
    

  } while (num != 0);
  
    
  

  return 0;
}
