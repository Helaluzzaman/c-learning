/*
Questions: EEE 19 (8b)
    Find out the length of a string. Avoid using strlen() library funciton.
*/
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[100] ;
    gets(str);
    int length = 0 ,i = 0;
    // length = sizeof(str)/ sizeof(char); will not work.
    while (str[length] != '\0')
    {
        length ++;
    }
    
    printf("%d using strlen = %lu", length, strlen(str));
    return 0;
}

