#include<stdio.h>
#include<locale.h>
#include<math.h>



int Menu()
{
  int num;
  printf("-------- Menu --------\n");
  printf("1)Task_1(with while)\n");
  printf("2)Task_1(with for)\n");
  printf("3)Task_2(with while)\n");
  printf("4)Task_2(with for)\n");
  printf("5)Task_3(with while)\n");
  printf("6)Task_3(with for)\n");
  printf("-> ");
  scanf("%d", &num);
  return num;
}

int main()
{
  
  int num;
  int sum_poz=0, sum_neg=0, value_poz=0, value_neg=0, shit, i=1;
  double n, first=0,second=0, t=1.0;
  float a=8 ,c,b=1, d=3,e,f; int function;
  do {
    num = Menu();
    switch (num)
    {
        case 1: 
                
                printf("Введи 10 чисел: \n");
                while (i<=10)
                {
                scanf("%d", &shit);
                if (shit > 0)
                {
                    sum_poz += shit;
                    value_poz ++;
                }
  
                if (shit < 0)
                {
                    sum_neg += shit;
                    value_neg ++;
                }
                i++;
                }
                printf("sum_poz: %d \nvalue_poz: %d\n", sum_poz, value_poz);
                printf("sum_neg: %d \nvalue_neg: %d\n", sum_neg, value_neg);
                break;

        case 2:
                printf("Введи 10 чисел\n");
                for(; i<=10; i++)
                {
                  scanf("%d", &shit);
                  if (shit > 0)
                  {
                      sum_poz += shit;
                      value_poz ++;
                  }
    
                  if (shit < 0)
                  {
                      sum_neg += shit;
                      value_neg ++;
                  }
                }
                printf("sum_poz: %d \nvalue_poz: %d\n", sum_poz, value_poz);
                printf("sum_neg: %d \nvalue_neg: %d\n", sum_neg, value_neg);
                break;

        case 3: 
                printf("Please input n: ");
                scanf ("%lf", &n);
                while (t <= n)
                {
                    first = (t+1)/t;
                    second += first;
                    t++;
                }
                printf("sum= %.2f\n", second);
                break;
        case 4:
                printf("Please input n: ");
                scanf ("%lf", &n);
                for (; t<=n; t++)
                {
                  first = (t+1)/t;
                  second += first;
                }
                printf("sum= %.2f\n", second);
                break;
          case 5:
                printf("Switch function 1 or 2:");
                scanf("%d", &function);
                  switch (function)
                  {
                    case 1: 
                            while(a<=9)
                            {
                              c=(2*a+1)/(sqrt(a));
                              printf("Answer %.0lf: %lf\n", b,c);
                              b++;
                              a++;
                            }
                    break;

                    case 2: 
                            while(d<=4.5)
                            {
                              e= 1/(1+ pow((2.7182818284),-d));
                              printf("Answer %.0lf: %lf\n", b,e);
                              b++;
                              d+= 0.1;
                            }
                    break;


                  }
            break;
            case 6:
                  {
                     printf("Switch function 1 or 2:");
                     scanf("%d", &function);
                     switch (function)
                     {
                       case 1:
                              for(;a<=9;a++)
                              {
                                c=(2*a+1)/(sqrt(a));
                                printf("Answer %.0lf: %lf\n", b,c);
                                b++;
                              }
                              break;
                       case 2:
                              for(;d<=4.5;d=d+0.1)
                              {
                                e= 1/(1+ pow((2.7182818284),-d));
                                printf("Answer %.0lf: %lf\n", b,e);
                                b++;
                              }
                     }
                  }


                


    }
    

  } while (num != 0);
  
    
  

  return 0;
}