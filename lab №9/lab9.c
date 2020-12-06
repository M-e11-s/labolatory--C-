#include <stdio.h>
#include <locale.h>
#include <math.h>

int Menu()
{
  int num;
  printf("------ Menu --------\n");
  printf("1)Task_1\n");
  printf("2)Task_2\n");




  printf("0) Exit\n");
  printf("-> ");
  scanf("%d", &num);
  return num;
}

int main()
{
  int num;
  double a, min=0,sum; //Task_1
  double d,f,b; //Task_2
  do {
    num = Menu();
    switch (num)
    {
        case 1: 
                printf("=================================\n\n");
                do
                {
                    printf("->");
                    scanf("%lf", &a);
                    sum+=a;
                    if (min>a && a!=0) min=a;
                    

                }while(a !=0);
                printf("Sum: %.2f\n", sum);
                printf("Min: %.2f\n", min);
                sum=0;
                min=0;
                printf("=================================\n\n");
        break;

        case 2: 
                printf("============================================\n\n");
                printf ("A=13 \t"); printf ("B=25 \n\n"); 
                d= 13.0/25.0;
                f= 25.0/13.0;
                printf ("A/B: %f \t",d); printf ("B/A: %f \n\n", f);

                b=(13%25);
                printf ("(A residue B) * (B residue A): %f \n\n",b);
                printf("============================================\n\n");

                printf("Key: A/B: 0.520000\t 	B/A: 1.923077\t (A residue B) * (B residue A): 156\n\n\n\n  ");
                

        break;
        default: printf("1 or 2 \n\n"); break;


    }
  } while (num != 0);
  
  return 0;
}