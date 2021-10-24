#include<stdio.h>
#define FILENAME "file/student_number"

int main(int argc, char const *argv[])
{
    FILE *fhandler;
    fhandler = fopen("file/student_number", "w+");
    int number =0 ;
    fprintf(fhandler, "%d %d", 223, 212);
    fclose(fhandler);
    fhandler = fopen("file/student_number", "r");
    char number1[100];
    fscanf(fhandler, "%s", number1);
    printf("File's data: %s", number1);
    return 0;
}