#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_RANDOM_NUMBER 6
#define MAX_RANDOM_NUMBER 25

#define ROWS 5
#define COLS 5

void fill_matrix_random_numbers(int matrix[ROWS][COLS]);
int calculate_difference_diagonals(int matrix[ROWS][COLS]);
void print_matrix(int matrix[ROWS][COLS]);

int main() {
    int matrix[ROWS][COLS];

    fill_matrix_random_numbers(matrix);
    print_matrix(matrix);

    int difference = calculate_difference_diagonals(matrix);
    printf("\nDifference between the sum of the elements of the main diagonal and the sum of the elements of the secondary diagonal: %d\n", difference);
    
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

int calculate_difference_diagonals(int matrix[ROWS][COLS]) {
    int sum_diagonal = 0, sum_anti_diagonal = 0;

    int i;
    for (i = 0; i < ROWS; i++) {
        sum_diagonal += matrix[i][i];
        sum_anti_diagonal += matrix[i][ROWS - i - 1];
    }

    return sum_diagonal - sum_anti_diagonal;
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
