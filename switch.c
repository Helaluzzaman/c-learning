#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    /* Grading program using switch. Use of (...) operator in case statement. */
    
    double number;
    label:{
        printf("Enter your number:");
        scanf("%lf", &number);
    }
    if(number > 100){
        printf("%d is invalid mark, Enter in between 0 to 100.\n", (int)number );
        goto label;
    }
    if(number < 40){
        printf("You failed.");
        return 0;
    }
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
