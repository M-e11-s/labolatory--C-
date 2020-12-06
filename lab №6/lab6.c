#include <math.h>
#include <stdio.h>

int main ()
{
    float x,y;
        printf("Input X: ");
        scanf("%f", &x);
        printf("Input Y: ");
        scanf("%f", &y);
            if (x<-1 && y<0 && -x+y<-1 || x>-1 && x<0 && y<1 && y>0 && -x+y<-1 || x<0 && y>1 && -x-y>-1 || x<1 && x>0 && y<0 && x+y<1 || x>1 && y>1 && -x-y>-1 && -x+y<1 )
            {
                printf("True\n\n\n");
            }
            else 
                printf("False\n\n\n");

    int num,remainder;
        printf("Input number: ");
        scanf("%d", &num);
        remainder = num%2;
        remainder==0? printf("num/2\n\n\n"):printf("num not /2\n\n\n");















    return 0;
}