#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>

    int main ()
    {
        int menu;
        printf("Please input task`s number: ");
        scanf("%d", &menu);
            switch (menu)
            {
            case 1:
            {
                    //ах2 + bх + с = 0
                        printf ("Hello, i can help you to do stupid math ах2 + bх + с = 0\n");
                        float a,b,c,x1,x2,D,x;

                            printf("Input a: ");
                            scanf("%f", &a);
                            printf("Input b: ");
                            scanf("%f", &b);
                            printf("Input c: ");
                            scanf("%f", &c);

                            D = (pow(b,2)-(4*(a*c)));
                                    if (a==0)
                                    {
                                        x= -(c/b);
                                        printf("x=%.2f\n", x);
                                        printf ("===========================================================================================================\n");

                                    }

                                    else        if ( D>0)
                                                {
                                                    x1=(-b + sqrt(D))/(2*a);
                                                    printf("x1=%.1f\n", x1);
                                                    x2=(-b - sqrt(D))/(2*a);
                                                    printf("x2=%.1f\n", x2);
                                                    printf ("===========================================================================================================\n");
                                                }
                                                else if (D == 0)
                                                {
                                                        x1=(-b + sqrt(D))/(2*a);
                                                        printf("x1=%.1f\n", x1);
                                                        printf ("===========================================================================================================\n");
                                                        
                                                    }
                                                    else
                                                    {
                                                        printf("D cant be <0 \n");
                                                        printf ("===========================================================================================================\n");
                                                    }

            }
                break;

            case 2:
            {
                    float xr,y,z,g,U,h;
                    printf("Input X: ");
                    scanf("%f", &xr);
                    printf("Input Y: ");
                    scanf("%f", &y);
                    printf("Input Z: ");
                    scanf("%f", &z);    
                        U= (xr+y+z);
                        h= (xr*y*z);

                        g=(U>h)? (U+3):(h+3);
                        printf("max= %.2f\n", g);
            }
                break;

            case 3:
            {
                    double u, ma,mi,X1,Y,Z;
                    printf("Input X: ");
                    scanf("%lf", &X1);
                    printf("Input Y: ");
                    scanf("%lf", &Y);
                    printf("Input Z: ");
                    scanf("%lf", &Z);    
                    
                        if (X1>Y && X1>Z)
                            {
                            ma=X1; 
                            }
                        else if (Y>X1 && Y>Z)
                            {
                                ma=Y;
                            }
                            else 
                            {
                                ma=Z;
                            }
                        



                        if (X1<Y && X1<Z)
                            {
                            mi=X1; 
                            }
                        else if (Y<X1 && Y<Z)
                            {
                                mi=Y;
                            }
                            else 
                            {
                                mi=Z;
                            }


                    u=(pow(ma,2)-pow(2,X1)*mi)/(sin(2*X1)+(ma/mi));
                    printf("u=%lf\n", u);
                    printf ("===========================================================================================================\n");
            break;

            }
                            
                        
            
                default: printf("Im sorry but only 3 point \n\n\n");
            }

        return 0;
    }