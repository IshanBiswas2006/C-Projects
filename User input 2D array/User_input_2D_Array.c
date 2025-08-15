#include <stdio.h>

int main() {
    int arr[50][50],i,j,row,col;

    printf("Enter Raw and col: ");
    scanf("%d%d",&row,&col);
    printf("Enter Element in array: ");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("Here your array: \n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("arr[%d][%d]=%d",i,j,arr[i][j]);
            printf("\n");
        }
        
    }
    
    
    return 0;
}