#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fhandler;
    char c;
    fhandler = fopen("file/character_wr", "w+");
    while ((c = getchar()) != 'E')
    {
        putc(c, fhandler);
    }
    fclose(fhandler);
    fhandler = fopen("file/character_wr", "r");
    while ((c = getc(fhandler)) != EOF){
        printf("%c", c);
    }
    {
        /* code */
    }
    
    return 0;
}
