#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num[]= { 2,3};
    printf("%d", *num);
    printf("%d", *(num+1));
    return 0;
}
