//reverse string problem
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[100], rev[100];
    int l, i;
    gets(str);
    l = strlen(str);
    rev[l] = '\0';
    for( i =0 ; str[i] != '\0'; i++){
        l--;
        rev[l] = str[i];
    }
    puts(rev);
    return 0;
}
