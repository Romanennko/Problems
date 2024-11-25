#include <stdio.h>

enum tab {one, two, three, dublicate1 = 10, dublicate2 = 10, custom1 = 20, custom2, custom3};

void printArray() {
    printf("one: %d\n", one);
    printf("two: %d\n", two);
    printf("three: %d\n", three);
    printf("dublicate1: %d\n", dublicate1);
    printf("dublicate2: %d\n", dublicate2);
    printf("custom1: %d\n", custom1);
    printf("custom2: %d\n", custom2);
    printf("custom3: %d\n", custom3);
}

int main() {
    printArray();

    return 0;
}
