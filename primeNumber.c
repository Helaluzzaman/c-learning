#include<stdio.h>
#include<math.h>

void printLine(void);

int main(int argc, char const *argv[])
{
    printf("Enter a number ");
    int number;
    scanf("%d", &number);
    int flag = 1;
    for ( int i=2 ; i< sqrt(number)+1; i++){
        if(number %i==0){
            flag = 0;
            break;
        }
    }
    printLine();
    if(flag){
        printf("\n%d is prime number", number);
    }else
    printf("\n%d is not prime number", number);
    printLine();
    return 0;
}
void printLine(void){
    printf("\n--------------------------------");
}
