#include <stdio.h>
int main()
{
    int number, EvenSum = 0, OddSum = 0;

    printf("Enter Number : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            EvenSum = EvenSum + i;
        }

        else
        {
            OddSum = OddSum + i;
        }
    }

    printf("Sum of Even Numbers :  %d \n", EvenSum);
    printf("Sum of Odd Numbers : %d  ", OddSum);

    return 0;
}