#define _USE_Math_Defines
#include <stdio.h>
#include <math.h>

int main()
        
{
        //num_swap
        printf("PI=%.20f\n", M_PI);
        int num_1,num_2,num_3,num_4;
        printf("Input A:");
        scanf("%d", &num_1);
        printf("Input B:");
        scanf ("%d", &num_2);
        printf ("Input C:");
        scanf ("%d", &num_3);
        printf ("Input D:");
        scanf ("%d", &num_4);

        //A swap B
        num_1= num_1+num_2;
        num_2= num_1-num_2;
        num_1= num_1-num_2;
        printf (" A<=>B: a=%d,b=%d\n", num_1, num_2);
        // D swap C
        num_4= num_4+num_3;
        num_3= num_4-num_3;
        num_4= num_4-num_3;
        printf (" D<=>C: d=%d,c=%d\n", num_4, num_3);
        //A swap D
        num_1= num_1+num_4;
        num_4= num_1-num_4;
        num_1= num_1-num_4;
        printf (" A<=>D: a=%d,d=%d\n", num_1, num_4);

        printf ("====================================================================================================\n\n\n");




        //stupid_math
        double x,y,z;
        printf("Input X:");
        scanf("%lf", &x);
        printf("Input Y:");
        scanf ("%lf", &y);
        printf ("Input Z:");
        scanf ("%lf", &z);

        double s = (sqrt(10*(pow(x,1/3)+pow(x, y+2)))*sin(z-fabs(x-y)));
        printf("s=%f\n", s);

        printf ("====================================================================================================\n\n\n");


        //rad_t0_deg

        double rad, deg;
        printf("Input Rad_Angle= ");
        scanf("%lf", &rad);
                if (rad>0 && rad<6.2830)
                        {
                                  deg = rad*180/M_PI; printf("deg=%lf\n", deg);
                        }
                else
                        {
                                  printf("Sorry but i cant do this operation you must enter the number from 0 to 6.2830\n");
                        }



        printf ("====================================================================================================\n\n\n");
                



        //3angle pizdec 

                //1)
        double a1,b1,c1;

        printf("Input A:");
        scanf("%lf", &a1);
        printf("Input B:");
        scanf("%lf", &b1);
        printf("Input C:");
        scanf("%lf", &c1);


        float P, p;
        P = a1+b1+c1;
        p = P/2;
        printf ("P=%.1f \n", P);

        float S;
        S = sqrt(p*(p-a1)*(p-b1)*(p-c1));
        printf ("S=%.2f \n", S);

        float h;
        h = (2*S)/a1;
        printf("h=%.2f \n", h);


        double rangle1 = cos((pow(a1,2)+pow(b1,2)-pow(c1,2))/(2*a1*b1));
        printf("rangle1=%f\n", rangle1);
        double angle1  = (rangle1*180)/M_PI;
        printf("angle1=%f \n", angle1);
        double rangle2 = cos((pow(c1,2)+pow(b1,2)-pow(a1,2))/(2*c1*b1));
        printf("rangle2=%f\n", rangle2);
        double angle2  = (rangle2*180)/M_PI;
        printf("angle2=%f \n", angle2);
        /*double angle3 = 180.0-(angle1+angle2);
        printf("angle3=%f \n", angle3); */
        double rangle3 = cos((pow(c1,2)+pow(a1,2)-pow(b1,2))/(2*c1*a1));
        printf("rangle3=%f\n", rangle3);
        double angle3  = (rangle3*180)/M_PI;
        printf("angle3=%f \n", angle3);


        printf ("====================================================================================================\n\n\n");


                //2)
        double h_2;




















        






        return (0);

}