#include <stdio.h>
#include <locale.h>

int main()
{
    int N, x = 1, V;
    while (x)
    {
        printf("1.Північь\n2.Південь\n3.Захід\n4.Cхід\n");
        scanf("%d", &V);
        switch(V)
        {
        case 1:printf("Робот рухається на Північ!\n");
            printf(" 1.Наліво \n 2.Направо \n 3.Продовжити рух \n");
        scanf("%d",&N);
        
        switch (N)
        {
        case 1: printf("Робот рухається в ЛІВУ сторону\n"); break;

        case 2: printf("Робот рухається в ПРАВУ сторону\n"); break;

        case 3: printf("Робот продовжує рух\n"); break;

        default: printf("Помилка!\n");
            
        }
        break;
        case 2: printf("Робот рухається на Південь!\n");
            printf(" 1.Наліво \n 2.Направо \n 3.Продовжити рух \n");
            scanf("%d", &N);

            switch (N)
            {
            case 1: printf("Робот рухається в ЛІВУ сторону\n"); break;

            case 2: printf("Робот рухається в ПРАВУ сторону\n"); break;

            case 3: printf("Робот продовжує рух\n"); break;

            default: printf("Помилка!\n");
                
            }
            break;
        case 3:printf("Робот рухається на Захід!\n");
            printf(" 1.Наліво \n 2.Направо \n 3.Продовжити рух \n");
            scanf("%d", &N);

            switch (N)
            {
            case 1: printf("Робот рухається в ЛІВУ сторону\n"); break;

            case 2: printf("Робот рухається в ПРАВУ сторону\n"); break;

            case 3: printf("Робот продовжує рух\n"); break;

            default: printf("Помилка!\n");
               
            }
            break;
        case 4: printf("Робот рухається на Схід!\n");
            printf(" 1.Наліво \n 2.Направо \n 3.Продовжити рух \n");
            scanf("%d", &N);

            switch (N)
            {
            case 1: printf("Робот рухається в ЛІВУ сторону\n"); break;

            case 2: printf("Робот рухається в ПРАВУ сторону\n"); break;

            case 3: printf("Робот продовжує рух\n"); break;

            default: printf("Помилка!\n");
             
            }
            break;
        default: printf("Помилка!\n");
        } 
        printf("Введіть 1, щоб змінити направлення руху робота, 0, щоб вийти ");
        scanf("%d", &x);
    }
}