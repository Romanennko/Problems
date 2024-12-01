#include <stdio.h>

void input_coefficients(int coefficients[4]);

int input_x();

void print_polynomial(int coefficients[4]);

int calculate_polynomial(int coefficients[4], int x);

int main() {
  int coefficients[4];
  int x;
  int result;

  printf("Enter the coefficients of the polynomial (a0, a1, a2, a3):\n");
  input_coefficients(coefficients);

  x = input_x();

  print_polynomial(coefficients);

  result = calculate_polynomial(coefficients, x);

  printf("The value of the polynomial for x = %d is: %d\n", x, result);

  return 0;
}

void input_coefficients(int coefficients[4]) {
  for (int i = 0; i < 4; i++) {
    printf("a%d: ", i);
    scanf("%d", &coefficients[i]);
  }
}

int input_x() {
  int x;
  printf("\nEnter the value of x: ");
  scanf("%d", &x);
  return x;
}

void print_polynomial(int coefficients[4]) {
  printf("The polynomial is: ");
  for (int i = 0; i < 4; i++) {
    if (i == 0)
      printf("%dx^3 ", coefficients[i]);
    else if (i == 1)
      printf("+ %dx^2 ", coefficients[i]);
    else if (i == 2)
      printf("+ %dx ", coefficients[i]);
    else
      printf("+ %d", coefficients[i]);
  }
  printf("\n");
}

int calculate_polynomial(int coefficients[4], int x) {
  int result = coefficients[0];
  for (int i = 1; i < 4; i++) {
    result = result * x + coefficients[i];
  }
  return result;
}
