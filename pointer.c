#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x =10, *p1, **p2;
    p1 = &x;
    p2 = &p1;
    printf("x = %d, *p1 = %d, **p2 = %d, p1 = %u, p2 = %u", x, *p1, **p2, p1, p2);
    return 0;
}
