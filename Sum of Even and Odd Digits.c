#include <stdio.h>

int main()
{
    int num, digit;
    int evenSum = 0, oddSum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;

        if (digit % 2 == 0)
        {
            evenSum = evenSum + digit;
        }
        else
        {
            oddSum = oddSum + digit;
        }

        num = num / 10;
    }

    printf("Sum of Even Digits = %d\n", evenSum);
    printf("Sum of Odd Digits = %d", oddSum);

    return 0;
}
