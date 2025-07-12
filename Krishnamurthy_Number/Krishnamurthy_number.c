#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; 

    while (temp > 0) {
        digit = temp % 10; 
        fact = 1;

        for (int i = 1; i <= digit; i++) {
            fact *= i; 
        }

        sum += fact; 
        temp /= 10;   
    }

  
    if (sum == num)
        printf("Yes, it's a Krishnamurthy number.\n");
    else
        printf("No, it's not a Krishnamurthy number.\n");

   
}