#include<stdio.h>
int main(){

    int i,j,k;

    for( i=5;i>=1;i--)
        {
    for(j=0;j<5-i;j++)
        {
            printf(" ");
        }
    for(k=1;k<=i;k++)
        {
            printf(" *");
        }
        printf("\n");
        
    }


    for( i=2;i<=5;i++)
        {
    for(j=0;j<5-i;j++)
        {
            printf(" ");
        }
    for(k=1;k<=i;k++)
        {
            printf(" *");
        }
        printf("\n");
        
    }
    

}