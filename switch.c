#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    double number;
    printf("Enter your number:");
    scanf("%lf", &number);
    switch ((int)number )
    {
    case 80 ... 100:
        printf("You got A+");
        break;
    case 70 ... 79:
        printf("You got A");
        break;
    case 60 ... 69:
        printf("You got B");
        break;
    case 50 ... 59:
        printf("You got C");
        break;
    case 40 ... 49:
        printf("You got D");
        break;
    
    default:
        printf("pass.");
        break;
    }
    return 0;
}
