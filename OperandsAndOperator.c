#include <stdio.h>

int main(){

    float operand1, operand2, result;
    char operator;

    printf("Enter first operand: ");
    scanf("%f", &operand1);

    printf("Enter second operand: ");
    scanf("%f", &operand2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); 

    // Perform operation based on operator input using a switch statement

    switch (operator) 
    {
        case '+':

            result = operand1 + operand2;
            printf("Result: %.2f\n", result);

            break;

        case '-':

            result = operand1 - operand2;
            printf("Result: %.2f\n", result);

            break;

        case '*':

            result = operand1 * operand2;
            printf("Result: %.2f\n", result);

            break;

        case '/':

            if (operand2 != 0)
             {
                result = operand1 / operand2;
                printf("Result: %.2f\n", result);
            }
             else
            {
                printf("Error: Division by zero is not allowed.\n");
            }

            break;

        default:

            printf("Error: Invalid operator entered.\n");
            
    }

    return 0;
}