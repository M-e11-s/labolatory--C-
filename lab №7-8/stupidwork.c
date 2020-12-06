#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    float a,b,c=0;
    int mon=1;
    float sum=0;
    
    printf ("Размер стипендии: ");
    scanf("%f", &a);
    printf ("Примерные затраты на месяц: ");
    scanf("%f", &b);
        if (a<b)
        {
            for (;mon<=10; mon++)
            {
                b=b+(b*0.03);
                c=b-a;
                sum+=c;
                
                
            }
            printf("На 10 месяцев у родителей нужно попросить: %f\n", sum);

        }
        else printf("Не парься на все хватит\n");

}