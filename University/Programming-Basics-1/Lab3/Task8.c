#include <stdio.h>

int division_remainder_calculation(int n1, int n2) {
    while (n1 >= n2) {
        n1 -= n2;
    }

    return n1;
}

int main() {
    int number1, number2;

    printf("Give a first non-zero natural number (dividend): ");
    if (scanf("%d", &number1) != 1 || getchar() != '\n' || number1 <= 0) {
        puts("Error: Invalid input!");
        return 1;
    }

    printf("Give a second non-zero natural number (divisor): ");
    if (scanf("%d", &number2) != 1 || getchar() != '\n' || number2 <= 0) {
        puts("Error: Invalid input!");
        return 1;
    }

    printf("\nThe remainder of dividing %d by %d is: %d\n", number1, number2, division_remainder_calculation(number1, number2));

    return 0;
}
