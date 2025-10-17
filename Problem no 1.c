#include <stdio.h>
#include <math.h>   // for sqrt()

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    int root = sqrt(num); // find the integer square root

    if (root * root == num)
        printf("%d is a perfect square.\n", num);
    else
        printf("%d is not a perfect square.\n", num);

    return 0;
}
