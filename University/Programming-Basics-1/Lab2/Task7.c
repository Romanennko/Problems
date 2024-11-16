#include <stdio.h>

int main() {
    int n, i = 1;
    unsigned long long factorial = 1;
    int valid_input;

    printf("Give a number in the range [0, 10]: ");

    if (scanf("%d", &n) != 1 || n < 0 || n > 10) {
        printf("Wrong entry. Please provide an integer in terms of [0, 10].\n");
        return 1;
    }

    while (i <= n) {
        factorial *= i;
        i++;
    }

    printf("Factorial %d! = %llu\n", n, factorial);

    return 0;
}
