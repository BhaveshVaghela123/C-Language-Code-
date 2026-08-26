#include<stdio.h>
#include<conio.h>

void main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 5 == 0 && number % 11 == 0)
    {
        printf("%d is divisible by both 5 and 11", number);
    }
    else
    {
        printf("%d is not divisible by both 5 and 11", number);
    }

}
