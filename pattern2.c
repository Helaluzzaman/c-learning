#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row, column, num_of_row;
    int chr =65;

    printf("Enter the number of row:");
    scanf("%d", &num_of_row);
    for( row = 1; row <= num_of_row; row++){
        for( column = 1 ; column <= row; column ++){
            printf("%c ", chr++);
        }
        printf("\n");
    }
    for( row = num_of_row-1; row >= 1; row--){
        for( column = 1 ; column <= row; column ++){
            printf("%c ", chr++);
        }
        printf("\n");

    }
    return 0;
}
