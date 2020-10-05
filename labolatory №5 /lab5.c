#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
   int menu;
   double x,y,a;
   int function;
   int day;
   printf("Input menu: ");
   scanf("%d", &menu);
   switch (menu)
   {
   case 1:
            printf("Input day: ");
            scanf("%d", &day);
            switch (day)
            {
            case 1: printf ("Понеділок\n"); 
                    printf("=========================================================================================\n");
                break;
            case 2: printf ("Вівторок\n");
                    printf("=========================================================================================\n");
                break;
            case 3: printf ("Середа\n");
                    printf("=========================================================================================\n");
                break;
            case 4: printf ("Четвер\n");
                    printf("=========================================================================================\n");
                break;
            case 5: printf ("П'ятниця\n");
                    printf("=========================================================================================\n");
                break;
            case 6: printf ("Субота\n");
                    printf("=========================================================================================\n");
                break;
            case 7: printf ("Неділя\n");
                    printf("=========================================================================================\n");
                break;
            
            default:    printf("Sorry, but menu only can be 1 or 2");
                break;
            }
            break;
   case 2:
        printf("Input №function: ");
        scanf("%d", &function);
            switch (function)
            {
            case 1:
                printf("Please, input x: ");
                scanf("%lf", &x);
                printf("Please, input y: ");
                scanf("%lf", &y);
                    if (y<2*x)
                        {   
                            a =pow(fabs(pow(x,2)+y),3);
                            printf("a=%lf\n", a);
                            printf("=========================================================================================\n");
                        }
                    
                    else
                     {
                        printf("Sorry, must be y>2*x\n");
                        printf("=========================================================================================\n");
                     }
                    

                break;
            case 2:
                printf("Please, input x: ");
                scanf("%lf", &x);
                printf("Please, input y: ");
                scanf("%lf", &y);
                    if (y>2*x)
                    {
                        a =tan(x)+pow(sin(x),2);
                        printf("a=%lf\n", a);
                        printf("=========================================================================================\n");
                    }
                    else
                    {
                            printf("Sorry, must be y>2*x\n");
                            printf("=========================================================================================\n");
                    }
                break;
            case 3:
                printf("Please, input x: ");
                scanf("%lf", &x);
                printf("Please, input y: ");
                scanf("%lf", &y);
                a = pow(x, 1/3)*sin(x);
                printf("a=%lf\n", a);
                printf("=========================================================================================");


                break;
            }
    break;

        



   
   default: printf("Sorry, but menu only can be 1 or 2\n");
       break;
   }
}