#include <stdio.h>

int max(int a, int b, int c) {
    int result = (a > b) ? a : b;
    result = (result > c) ? result : c;

    return result;
}

int main()
{
    int first_num, second_num, third_num;

    printf("Enter the first number: ");
    if (scanf("%d", &first_num) != 1 || getchar() != '\n') {
        puts("Error: Invalid input!");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%d", &second_num) != 1 || getchar() != '\n') {
        puts("Error: Invalid input!");
        return 1;
    }

    printf("Enter the third number: ");
    if (scanf("%d", &third_num) != 1 || getchar() != '\n') {
        puts("Error: Invalid input!");
        return 1;
    }

    printf("\nThe highest number: %d\n", max(first_num, second_num, third_num));

    return 0;
}
