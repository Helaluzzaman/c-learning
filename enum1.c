#include<stdio.h>
int main(int argc, char const *argv[])
{
    enum priority {High = 2, Medium = 34, Low = 23};
    enum priority p, m, l;
    p = High;
    printf("%d\n", p);
    p = Low;
    printf("%d\n", p);
    p = High;
    m = Medium;
    l = Low;
    printf("priority High = %d, priority Medium = %d, priority low = %d ", p, m, l);
    return 0;
}
