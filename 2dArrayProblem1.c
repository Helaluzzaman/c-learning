#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[4][5]= {
        {1,2,3}, 
        {2},
        {1,2,2,2,2},
        {32,32}
    };
    int i, j;
    for(i = 0; i< 4; i++)
        for(j = 0 ; j < 4 ; j++)
            a[i][j] = a[i][j+1] + i*j+ i+j;

    for(i = 0; i< 4; i++){
        for(j = 0 ; j < 5 ; j++)
        printf("%2d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
