#include <stdio.h>

int main() {
    int first, second, and = 0, or = 0;

    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf(" %d", &second);

    and = ~(~first | ~second);
    or = ~(~first & ~second);

    printf("AND: %d\n", and);
    printf("OR: %d", or);
}
