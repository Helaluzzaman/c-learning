#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    double x = 23.47;
    printf("ceil of %lf is = %lf\n", x, ceil(x));
    printf("floor of %lf is = %lf\n", x, floor(x));
    printf("Enter value for calculation of sine\n");
    double degree, radiun, result;
    scanf("%lf", &degree);
    radiun = (M_PI / 180 * degree);
    printf("sin(%.2lf) is = %.2lf", degree, sin(radiun));
    return 0;
}
