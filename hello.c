#include<stdio.h>
int main(){
    int i, j, x = 0;
    for ( i =0; i< 5; ++i){
        for(j = 0; j< i; ++i){
            x = i+j-1;
            printf("%d", x);
            break;
        }
        printf("\n x = %d", x);
    }
}