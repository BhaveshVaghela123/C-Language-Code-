#include <stdio.h>

int main()
{
    int num, square, temp, divisor;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    temp = num;
    divisor = 1;

    while (temp != 0)
    {
        divisor = divisor * 10;
        temp = temp / 10;
    }

    if (square % divisor == num)
    {
        printf("%d is an Automorphic Number", num);
    }
    else
    {
        printf("%d is Not an Automorphic Number", num);
    }

    return 0;
}
