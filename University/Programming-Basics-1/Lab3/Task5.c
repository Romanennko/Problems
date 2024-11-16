#include <stdio.h>

double countArea(double h, double b) {
    double base_area = b * b;
    double perimeter = 4 * b;

    return base_area + 0.5 * perimeter * h;
}

int main() {
    double height, base;

    printf("Enter the side height of the regular pyramid: ");
    if (scanf("%lf", &height) != 1 || getchar() != '\n' || height <= 0) {
        puts("Error: Invalid input!");
        return 1;
    }

    printf("Enter the base length of the regular pyramid: ");
    if (scanf("%lf", &base) != 1 || getchar() != '\n' || base <= 0) {
        puts("Error: Invalid input!");
        return 1;
    }

    printf("\nThe surface area of this regular pyramid is: %.2lf square units\n", countArea(height, base));

    return 0;
}
