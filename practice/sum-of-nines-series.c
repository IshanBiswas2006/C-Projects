#include <stdio.h>

int main()
{
    int n, num = 9, sum = 0;

    printf("Input the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Number of terms must be a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        sum += num;
        printf("%d ", num);
        num = num * 10 + 9;
    }

    printf("\nThe sum of the series = %d\n", sum);

    return 0;
}