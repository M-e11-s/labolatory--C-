// library
#include <stdio.h>
#include <locale.h>
    int main ()
{

        float a,b,c,d;
        //Вывод имени и фамилии.

        printf ("Духопела Вадим\n");
        printf ("=============================================\n\n\n");


        //Японские стихи.

        printf ("Я поднялся на холм, \nПолон грусти - и что же: \nТам шиповник в цвету!\n");
        printf ("=============================================\n\n\n");


        //Подсчет примера 

    

        printf ("Давай помогу тебе решить данное уравнение: ((a*b*c)ˆ2+a-d)/(b*d) - (d/a)\n\n" );

        printf ("Input A:");
        scanf ("%f", &a );
        printf ("Input B:");
        scanf ("%f", &b );
        printf ("Input C:");
        scanf ("%f", &c );
        printf ("Input D:");
        scanf ("%f", &d );

        float y = ((((a*b*c)*(a*b*c))+a-d)/(b*d) - (d/a));
        printf ("y=%f", y);

        return (0);

}