#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row = 5, column = 8;
/*
    * * * * * * * * 
    *             * 
    *             * 
    *             * 
    * * * * * * * * 
*/

    printf("Enter two number:\n");
    scanf("%d %d", &row, &column);
    for(int i = 1 ; i<= row; i++){
        for(int j = 1; j <= column; j++){
            if  (i == 1|| i == row){
                printf("* ");
            }else if(j == 1 || j == column){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
