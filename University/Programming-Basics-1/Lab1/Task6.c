#include <stdio.h>

int main() {
    int first, second;

    printf("Give the first number: ");
    scanf("%d", &first);

    printf("Give the second number: ");
    scanf("%d", &second);

    if (second != 0) {
        if (first % second == 0) {
            printf("Result: %d\n", first);
        }
        else {
            printf("Result: %d\n", second);
        }
    }
    else {
        printf("Error: cannot divide by zero!\n");
    }

    return 0;
}
