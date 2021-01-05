#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
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
              int line, column;
              int next=0;
              printf("Line-> ");
              scanf("%d",&line);
              printf("Column-> ");
              scanf("%d",&column);
              int matrix[line][column];
              for (int l=0;l<line;l++)
                for (int c=0;c<column;c++)
                {
                  matrix[l][c]=-100+rand()%201;
                }
              for (int l=0;l<line;l++)
                for (int c=0;c<column;c++)
                {
                  printf("%3d\t",matrix[l][c] );
                  next++;
                  if (next%line==0)
                  {
                    printf("\n\n");
                  }

                }
              printf("\n");
              int *pfirst,*plast,tmp;
              pfirst=&matrix[0][0];
              plast=&matrix[line-1][column-1];

              tmp=*pfirst;
              *pfirst=*plast;
              *plast=tmp;
              
              
              for (int l=0;l<line;l++)
                for (int c=0;c<column;c++)
                {
                  printf("%3d\t",matrix[l][c] );
                  next++;
                  if (next%line==0)
                  {
                    printf("\n\n");
                  }

                }
              printf("\n");

            }
    }
  } while (num != 0);
  return 0;
}
