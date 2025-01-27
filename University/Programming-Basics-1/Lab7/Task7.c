#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_RANDOM_NUMBER 0
#define MAX_RANDOM_NUMBER 15

#define ROWS 5
#define COLS 5

void fill_matrix_random_numbers(int matrix[ROWS][COLS]);
void swap_numbers_in_anti_diagonal(int matrix[ROWS][COLS]);
void print_matrix(int matrix[ROWS][COLS]);

int main() {
    int matrix[ROWS][COLS];

    fill_matrix_random_numbers(matrix);
    print_matrix(matrix);

    swap_numbers_in_anti_diagonal(matrix);
    printf("\nMatrix after swapping numbers in the main diagonal:\n");
    print_matrix(matrix);

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

void swap_numbers_in_anti_diagonal(int matrix[ROWS][COLS]) {
    int i, j, temp;
    for (i = 0; i < ROWS / 2; i++) {
        temp = matrix[i][COLS - i - 1];
        matrix[i][COLS - i - 1] = matrix[COLS - i - 1][i];
        matrix[COLS - i - 1][i] = temp;
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
