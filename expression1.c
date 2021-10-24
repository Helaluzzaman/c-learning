#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i = 8, j = 5;
    char c = 'c', d= 'd';
    int result1, result2;
    result1 = (3*i - 2*j)%(2*d-c);
    result2 = 2*(i/5) + (4*(j-3)%(i + j -2));
    printf("result1= %d\n result2= %d",result1, result2);

    return 0;
}
