#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char country[] = "Bangladesh";
    char rev[12];
    // printf("%20.10s", country);
    int length = strlen(country);
    rev[length] = '\0';
    for(int i =0; country[i] != '\0'; i++){
        length--;
        rev[length]= country[i];
    }
    puts(rev);
    return 0;
}
