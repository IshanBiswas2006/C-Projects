#include <stdio.h>

int main() {
    
    int i, j, size, pos = 0, del, element, arr[50];

    printf("Enter Size of array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++) 
    {
        printf("Enter elements: ");
        scanf("%d", &element);
        arr[i] = element;
    }

    printf("Enter the you want to delete: ");
    scanf("%d", &del);

    for (i = 0; i < size; i++) 
    {
        if (arr[i] == del) 
        {
            for (j = i; j < size - 1; j++) 
            {
                arr[j] = arr[j + 1];
            }
            size--;
            pos = 1;
            i--; 
        }
    }

    if (pos == 0) 
    {
        printf("\nElement does not found");
    } else {
        printf("\nElement Deleted");
        printf("\nNew Array is:\n");
        if (size == 0)
        {
            printf("Empty!");
        }
        else 
        {
            for (i = 0; i < size; i++)
                printf("%d  ", arr[i]);
        }
    }

    return 0;
}