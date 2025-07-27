#include <stdio.h>
#include <math.h> 

int main() 
{
    int option;
    float n1, n2, result;
    char op;

    do {
        printf("\nSelect option");
        printf("\n1. Arithmetic\n2. Scientific\n3. Exit\n");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("\nSelect operators:");
                printf("\n1. +");
                printf("\n2. -");
                printf("\n3. *");
                printf("\n4. /");
                printf("\n5. Exit\n");
                printf("Choose option: ");
                scanf("%d", &op);

                switch (op) 
                {
                    case 1:
                        printf("Enter first number second number: "); 
                        scanf("%f %f", &n1,&n2);
                        result = n1 + n2;
                        printf("Result: %.2f + %.2f = %.2f\n", n1, n2, result);
                        break;
                    case 2:
                        printf("Enter first number and second number: "); 
                        scanf("%f %f", &n1,&n2);
                        result = n1 - n2;
                        printf("Result: %.2f - %.2f = %.2f\n", n1, n2, result);
                        break;
                    case 3:
                        printf("Enter first number and second number: "); 
                        scanf("%f %f", &n1,&n2);
                        result = n1 * n2;
                        printf("Result: %.2f * %.2f = %.2f\n", n1, n2, result);
                        break;
                    case 4:
                        printf("Enter first number and second number: "); 
                        scanf("%f %f", &n1,&n2);
                        if (n2 != 0) {
                            result = n1 / n2;
                            printf("Result: %.2f / %.2f = %.2f\n", n1, n2, result);
                        } 
                        else 
                        {
                            printf("Error: Division by zero!\n");
                        }
                        break;
                        case 5:
                        printf("Thank you for using Arithmetic operators...");
                        break;
                    default:
                        printf("Error: Invalid operator\n");
                }
                break;

            case 2:
                printf("\nScientific Operations:");
                printf("\n1. Power (x^y)");
                printf("\n2. Square (x^2)");
                printf("\n3. Square Root (vx)");
                printf("\n4. Logarithm (log base e)");
                printf("\n5. Exit\n");
                printf("Choose option: ");
                scanf("%d", &option);

                switch (option) 
                {
                    case 1:
                        printf("Enter base and exponent: ");
                        scanf("%f %f", &n1, &n2);
                        result = pow(n1, n2);
                        printf("Result: %.2f ^ %.2f = %.2f\n", n1, n2, result);
                        break;
                    case 2:
                        printf("Enter number: ");
                        scanf("%f", &n1);
                        result = n1 * n1;
                        printf("Result: %.2f ^ 2 = %.2f\n", n1, result);
                        break;
                    case 3:
                        printf("Enter number: ");
                        scanf("%f", &n1);
                        if (n1 >= 0) 
                        {
                            result = sqrt(n1);
                            printf("Result: %.2f = %.2f\n", n1, result);
                        } 
                        else 
                        {
                            printf("Error: Cannot compute square root of negative number!\n");
                        }
                        break;
                    case 4:
                        printf("Enter number: ");
                        scanf("%f", &n1);
                        if (n1 > 0) 
                        {
                            result = log(n1);
                            printf("Result: log(%.2f) = %.2f\n", n1, result);
                        } 
                        else 
                        {
                            printf("Error: Logarithm undefined for non-positive numbers!\n");
                        }
                        break;
                        case 5:
                        printf("Thank you for using Scientific Operations...");
                        break;
                    default:
                        printf("Invalid scientific operation choice.\n");
                }
                break;

            case 3:
                printf("Exiting calculator. Goodbye\n");
                break;

            default:
                printf("Invalid option. Try again.\n");
        }
    } while (option != 3);

    return 0;
}