#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    struct person{
        char name[20];
        int age;
    };
    union personUnion
    {
        char name[20];
        int age;
    };
    
    struct person abdul, test[2];
    union personUnion Hasib;

    
    strcpy(abdul.name, "Abdulla Al Amin");
    abdul.age = 21;

    printf("Person's name: %s", abdul.name);
    printf("\nPerson's age : %d", abdul.age);
    printf("\n size of : %d", (int)sizeof(abdul));  // size is 24 total size ( took int size as 4 bytes.)
    printf("\n size of : %d\n", (int)sizeof(Hasib));  // size is 20 highest of any member.

    
    return 0;
}
