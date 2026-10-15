#include <stdio.h>

int main()
{
    int i, n, product = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--)
    {
        product *= i;
    }

    printf("Factorial is: %d", product);

    return 0;
}