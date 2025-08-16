#include <stdio.h>

int main() {
    
    int mat1[50][50],mat2[50][50],mat3[50][50],i,j,row,col;
    printf("Enter 2D array row and col: ");
    scanf("%d%d",&row,&col);
    printf("Enter elements for first 2Darray:\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d",&mat1[i][j],&mat2[i][j]);
        }
        
    }
    printf("Enter elements for 2nd 2Darray:\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d",&mat2[i][j],&mat2[i][j]);
        }
        
    }
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
        
    }
    printf("Here is the new matrix:\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}