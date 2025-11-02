#include <stdio.h>

int main() {
    int n, i = 1;
    int a = 0, b = 1, c = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d ", a);
        next = a + b + c;
        a = b;
        b = c;
        c = next;
        i++;
    }

    return 0;
}

