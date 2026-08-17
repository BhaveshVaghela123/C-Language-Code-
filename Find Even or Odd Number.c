#include<stdio.h>
#include<conio.h>

void main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("%d is Even", number);
    }
    else
    {
        printf("%d is Odd", number);
    }
}
