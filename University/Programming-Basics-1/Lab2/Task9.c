#include <stdio.h>

int main() {
    int n;
    double pi = 0.0;

    printf("Enter the precision of the number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            pi += 1.0 / (2.0 * i + 1.0);
        }
        else {
            pi -= 1.0 / (2.0 * i + 1.0);
        }
    }

    pi *=4;

    printf("Result: %lf", pi);

    return 0;
}
