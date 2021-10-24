#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int x = 16, y = 5;
    char number[] = "12";
    int year = atoi(number);
    printf("%d\n", year);
    printf("%d", (int)sqrt(x));
    printf("%f", exp(x));
    printf("\ncos 180 = %+010.2e", cos((M_PI))); // in radiun.
    printf("\ncos 90  = %+010.2f", cos(M_PI/2));
    return 0;
}