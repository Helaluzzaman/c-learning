#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, l;
    printf("Enter two number: \n");
    scanf("%d %d", &a, &b);
    if(a< b)
        l = a;
    else
        l = b;
    while ( (a%l != 0) || (b%l != 0))
    {
        /* code */
        printf("%d %d \n ", a%l, b%l);
        l--;
    }
    printf("%d and %d's gcd is = %d\n end.", a, b, l);

    return 0;
}
