#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLUMNS 5
#define RANDOM_MIN 6
#define RANDOM_MAX 25

void fill_matrix(int matrix[ROWS][COLUMNS]);
void print_matrix(int matrix[ROWS][COLUMNS]);
int calculate_diagonal_difference(int matrix[ROWS][COLUMNS]);

int main() {
  int matrix[ROWS][COLUMNS];

  fill_matrix(matrix);

  printf("Matrix:\n");
  print_matrix(matrix);

  int difference = calculate_diagonal_difference(matrix);
  printf("\nDifference between the sums of main and anti-diagonal: %d\n",
         difference);

  return 0;
}

void fill_matrix(int matrix[ROWS][COLUMNS]) {
  srand(time(0));
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      matrix[i][j] = RANDOM_MIN + rand() % (RANDOM_MAX - RANDOM_MIN + 1);
    }
  }
}

void print_matrix(int matrix[ROWS][COLUMNS]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      printf("%4d", matrix[i][j]);
    }
    printf("\n");
  }
}

int calculate_diagonal_difference(int matrix[ROWS][COLUMNS]) {
  int sum_main_diagonal = 0;
  int sum_anti_diagonal = 0;

  for (int i = 0; i < ROWS; i++) {
    sum_main_diagonal += matrix[i][i];
    sum_anti_diagonal += matrix[i][ROWS - 1 - i];
  }

  return sum_main_diagonal - sum_anti_diagonal;
}
