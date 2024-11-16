#include <stdio.h>
#include <math.h>

unsigned long long factorial(int num) {
    unsigned long long result_factorial = 1;
    for (int j = 1; j <= num; j++) {
        result_factorial *= j;
    }
    return result_factorial;
}

int main() {
    double x = M_PI / 3;
    int count;
    double result = 0.0;

    printf("Enter the count: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        result += pow(-1, i) * (pow(x, 2 * i + 1) / (factorial(2 * i + 1)));
    }

    printf("Calculated sin(PI/3) with %d terms: %.10f\n", count, result);
    printf("Exact value of sin(PI/3): %.10f\n", sin(x));

    return 0;
}
