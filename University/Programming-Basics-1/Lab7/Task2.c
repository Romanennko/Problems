#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLUMNS 4
#define RANDOM_MAX 5

void fill_matrix(int matrix[ROWS][COLUMNS]);
void print_matrix(int matrix[ROWS][COLUMNS]);
int find_min_in_matrix(int matrix[ROWS][COLUMNS]);
int find_max_in_matrix(int matrix[ROWS][COLUMNS]);

int main() {
  int matrixA[ROWS][COLUMNS];

  fill_matrix(matrixA);

  printf("Matrix A:\n");
  print_matrix(matrixA);

  printf("\nMinimum value = %d", find_min_in_matrix(matrixA));
  printf("\nMaximum value = %d\n", find_max_in_matrix(matrixA));

  return 0;
}

void fill_matrix(int matrix[ROWS][COLUMNS]) {
  srand(time(0));
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      matrix[i][j] = -5 + rand() % 11;
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

int find_min_in_matrix(int matrix[ROWS][COLUMNS]) {
  int min = matrix[0][0];
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      if (matrix[i][j] < min) {
        min = matrix[i][j];
      }
    }
  }
  return min;
}

int find_max_in_matrix(int matrix[ROWS][COLUMNS]) {
  int max = matrix[0][0];
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      if (matrix[i][j] > max) {
        max = matrix[i][j];
      }
    }
  }
  return max;
}
