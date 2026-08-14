#include<stdio.h>
#include<conio.h>

void main()
{
    float radius, area;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("Area of Circle = %f", area);


}
