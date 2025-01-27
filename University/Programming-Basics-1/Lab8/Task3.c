#include <stdio.h>

struct Complex {
    double real;
    double imag;
};

struct Complex add(struct Complex a, struct Complex b);
struct Complex subtract(struct Complex a, struct Complex b);
struct Complex multiply(struct Complex a, struct Complex b);
struct Complex divide(struct Complex a, struct Complex b);
void print_complex(struct Complex num);

int main() {
    struct Complex num1, num2, result;

    printf("Enter the first complex number (real imag): ");
    scanf("%lf %lf", &num1.real, &num1.imag);

    printf("Enter the second complex number (real imag): ");
    scanf("%lf %lf", &num2.real, &num2.imag);

    result = add(num1, num2);
    printf("Addition: ");
    print_complex(result);

    result = subtract(num1, num2);
    printf("Subtraction: ");
    print_complex(result);

    result = multiply(num1, num2);
    printf("Multiplication: ");
    print_complex(result);

    result = divide(num1, num2);
    printf("Division: ");
    print_complex(result);

    return 0;
}


struct Complex add(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;

    return result;
}

struct Complex subtract(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;

    return result;
}

struct Complex multiply(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    
    return result;
}

struct Complex divide(struct Complex a, struct Complex b) {
    struct Complex result;
    double denominator = b.real * b.real + b.imag * b.imag;

    if (denominator == 0) {
        printf("Error: Division by zero\n");
        return (struct Complex) {0, 0};
    }

    result.real = (a.real * b.real + a.imag * b.imag) / denominator;
    result.imag = (a.imag * b.real - a.real * b.imag) / denominator;

    return result;
}

void print_complex(struct Complex num) {
    if (num.imag >= 0) {
        printf("%.2f + %.2fi\n", num.real, num.imag);
    } else {
        printf("%.2f - %.2fi\n", num.real, -num.imag);
    }
}
