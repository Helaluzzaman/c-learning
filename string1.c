#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char name[] = "Hasib";
    char name2[] = {'H', 'a', 's', 'i', 'b', '\0', 'H', 'e'};
    gets(name);
    puts(name);
    puts(name2);
    for(int i = 0 ; i < 10; i++){
        printf("%c", name2[i]);
    }
    return 0;
}

