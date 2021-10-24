#include<stdio.h>
#include<string.h>

struct person
{
    char name[40];
    int age;
};


int main(int argc, char const *argv[])
{
    struct person myself, *myptr;
    myptr = &myself;
    strcpy(myptr->name , "Hasib");
    printf("%s", myself.name);
    return 0;
}
