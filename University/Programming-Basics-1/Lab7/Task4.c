#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_RANDOM_NUMBER -20
#define MAX_RANDOM_NUMBER 20

#define ROWS 4
#define COLS 4

void fill_matrix_random_numbers(int matrix[ROWS][COLS]);
void sum_rows_elements(int matrix[ROWS][COLS]);
void sum_cols_elements(int matrix[ROWS][COLS]);
void print_matrix(int matrix[ROWS][COLS]);

int main() {
    int matrix[ROWS][COLS];

    fill_matrix_random_numbers(matrix);
    print_matrix(matrix);

    sum_rows_elements(matrix);
    sum_cols_elements(matrix);
    
    return 0;
}


void fill_matrix_random_numbers(int matrix[ROWS][COLS]) {
    srand(time(NULL));
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            matrix[i][j] = MIN_RANDOM_NUMBER + rand() % (MAX_RANDOM_NUMBER - MIN_RANDOM_NUMBER + 1);
        }
    }
}

void sum_rows_elements(int matrix[ROWS][COLS]) {
    int i, j, sum;
    int array_sum[ROWS];

    for (i = 0; i < ROWS; i++) {
        sum = 0;
        for (j = 0; j < COLS; j++) {
            sum += matrix[i][j];
        }
        array_sum[i] = sum;
    }

    printf("\nSum of rows elements:\n");
    for (i = 0; i < ROWS; i++) {
        printf("Row %d: %d\n", i + 1, array_sum[i]);
    }
}

void sum_cols_elements(int matrix[ROWS][COLS]) {
    int i, j, sum;
    int array_sum[COLS];

    for (j = 0; j < COLS; j++) {
        sum = 0;
        for (i = 0; i < ROWS; i++) {
            sum += matrix[i][j];
        }
        array_sum[j] = sum;
    }

    printf("\nSum of columns elements:\n");
    for (j = 0; j < COLS; j++) {
        printf("Column %d: %d\n", j + 1, array_sum[j]);
    }
}

void print_matrix(int matrix[ROWS][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}
