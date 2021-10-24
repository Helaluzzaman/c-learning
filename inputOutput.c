#include<stdio.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{
    char letter;
    letter = getchar();
    printf("%c", letter);
    if(isalpha(letter)){
        printf("alphabet");
    }else if (isdigit(letter))
    {
        printf("digit");
    }
    printf("\nfinished.");
    return 0;
}
