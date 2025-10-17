#include <stdio.h>

int main() {
    int a, b, c, temp;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Sort using simple comparisons (Bubble sort style for 3 elements)
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // Display in ascending order
    printf("Numbers in ascending order: %d %d %d\n", a, b, c);

    return 0;
}
