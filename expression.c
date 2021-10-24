#include<stdio.h>
int main(int argc, char const *argv[])
{
    float result;
    int input;
    result = 1.0/3.0* 3.0;
    printf("%f\n", result);
    result = 1.0/0* 3.0;
    printf("%f\n", result);
    result = 1.0/0* 3.0;
    printf("%d\n", result);
    scanf("%d", &input );
    printf("%d", input);
    return 0;
}
