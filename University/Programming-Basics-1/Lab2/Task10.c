#include <stdio.h>

int main() {
    double user_num, result, temp;
    int n;

    printf("Enter a non-negative real number: ");
    scanf("%lf", &user_num);

    if (user_num < 0) {
        printf("The number entered must be non-negative!\n");
        return 1;
    }

    printf("Enter the number of repetitions: ");
    scanf("%d", &n);

    result = 1.0;

    for (int i = 0; i < n; i++) {
        temp = result;
        result = 0.5 * (temp + user_num / temp);
    }

    printf("The approximate value of the square root of %.2lf is: %.10lf\n", user_num, result);

    return 0;
}
