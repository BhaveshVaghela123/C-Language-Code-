#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Multiplication = %d\n", a * b);

    if (b != 0)
        printf("Division = %d\n", a / b);
    else
        printf("Division by zero is not possible.\n");

}
