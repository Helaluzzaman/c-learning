#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int n = 3;
    char *mptr;
    scanf("%d", &n);
    printf("now n is : %d\n", n);
    mptr = (char* )malloc(n* sizeof(int));
    printf("%ld\n", sizeof(mptr));
    scanf("%s", mptr);
    puts(mptr);
    return 0;
}
