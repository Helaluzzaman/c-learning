#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[] = { 2, 3, 4 ,5 };
    int i = 0;
    a[++i] = 10;
    printf("i = %d\n", i);
    printf("Size of int: %lu\n", sizeof(i));

    for(int j = 0; j< 4; j++)
    printf("%d \n", a[j]);
    return 0;
}
