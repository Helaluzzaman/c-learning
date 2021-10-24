#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t1 = 0, t2 = 1, nextTerm = t1 + t2, n;
    printf("Enter total term number:");
    scanf("%d", &n);
    if(n<= 0)
        return 0;
    if(n == 1){
        printf("%d", t1);
    }
    if (n == 2)
    {
        printf("%d %d", t1, t2);
    }
    else{
        printf("%d %d ", t1, t2);
        for (int i = 2; i < n; i++)
    {
        printf("%d ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    }
    return 0;
}
void printNthTerm(int n){
    
    
}
