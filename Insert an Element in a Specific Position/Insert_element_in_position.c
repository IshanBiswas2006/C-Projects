#include <stdio.h>

int main() {
    
    int arr[50],i,pos,element,size;

    printf("Enter size of array: ");
    scanf("%d",&size);
    for ( i = 0; i < size; i++)
    {
        printf("Enter elements: ");
        scanf("%d",&arr[i]);
    }
    printf("Enter new element to insert: ");
    scanf("%d",&element);
    printf("Enter which position: ");
    scanf("%d",&pos);
    for ( i = size; i >=pos; i--)
    {
        arr[i]=arr[i-1];
    }    
        arr[i]=element;
        size++;
    
    
    printf("The new elements are:\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d  ",arr[i]);
    }
    
    
    return 0;
}