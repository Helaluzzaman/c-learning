#include<stdio.h>
int main(int argc, char const *argv[])
{

// * 
// * * 
// * * * 
// * * * * 
    int i, j;
    int row = 4+1;
    for(i = 0 ; i< row; i++){
        for(j=0; j< i; j++){
            printf("* ");
        }
        printf("\n");
    }

    printf("-------------------------\n");
//           *         
//         * * *       
//       * * * * *     
//     * * * * * * *   
//   * * * * * * * * * 

    for(i = 0 ; i< row; i++){
        for(j=0 ; j< 2*row; j++){
            if(j < (row-i) || (j> (row + i))){
                printf("  ");
            }else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}
