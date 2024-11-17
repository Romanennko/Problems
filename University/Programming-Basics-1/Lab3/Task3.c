#include <math.h>
#include <stdio.h>

double arithmetic_sum(int first_term, int common_difference, int n) {
  return ((first_term + (first_term + (n - 1) * common_difference)) * n) / 2;
}

double geometric_sum(int first_term, int common_ratio, int n) {
  if (common_ratio == 1) {
    return n * first_term;
  }
  return first_term * (1 - pow(common_ratio, n)) / (1 - common_ratio);
}

int main() {
  int choice, first_term, common_difference_or_ratio, n;

  printf("Choose the type of sequence:\n");
  printf("1. Arithmetic sequence\n");
  printf("2. Geometric sequence\n");

  printf("Enter your choice (1 or 2): ");
  if (scanf("%d", &choice) != 1 || getchar() != '\n' || choice > 2 ||
      choice < 1) {
    puts("Error: Invalid input!");
    return 1;
  }

  printf("\nEnter the first term (a1): ");
  if (scanf("%d", &first_term) != 1 || getchar() != '\n') {
    puts("Error: Invalid input!");
    return 1;
  }

  printf("Enter the number of terms (an): ");
  if (scanf("%d", &n) != 1 || getchar() != '\n' || n <= first_term) {
    puts("Error: Invalid input!");
    return 1;
  }

  if (choice == 1) {
    printf("Enter the common difference: ");
    if (scanf("%d", &common_difference_or_ratio) != 1 || getchar() != '\n') {
      puts("Error: Invalid input!");
      return 1;
    }

    printf("\nThe sum of the arithmetic sequence is: %.2lf\n",
           arithmetic_sum(first_term, common_difference_or_ratio, n));
  } else {
    printf("Enter the common ratio: ");
    if (scanf("%d", &common_difference_or_ratio) != 1 || getchar() != '\n') {
      puts("Error: Invalid input!");
      return 1;
    }

    printf("\nThe sum of the geometric sequence is: %.2lf\n",
           geometric_sum(first_term, common_difference_or_ratio, n));
  }

  return 0;
}
