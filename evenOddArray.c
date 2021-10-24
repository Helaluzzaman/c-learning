#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n =7 , even[n], odd[n], i, j = 0, k=0;
    // printf
    // scanf("%d", &n);
    int a[] = { 23, 2, 3 , 4, 32, 4 , 7};
    for ( i =0; i< n ; i++){
        if(a[i] % 2 == 0){
            even[j] = a[i];
            j++;
        }else{
            odd[k] = a[i];
            k++;
        }
    }
    printf("\nEven: ");
    for ( i =0; even[i] != 0 ; i++){
        printf("%2d ", even[i]);
    }
    printf("\nOdd : ");
    for ( i =0; odd[i] != 0  ; i++){
        printf("%2d ", odd[i]);
    }
    return 0;
}
