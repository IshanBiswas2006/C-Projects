#include <stdio.h>

int main()
{
    int n, i, c;

    printf("Enter an integer (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        c = i * i * i;
        printf("The cube of %d is: %d\n", i, c);
    }

    return 0;
}