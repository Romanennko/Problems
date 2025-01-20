#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 4
#define COLUMNS 3

void fill_matrix_a_random_number(double matrix[ROWS][COLUMNS]);
void multiplication(double matrix[ROWS][COLUMNS], double user_num);
void print_the_matrix(double matrix[ROWS][COLUMNS]);

int main() {
  double matrix[ROWS][COLUMNS];
  double user_num;

  fill_matrix_a_random_number(matrix);

  printf("Enter the number to multiply the matrix: ");
  if (scanf("%lf", &user_num) != 1) {
    printf("Invalid input. Exiting program.\n");
    return 1;
  }

  printf("Your number = %.2lf\n\n", user_num);

  puts("Starting matrix: ");
  print_the_matrix(matrix);
  puts("");

  printf("Starting matrix * %.2lf: \n", user_num);
  multiplication(matrix, user_num);
  print_the_matrix(matrix);

  return 0;
}

void fill_matrix_a_random_number(double matrix[ROWS][COLUMNS]) {
  srand(time(0));

  double max = 11.0, min = -11.0;

  for (int i = 0; i < ROWS; i++)
    for (int j = 0; j < COLUMNS; j++)
      matrix[i][j] = min + (double)rand() / RAND_MAX * (max - min);
}

void multiplication(double matrix[ROWS][COLUMNS], double user_num) {
  for (int i = 0; i < ROWS; i++)
    for (int j = 0; j < COLUMNS; j++)
      matrix[i][j] *= user_num;
}

void print_the_matrix(double matrix[ROWS][COLUMNS]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++)
      printf("%.2lf    ", matrix[i][j]);
    puts("");
  }
}
