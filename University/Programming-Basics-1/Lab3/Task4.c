#include <stdio.h>

double countArea(double h, double w, double d) {
    return 2 * h * w + 2 * h * d + 2 * w * d;
}

int main() {
    double height, width, depth;

    printf("Enter the height of the cuboid: ");
    if (scanf("%lf", &height) != 1 || getchar() != '\n' || height <= 0) {
        puts("Error: Invalid input!");
        return 1;
    }

    printf("Enter the width of the cuboid: ");
    if (scanf("%lf", &width) != 1 || getchar() != '\n' || width <= 0) {
        puts("Error: Invalid input!");
        return 1;
    }

    printf("Enter the depth of the cuboid: ");
    if (scanf("%lf", &depth) != 1 || getchar() != '\n' || depth <= 0) {
        puts("Error: Invalid input!");
        return 1;
    }

    printf("\nThe surface area of this cuboid is: %.2lf square units\n", countArea(height, width, depth));

    return 0;
}
