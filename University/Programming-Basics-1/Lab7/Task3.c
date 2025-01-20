#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 4
#define COLUMNS 4
#define RANDOM_MIN -10
#define RANDOM_MAX 10

void fill_matrix(int matrix[ROWS][COLUMNS]);
void print_matrix(int matrix[ROWS][COLUMNS]);
void fill_table(int *table, int matrix[ROWS][COLUMNS]);
void print_table(int *table, int size);
void selection_sort_table(int *array, int size);
void swap(int *first, int *second);
void fill_sorted_matrix(int *table, int matrix[ROWS][COLUMNS]);

int main()
{
    int matrixA[ROWS][COLUMNS];
    int tableA[ROWS * COLUMNS];

    fill_matrix(matrixA);
    printf("Matrix A before sorting:\n");
    print_matrix(matrixA);
    puts("");

    fill_table(tableA, matrixA);

    selection_sort_table(tableA, ROWS * COLUMNS);

    fill_sorted_matrix(tableA, matrixA);
    printf("Matrix A after sorting elements:\n");
    print_matrix(matrixA);
    puts("");

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
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            printf("%4d", matrix[i][j]);
        }
        puts("");
    }
}


void fill_table(int *table, int matrix[ROWS][COLUMNS])
{
    int index = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            table[index++] = matrix[i][j];
        }
    }
}


void fill_sorted_matrix(int *table, int matrix[ROWS][COLUMNS])
{
    int index = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            matrix[i][j] = table[index++];
        }
    }
}


void print_table(int *table, int size)
{
    for (int i = 0; i < size; i++) {
        printf("%4d", table[i]);
    }
    puts("");
}


void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}


void selection_sort_table(int *array, int size)
{
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(&array[min_index], &array[i]);
        }
    }
}
