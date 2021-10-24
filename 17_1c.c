#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m, n, y=0;
    for(m = 0 ; m< 3; m++){
        for(n=1; n< 3; n ++){
            y+=(2*m+n-2);
            printf("%d\n", y);
        }
    }
    printf("%d", y);
    return 0;
}
