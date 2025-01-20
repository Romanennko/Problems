#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLUMNS 5
#define RANDOM_MIN 0
#define RANDOM_MAX 15

void fill_matrix(int matrix[ROWS][COLUMNS]);
void print_matrix(int matrix[ROWS][COLUMNS]);
void swap_numbers_on_diagonal(int matrix[ROWS][COLUMNS]);

int main()
{
    int matrix[ROWS][COLUMNS];

    fill_matrix(matrix);

    puts("Matrix:");
    print_matrix(matrix);

    puts("\nMatrix before swap the numbers on diagonal:");
    swap_numbers_on_diagonal(matrix);
    print_matrix(matrix);

    return 0;
}


void fill_matrix(int matrix[ROWS][COLUMNS])
{
    srand(time(0));
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            matrix[i][j] = RANDOM_MIN + rand() % (RANDOM_MAX - RANDOM_MIN + 1);
        }
    }
}


void swap_numbers_on_diagonal(int matrix[ROWS][COLUMNS]) {
    int i, j = ROWS;
    for (i = 0; i < 3; i++) {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[j - i - 1][j - i - 1];
        matrix[j - i - 1][j - i - 1] = temp;
    }
}


void print_matrix(int matrix[ROWS][COLUMNS])
{
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            printf("%4d  ", matrix[i][j]);
        }
        printf("\n");
    }
}

