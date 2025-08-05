#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
 
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
 
    printf("The sum of the elements is: %d\n", sum);

    return 0;
}