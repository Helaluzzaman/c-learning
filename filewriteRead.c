#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fhandler;
    fhandler = fopen("file/writeRead", "w+");
    fputs("HELLO, WORLD", fhandler);
    fclose(fhandler);
    fhandler= fopen("file/writeRead", "r");
    char line[100];
    while (feof(fhandler) != 1)
    {
        fscanf(fhandler, "%s", line);
        printf("%s", line);
    }
    fclose(fhandler);
    return 0;
}
