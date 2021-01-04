#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<math.h>



int Menu()
{
  int num;
  printf("------ Menu --------\n");
  printf("1)Tast_1\n");
  printf("2)Tast_2\n");
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
          int a, b, i, L[11], tmp, x, fl, posCount = 0, negCount = 0;
          printf("Select range for a: "); 
          scanf("%d", &a); 
          printf("\nSelect range for b (a<b) : "); 
          scanf("%d", &b); 
          for (i = 0; i < 11; i++) 
          {
            L[i] = a + rand() % (b - a + 1);
            printf("%d\t", L[i]);
          }
          printf("\nOriginal array\n");

          
            do
              {
                fl = 0;
                for (int i = 0; i < 11-1; i++)
                  if (L[i + 1] > L[i]) {
                                        tmp = L[i];
                                        L[i] = L[i + 1]; 
                                        L[i + 1] = tmp; 
                                        fl = 1;
                                        } 
              } while (fl);
            
            for(i= 0; i < 11; i++)
            { 
              printf("%d\t", L[i]);
            }
            printf("\nChanged array"); 
            for (i = 0; i < 11; i++) 
            {
              if (L[i] > 0) posCount++;
              if (L[i] < 0) negCount++;
            }
            printf("\n%d positive number", posCount);
            printf("\n%d negative number", negCount);
            printf("\n");
            break;
        }

        case 2:
        {
          srand(time(NULL));
          int i, tmp, F[14], save0, a, b, fl = 1;
          printf("Select range for a: "); scanf("%d", &a);
          printf("Select range for b (a<b) : "); scanf("%d", &b); printf("\n\n");
          for (i = 0; i < 14; i++) 
          {
            F[i] = a + rand() % (b - a + 1); 
            printf("F[%d]: %d  ",i ,F[i]);
          }
          printf("\nOriginal array\n"); save0 = F[0];
          printf("First element is %d\n\n\n", save0); 
          do 
          {
          fl = 0;
          for (int i = 0; i < 14; i++) if (F[i + 1] > F[i]) 
          {
            tmp = F[i];
            F[i] = F[i + 1];
            F[i + 1] = tmp; fl = 1;
          }
          } while (fl);
          for (i = 0; i < 14; i++) 
            { 
              printf("F[%d]: %d  ", i, F[i]);
            }
          printf("\nChanged array\n");
          for (i = 0; i < 14; i++) 
            {
              if (F[i] == save0) 
              {
                tmp = i;
                break;
              }
            }
          printf("Position of first element(%d) in second array is F[%d]\n", save0, tmp);
        }

          
        
    }
    

  } while (num != 0);
  
    
  

  return 0;
}
