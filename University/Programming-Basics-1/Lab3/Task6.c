#include <stdio.h>

double calculate_pi(int accuracy) {
  double pi = 0.0;

  for (int i = 0; i < accuracy; i++) {
    if (i & 1) {
      pi -= 1.0 / (2.0 * i + 1.0);
    } else {
      pi += 1.0 / (2.0 * i + 1.0);
    }
  }

  pi *= 4;

  return pi;
}

int main() {
  unsigned long long int precision;

  printf("Enter the precision of the PI number: ");
  if (scanf("%llu", &precision) != 1 || getchar() != '\n' || precision <= 0) {
    puts("Error: Invalid input!");
    return 1;
  }

  printf("\nThe number of PIs with precision %llu is: %.15lf\n", precision,
         calculate_pi(precision));

  return 0;
}
