#include <stdio.h>
int main()
{
    int factorial = 1, number;

    printf("Enter number : ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("factorial not possible");
    }

    else
    {
        for (int i = 1; i <= number; i++)
        {
            factorial = factorial * i;
        }
        printf("%d", factorial);
    }

    return 0;
}