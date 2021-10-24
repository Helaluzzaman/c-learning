#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a, b;
    FILE *file;
    file = fopen("test1", "w+");
    printf("Enter two numbers: \n");
    scanf("%f--%f ", &a, &b);
    fprintf(file, "%f and %f", a, b);
    printf("a = %f, b = %f\n", a, b);
    return 0;
}
