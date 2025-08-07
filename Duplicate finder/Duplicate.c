#include <stdio.h>

int main() 
{
    int arr[100], size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Duplicate elements:\n");
    for (int i = 0; i < size; i++) 
    {
        int isDuplicate = 0;

        for (int j = i + 1; j < size; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                isDuplicate = 1;
                break;
            }
        }

        int alreadyPrinted = 0;
        for (int k = 0; k < i; k++) 
        {
            if (arr[i] == arr[k]) 
            {
                alreadyPrinted = 1;
                break;
            }
        }

        if (isDuplicate && !alreadyPrinted)
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}