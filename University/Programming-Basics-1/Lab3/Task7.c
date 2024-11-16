#include <stdio.h>

double calculate_square_root(double un, int accuracy) {
    double result = un;

    for (int i = 0; i < accuracy; i++) {
        result = 0.5 * (result + un / result);
    }

    return result;
}

int main() {
    double user_number;
    int precision;

    printf("Enter the number to square root (the number must be greater than zero): ");
    if (scanf("%lf", &user_number) != 1 || getchar() != '\n' || user_number <= 0) {
        puts("Error: Invalid input!");
        return 1;
    }

    printf("Enter the precision (the number must be greater than zero): ");
    if (scanf("%d", &precision) != 1 || getchar() != '\n' || precision <= 0) {
        puts("Error: Invalid input!");
        return 1;
    }

    printf("\nThe root of the number %lf is: %.15lf\n", user_number, calculate_square_root(user_number, precision));

    return 0;
}
