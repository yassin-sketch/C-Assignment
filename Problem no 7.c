#include <stdio.h>

int main() {
    float num1, num2, sum;
    int floorValue;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    
    sum = num1 + num2;

    floorValue = (int)sum;

    printf("Sum = %.2f\n", sum);
    printf("Floor (truncated value) = %d\n", floorValue);

    return 0;
}
