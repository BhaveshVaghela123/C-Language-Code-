#include<stdio.h>
#include<conio.h>

void main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("%d is Positive", number);
    }
    else if (number < 0)
    {
        printf("%d is Negative", number);
    }
    else
    {
        printf("The number is Zero");
    }
}
