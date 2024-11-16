#include <stdio.h>

int main() {
    int a1, an, d, suma = 0;

    printf("Give the initial word (a1): ");
    if (scanf("%d", &a1) != 1) {
        printf("Wrong input type for a1. Please enter an integer.\n");
        return 1;
    }

    printf("Give the concluding word (an): ");
    if (scanf("%d", &an) != 1) {
        printf("Wrong input type for a1. Please enter an integer.\n");
        return 1;
    }

    printf("Podaj roznice (d): ");
    if (scanf("%d", &d) != 1) {
        printf("Wrong input type for a1. Please enter an integer.\n");
        return 1;
    }

    for (int i = a1; i <= an; i += d) {
        suma += i;
    }

    printf("Sum of an arithmetic sequence: %d\n", suma);

    return 0;
}
