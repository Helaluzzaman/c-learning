#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Total arguments: %d\n", argc);
    FILE *fhandler;
    fhandler = fopen("file/random_text", "r");

    if(fhandler == NULL){
        printf("File open failed\n");
    }else
    printf("File sucessfully opened.\n");
    char text[200];
    for ( int i = 0; feof(fhandler) !=1; i++){
        fscanf(fhandler, "%s", text);
        printf("%s ", text);
        printf("%ld \n", ftell(fhandler));
    }

    return 0;
}
