#include <stdio.h>

//WAP TO FIND THE GREATEST OF THREE DISTINCT NUMBERS.

int main() {

    int number1, number2, number3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    if (number1 > number2)
     {
        if (number1 > number3)
        { 
            printf("%d is the greatest number.\n", number1);
        }
        else 
        { 
            printf("%d is the greatest number.\n", number3);
        }
    } 

    else 
    { 
        if (number2 > number3) { 
            printf("%d is the greatest number.\n", number2);
        } 
        else { 
            printf("%d is the greatest number.\n", number3);
        }
    }

    return 0;
    
}