#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, row =4;
    /*
--------------
      *   
    *   *   
  *   *   *   
*   *   *   *
--------------*/

    for(i = 0 ; i< row; i++){
        for(j=1 ; j<= row; j++){
            if(j < (row-i) || (j> (row + i))){
                printf("  ");
            }else
                printf("*   ");
        }
        printf("\n");
    }
    return 0;
}
