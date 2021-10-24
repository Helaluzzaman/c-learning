#include<stdio.h>
int main(int argc, char const *argv[])
{
    char *name;
    // printf("Enter your name:");

    scanf("%[^\n]", name);
    // name = "Hasib Helal Uzzaman Hasib";
    puts(name);
    printf("%ld", sizeof(name));
    return 0;
}
