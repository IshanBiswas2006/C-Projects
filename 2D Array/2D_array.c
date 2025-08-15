#include <stdio.h>

int main() {
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}},i,j;

    printf("The 2D array is: \n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("arr[%d][%d]=%d",i,j,arr[i][j]);
            printf("\n");
        }
        
    }
    
    return 0;
}