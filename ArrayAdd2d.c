#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[2][2]= {1,2,3,4};
    int b[2][2]= {5,6,7,8};
    int c[2][2];
    for(int row =0 ; row < 2; row++){
        for(int col=0; col< 2; col++){
            c[row][col] = a[row][col] + b[row][col]; 
        }
    }
    for(int row =0 ; row < 2; row++){
        for(int col=0; col< 2; col++){
            printf("%d ", c[row][col]);
        }
        printf("\n");

    }
    return 0;
}
