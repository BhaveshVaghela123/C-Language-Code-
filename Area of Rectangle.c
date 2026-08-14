#include<stdio.h>
#include<conio.h>

void main()
{
    float length, width, area;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    area = length * width;

    printf("Area of Rectangle = %f", area);


}
