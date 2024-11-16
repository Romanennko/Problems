#include <stdio.h>

int main() {
    char first, second, third, last;

    printf("Enter the first character: ");
    scanf("%c", &first);

    printf("Enter the second character: ");
    scanf(" %c", &second);

    printf("Enter the third character: ");
    scanf(" %c", &third);

    last = (first > second) ? first : second;
    last = (last > third) ? last : third;


    if (third > last) {
        last = third;
    }

    printf("The latest character in the alphabet is: '%c'\n", last);

    return 0;
}
