#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>




int main() 
{
int cnt=1;
  
    do {
    int n = 1, pos10 = 0, pos5 = 0, value; 
    printf("Input 10 numbers: \n"); 
    scanf("%d", &value);
    do {
    if (value > 10) pos10++;
    if (value > 5) pos5++; 
    scanf("%d", &value); 
    n++;
    } while (n < 10);
        if (pos10 > 4) printf("Karaul!\n");
        else printf("pos10: %d\npos5: %d\n", pos10, pos5); 
    } while (cnt != 2);
}


int timer() 
{ 
int n;
double seconds;
printf( "How many seconds? \n" );
scanf( "%lf" , &seconds); 

sleep(seconds * 1000);
beep(12,200);

return 0;
}