#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char name[] = "Helal uzzaman Hasib";
    char names[][9] = {"Helal", "Uzzaman", "Hasib"};
    puts(names[2]);
    int length = 0 ;
    while (name[length] != '\0')
    {
        length ++;
    }
    for( int i =0; i< length; i++){
        name[i] = toupper(name[i]);
    }
    
    puts(name);
    return 0;
}
