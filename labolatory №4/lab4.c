#include <stdio.h>
#include <math.h>

    int main ()
    {
        //ах2 + bх + с = 0
        printf ("Hello, i can help you to do stupid math ах2 + bх + с = 0\n");
        float a,b,c,x1,x2,D,x;

            printf("Input a: ");
            scanf("%f\n", &a);
            printf("Input b: ");
            scanf("%f\n", &b);
            printf("Input c: ");
            scanf("%f\n", &c);

            D = (pow(b,2)-(4*(a*c)));
            printf("D=%f", D);
                    if (a==0)
                    {
                        x= -(c/b);
                        printf("x=%.2f\n", x);

                    }

                    else        if ( D>0)
                                {
                                    x1=(-b + sqrt(D))/(2*a);
                                    printf("x1=%.1f\n", x1);
                                    x2=(-b - sqrt(D))/(2*a);
                                    printf("x2=%.1f\n", x2);
                                }
                                else if (D == 0)
                                     {
                                        x1=(-b + sqrt(D))/(2*a);
                                        printf("x1=%.1f\n", x1);
                                     }
                                     else  printf("D cant be <0 \n");
        









               /* if (D>0) 
                    {
                        x1=(-b + sqrt(D))/(2*a);
                        printf("x1=%f\n", x1);
                        x2=(-b - sqrt(D))/(2*a);
                        printf("x2=%f\n", x2);
                    }
                else if (D == 0)
                        {
                            x1=(-b + sqrt(D))/(2*a);
                            printf("x1=%f\n", x1);
                        }
                     else  printf("D cant be <0 \n");  */

        printf ("===========================================================================================================");












        return 0;
    }