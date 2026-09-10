#include <stdio.h>

int main()
{
    int num, first, last, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    while (num >= 10)
    {
        num = num / 10;
    }

    first = num;

    sum = first + last;

    printf("First digit = %d\n", first);
    printf("Last digit = %d\n", last);
    printf("Sum = %d", sum);

    return 0;
}
