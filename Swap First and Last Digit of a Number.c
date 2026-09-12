#include <stdio.h>

int main()
{
    int num, first, last, temp, power, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10;

    power = 1;

    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    result = num - first * power - last;
    result = result + last * power + first;

    printf("Number after swapping = %d", result);

    return 0;
}
