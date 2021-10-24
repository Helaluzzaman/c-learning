#include<stdio.h>
int main(int argc, char const *argv[])
{
    int number[] = {1, 23, 34,34}, *ptr;
    char *name;
    name = "Helal Uzzaman Hasib";
    puts(name);
    ptr = number;
    for ( int i= 0 ; i< (sizeof(number)/sizeof(int)) ; i++){
        printf("%d\n", *(ptr+i) );
    }
    return 0;
}
