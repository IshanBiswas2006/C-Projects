#include <stdio.h>

int main() {

int i,n,first=0,second=1,next;
    
printf("Enter terms: ");
scanf("%d",&n);

printf("Fibonacci\n");

for(i=0;i<=n;i++)
{
    if(i<=1){
    next=i;
    }
    else
    {
        next=first+second;
        first=second;
        second=next;
    }
    printf("%d \t",next);
    
}
    
}

    
 

    
