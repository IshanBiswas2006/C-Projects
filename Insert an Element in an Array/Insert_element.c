#include <stdio.h>

int main() {
    
    int arr[10],i,element;

    printf("Enter 5 int Numbers: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Number to insert: ");
    scanf("%d",&element);
    arr[i]=element;
    for ( i = 0; i < 6; i++)
    {
        printf("%d  ",arr[i]);
    }
    
    return 0;
}