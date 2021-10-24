#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fhander;
    float a, b;
    fhander = fopen("test1", "r+");
    fscanf(fhander, "%f" , &a);
    // fprintf(stdout, "%f", a);
    printf("%f", a);
    return 0;
}
