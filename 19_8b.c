/*
Questions: EEE 19 (8b)
Consider the following code segment:
    char letter = 'C', *ptr;
    ptr = &letter;
Assume that memory address of 'letter' = 7ffc24
Now determine the value of each of the following expressions/variables:
[N:B: write "invalid" fi the valu of the expression can't be determined]
(1)&letter (2)letter; (3)*letter; (4)ptr; (5)*ptr; (6)++(*ptr);
*/

#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char letter = 'C', *ptr;
    ptr = &letter;
    printf("&letter =  %p", &letter); 
    printf("\nletter = %c", letter);
    // printf("*letter %d", *letter); compile time error.
    printf("\nptr =  %p", ptr);
    printf("\n*ptr = %c", *ptr);
    printf("\n++(*ptr) = %c", ++(*ptr) );
    return 0;
}
