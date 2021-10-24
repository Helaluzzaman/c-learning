#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char name[] = "tettet";
    int length, i, r;
    length = sizeof(name)/sizeof(char);
    printf("%d\n", length);
    char reverse[length];
    for(r = length-2, i = 0 ; r>= 0; r-- , i++){
        reverse[i] = name[r];
    }
    reverse[length-1] = '\0';
    puts(name);
    puts(reverse);
    if(strcmp(name, reverse)==0){
        printf("\n%s is palindrome.", name);
    }else
        printf("\n%s is not palindrome.", name);
    return 0;

}
