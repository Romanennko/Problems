#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_RANDOM_NUMBER -5
#define MAX_RANDOM_NUMBER 5

#define ROWS 3
#define COLS 4

void fill_matrix_random_numbers(int matrix[ROWS][COLS]);
void find_min_and_max_elements(int matrix[ROWS][COLS], int *min, int *max);
void print_matrix(int matrix[ROWS][COLS]);

int main() {
    int matrix[ROWS][COLS];

    fill_matrix_random_numbers(matrix);
    
    int min, max;

    find_min_and_max_elements(matrix, &min, &max);
    print_matrix(matrix);
    printf("Min: %d, Max: %d\n", min, max);

    return 0;
}


void fill_matrix_random_numbers(int matrix[ROWS][COLS]) {
    int i, j;
    srand(time(NULL));
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            matrix[i][j] = MIN_RANDOM_NUMBER + rand() % (MAX_RANDOM_NUMBER - MIN_RANDOM_NUMBER + 1);
        }
    }
}


void find_min_and_max_elements(int matrix[ROWS][COLS], int *min, int *max) {
    *min = matrix[0][0];
    *max = matrix[0][0];

    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (matrix[i][j] < *min) {
                *min = matrix[i][j];
            }
            if (matrix[i][j] > *max) {
                *max = matrix[i][j];
            }
        }
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
