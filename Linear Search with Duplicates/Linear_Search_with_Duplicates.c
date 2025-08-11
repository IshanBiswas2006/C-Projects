#include <stdio.h>

int main() {
    
    int arr[50],num,i,j=0,count=0,temp[50],size;

    printf("Enter size: ");
    scanf("%d",&size);
    printf("Enter number: ");
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number you found: ");
    scanf("%d",&num);
    for (i=0;i<size;i++)
    {
        if (arr[i]==num)
        {
            temp[j]=i;
            j++;
            count++;
        }
        
    }
    if (count>0)
    {
        printf("\nThe number is in index: ");

        size=count;
        for (i=0;i<size;i++)
        {
            printf("%d  ",temp[i]);
        }
        
    }
    else
    {
        printf("the number is not found");
    }
    
    return 0;
}