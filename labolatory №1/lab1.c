// library
#include <stdio.h>
#include <locale.h>
    int main ()
{

        float a,b,c,d;
        //Вывод имени и фамилии.
        printf ("Dukhopela Vadym\n");
        printf ("Духопела Вадим\n");
        printf ("=============================================\n\n\n");


        //Японские стихи.

        printf ("Я поднялся на холм, \nПолон грусти - и что же: \nТам шиповник в цвету!\n");
        printf ("=============================================\n\n\n");


        //Таблица.




        printf("a*a+b*b*b   |   x1*x2-x2*x3-x3*x2   |   b*b-4*a*c   |   1-x*x   |\n c*(a*b/(b*b))   |   ((a*b)*(a*b)/2+(a*b*c))   |   (a*b)+((a*b)*(a*b)/4)   |   (1/a)+(1/d)   |\n (1/((a*b)*(a*b)+(a-d)))   |   (1+(a-(b*b)/(4*(1/))))   |   ((1+(a*a*a*a)+2*d)/((2*a)+(4*a*d)-(d*d*d)   |   ((x+1)-(x-1))/2*x)\n ");
        printf ("=============================================\n\n\n");

        //Подсчет примера 

    

        printf ("Давай помогу тебе решить данное уравнение: (((a*b*c)*(a*b*c))+a-d)/(b*d) - (d/a)\n\n" );

        printf ("Input A:");
        scanf ("%f", &a );
        printf ("Input B:");
        scanf ("%f", &b );
        printf ("Input C:");
        scanf ("%f", &c );
        printf ("Input D:");
        scanf ("%f", &d );

        float  y = ((((a*b*c)*(a*b*c))+a-d)/(b*d) - (d/a));
        printf ( "y=%f\n", y);

        return (0);

}