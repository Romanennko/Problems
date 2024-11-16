#include <stdio.h>

int main() {
    double a1, an, q, suma = 0, wyraz = 0;

    printf("Give the first word of the sequence: ");
    if (scanf("%lf", &a1) != 1 || a1 == 0) {
        printf("Error: invalid first word of string.\n");
        return 1;
    }

    printf("Give the last word of the sequence: ");
    if (scanf("%lf", &an) != 1 || an < a1) {
        printf("Error: the last word must be greater than or equal to the first word.\n");
        return 1;
    }

    printf("Give the quotient of the sequence (q): ");
    if (scanf("%lf", &q) != 1 || q <= 0) {
        printf("Mistake: the quotient cannot be equal to zero.\n");
        return 1;
    }

    wyraz = a1;

    while (q > 1 && wyraz <= an) {
        suma += wyraz;
        wyraz *= q;
    }

    printf("The sum of the geometric sequence is: %.2lf\n", suma);

    return 0;
}
