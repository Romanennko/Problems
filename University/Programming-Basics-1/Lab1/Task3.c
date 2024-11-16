#include <stdio.h>

int main() {
    unsigned char a, b, a2;

    printf("Give the first number (0-255): ");
    scanf("%u", &a);
    a2 = a;

    printf("Give the second number (0-255): ");
    scanf("%u", &b);

    printf("Number a: %u (0x%02X)\n", a2, a2);
    printf("Number b: %u (0x%02X)\n", b, b);

    unsigned char result_and = a2 & b;
    unsigned char result_or = a2 | b;
    unsigned char result_xor = a2 ^ b;

    printf("a AND b: %u (0x%02X)\n", result_and, result_and);
    printf("a OR b: %u (0x%02X)\n", result_or, result_or);
    printf("a XOR b: %u (0x%02X)\n", result_xor, result_xor);

    return 0;
}
