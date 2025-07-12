#include<stdio.h>
int main(){

    char op;
    float num1,num2,result;

    printf("Enter operators(+ , - , / , *): ");
    scanf("%c",&op);

    printf("Enter Number: ");
    scanf("%f %f",&num1,&num2);


    switch (op)
    {
    case '+':
        result=num1+num2;
        printf("Result: %.2f + %.2f = %.2f",num1,num2,result);
        break;
    case '-':
        result=num1-num2;
        printf("Result: %.2f - %.2f = %.2f",num1,num2,result);
        break;
    case '*':
        result=num1*num2;
        printf("Result: %.2f * %.2f = %.2f",num1,num2,result);
        break;
    case '/':
         if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f", num1, num2, result);
            } else {
                printf("Error: Division by zero!");
            }
            break;   
    default:
        printf("Error: Invalid operator", op);
        
    }

}