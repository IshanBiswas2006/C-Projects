#include <stdio.h>

int main() {
    int decimalNum, binaryNum[20], i = 0;

    printf("Enter the Decimal Number: ");
    scanf("%d", &decimalNum);

    while (decimalNum != 0) {
        binaryNum[i] = decimalNum % 2;
        i++;
        decimalNum = decimalNum / 2;
    }

    printf("\nEquivalent Binary Value: ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", binaryNum[i]);

    printf("\n");
    return 0;
}