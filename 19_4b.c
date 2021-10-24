#include<stdio.h>
int main(int argc, char const *argv[])
{
    char line[200];
    int words = 0;
    printf("Enter a line consisting letter space and full stop symbol.\n");
    scanf("%[abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ .]", line);
    puts(line);
    for (int i = 0; line[i] != '\0'; i++)
    {
        if(line[i]=='.')
            continue;
        else if(line[i] == ' '){
            printf("\n");
            words++;
        }else
        printf("%c", line[i]);
    }
    printf("\nTotal number of words: %d\n",words ++);
    

    return 0;
}
