#include <stdio.h>

int main() {
    int arr[10],i,num,pos;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the number which one you found: ");
    scanf("%d",&num);

    for (i=0;i<10;i++)
    {
        if (arr[i]==num)
        {
            pos=i;
        }
        
    }
    printf("The number in index: %d",pos);
    
    return 0;
}