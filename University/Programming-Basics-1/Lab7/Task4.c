#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 4
#define COLUMNS 4
#define RANDOM_MIN -20
#define RANDOM_MAX 20

void fill_matrix(int matrix[ROWS][COLUMNS]);
void print_matrix(int matrix[ROWS][COLUMNS]);
void sum_of_rows_and_columns_matrix(int matrix[ROWS][COLUMNS]);

int main()
{
    int matrixA[ROWS][COLUMNS];

    fill_matrix(matrixA);

    printf("Matrix A:\n");
    print_matrix(matrixA);
    puts("");

    sum_of_rows_and_columns_matrix(matrixA);

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


void print_matrix(int matrix[ROWS][COLUMNS])
{
    printf("[\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            printf("%4d", matrix[i][j]);
        }
        puts("");
    }
    printf("]\n");
}


void sum_of_rows_and_columns_matrix(int matrix[ROWS][COLUMNS])
{
    for (int i = 0; i < ROWS; i++) {
        int sum_of_row_elements = 0;
        int sum_of_column_elements = 0;

        for (int j = 0; j < COLUMNS; j++) {
            sum_of_row_elements += matrix[i][j];
            sum_of_column_elements += matrix[j][i];
        }

        printf("Sum of row %d = %4d    Sum of column %d = %4d\n", i + 1, sum_of_row_elements, i + 1, sum_of_column_elements);
    }
}
