#include <stdio.h>

int main() {
    int temperature;
    int time;

    printf("Enter water temperature: ");
    scanf("%d", &temperature);

    if (temperature >= 0 && temperature <= 30)
        time = 7;
    else if (temperature > 30 && temperature <= 60)
        time = 5;
    else if (temperature > 60 && temperature <= 90)
        time = 3;
    else if (temperature > 90 && temperature <= 100)
        time = 1;
    else {
        printf("Invalid input\n");
        return 0;
    }

    printf("Required heating time = %d minutes\n", time);

    return 0;
}
