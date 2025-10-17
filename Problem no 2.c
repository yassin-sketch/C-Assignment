#include <stdio.h>

int main() {
    char op;           
    double num1, num2, result;

    // Ask user for the operation
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    // Ask for first number
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    // Ask for second number
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Perform calculation
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;

        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            printf("Result = %.2lf\n", result);
            break;

        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
