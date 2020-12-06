#include<stdio.h>
#include<locale.h>



int Menu()
{
  int num;
  printf("------ Menu --------\n");






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
    }
    

  } while (num != 0);
  
    
  

  return 0;
}
