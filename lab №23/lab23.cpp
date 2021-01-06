#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<string.h>



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
              char *string;
              printf("Input text: ");
              gets(string);

              int len = strlen(string);
              printf("%d\n", len );
            }
    }
  } while (num != 0);
  return 0;
}
