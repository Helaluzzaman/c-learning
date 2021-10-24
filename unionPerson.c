#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    union personUnion
    {
        char name[20];
        int age;
    };
    union personUnion Hasib;
    
    strcpy(Hasib.name, "Helal Uzzaman Hasib");
    printf("\nname: %s \nsize:", Hasib.name);
    Hasib.age = 22;
    printf("\nafter age setting \nName: %s", Hasib.name);
    printf("\nage: %d", Hasib.age);
    return 0;
}
