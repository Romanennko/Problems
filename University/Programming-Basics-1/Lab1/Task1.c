#include <stdio.h>

int main() {
    int first, second, third, highest_num;

    printf("Enter the first number: ");
    if (scanf("%d", &first) == 0) {
        puts("A false value has been introduced");
        return 0;
    }

    printf("Enter the second number: ");
    if (scanf("%d", &second) == 0) {
        puts("A false value has been introduced");
        return 0;
    }

    printf("Enter the third number: ");
    if (scanf("%d", &third) == 0) {
        puts("A false value has been introduced");
        return 0;
    }

    highest_num = (first > second) ? first : second;
    highest_num = (highest_num > third) ? highest_num : third;

    printf("The largest number of: %d\n", highest_num);

    return 0;
}
