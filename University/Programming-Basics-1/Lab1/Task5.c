#include <stdio.h>

int main() {
    int first, second;
    float result;

    printf("Give the first number: ");
    scanf("%d", &first);

    printf("Give the second number: ");
    scanf("%d", &second);

    if (second == 0) {
        printf("Error: cannot divide by zero!\n");
    }
    else {
        result = (float)first / second;
        printf("The result of dividing %d by %d is: %f\n", first, second, result);
    }

    return 0;
}
