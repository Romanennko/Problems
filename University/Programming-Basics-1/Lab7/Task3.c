#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_RANDOM_NUMBER -10
#define MAX_RANDOM_NUMBER 10

#define ROWS 4
#define COLS 4

void fill_matrix_random_numbers(int matrix[ROWS][COLS]);
void sort_matrix(int matrix[ROWS][COLS]);
void print_matrix(int matrix[ROWS][COLS]);

int main() {
    int matrix[ROWS][COLS];

    fill_matrix_random_numbers(matrix);
    printf("Original matrix:\n");
    print_matrix(matrix);

    sort_matrix(matrix);
    printf("\nSorted matrix:\n");
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

void sort_matrix(int matrix[ROWS][COLS]) {
    int temp_array[ROWS * COLS];
    int i, j, temp;
    
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            temp_array[i * COLS + j] = matrix[i][j];
        }
    }

    for (i = 0; i < ROWS * COLS - 1; i++) {
        for (j = 0; j < ROWS * COLS -1; j++) {
            if (temp_array[j] > temp_array[j + 1]) {
                temp = temp_array[j];
                temp_array[j] = temp_array[j + 1];
                temp_array[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            matrix[i][j] = temp_array[i * COLS + j];
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
