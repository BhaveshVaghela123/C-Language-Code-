#include <stdio.h>

int main()
{
    int n, num, i, count;

    printf("Enter N: ");
    scanf("%d", &n);

    printf(" \n Prime numbers from 1 to %d are:\n", n);

    for (num = 2; num <= n; num++)
    {
        count = 0;

        for (i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d ", num);
        }
    }

    return 0;
}
