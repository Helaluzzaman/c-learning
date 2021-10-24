#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("\n-------------");
    printf("\n3a(i):\n");
    int i1 = 0, k;
    if(i1 ==0) goto label;
    for(k =0; k< 2; k++){
        printf("EEE-17 series\n");
        label: k = printf("7.0%d",i1);
    }

    printf("\n-------------");
    printf("\n3a(ii):\n");
    int i =-1;
    switch (i+4-1)
    {
    case 1:
        printf("case 1");
    case 2:
        printf("case 2");
    case 3: 
        printf("case 3");
        break;
    case 4: 
        printf("case 4");
        break;
    
    default:
        printf("Default case");
        break;
    }



    // 3 no output:000441212121212
    printf("\n-------------");
    printf("\n3a(iii):\n");

    int a, b=0;
    int c[10] = {1, 2, 3, 4, 6, 8, 10, 15, 0, 11};
    for(a = 0 ; a< 10; ++a){
        if((c[a]%4)==0){
            b+= c[a];
        }
        printf("%d", b);
    }
    return 0;
}
