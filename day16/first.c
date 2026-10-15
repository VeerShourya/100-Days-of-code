#include <stdio.h>

int main()
{
    int n, r, binary = 0, place = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        r = n % 2;
        binary = binary + r * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary = %d", binary);

    return 0;
}