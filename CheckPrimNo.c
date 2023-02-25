/*Program to check wether the entered number is prime or not*/
#include <stdio.h>
int main()
{
    int i, n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    };

    if (count == 2)
    {
        printf("The number %d is not prime.\n", n);
    }
    else
    {
        printf("The number %d is  prime\n", n);
    }
    return 0;
}
