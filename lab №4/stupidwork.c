#include <stdio.h>
#include <math.h>

int main ()
{
    double x,y;
    printf("X: ");
    scanf("%lf", &x);
    printf("Y: ");
    scanf("%lf", &y);
    if ((pow(x,2)+pow(y,2)<16) && y<pow(-x,2) && y>=-2 || (pow(x,2)+pow(y,2)<16) && y>pow(-x,2) && y=<-2 ) 
    {
        printf ("True\n");
    }
    else
    {
        printf ("False\n");
    }
    
}