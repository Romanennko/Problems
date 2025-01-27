#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_RANDOM_NUMBER -11
#define MAX_RANDOM_NUMBER 11

#define ROWS 4
#define COLS 3

void fill_the_matrix_random_numbers(double matrix[ROWS][COLS]);
void multiply_the_matrix_by_number(double matrix[ROWS][COLS], double user_num);
void print_the_matrix(double matrix[ROWS][COLS]);

int main() {
    double matrix[ROWS][COLS];

    fill_the_matrix_random_numbers(matrix);
    print_the_matrix(matrix);

    double user_num;

    printf("Enter a number: ");
    scanf("%lf", &user_num);

    multiply_the_matrix_by_number(matrix, user_num);
    print_the_matrix(matrix);
}

void fill_the_matrix_random_numbers(double matrix[ROWS][COLS]) {
    int i, j;
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            matrix[i][j] = MIN_RANDOM_NUMBER + (double) rand() / RAND_MAX * (MAX_RANDOM_NUMBER - MIN_RANDOM_NUMBER);
        }
    }
}


void multiply_the_matrix_by_number(double matrix[ROWS][COLS], double user_num) {
    int i, j;
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            matrix[i][j] *= user_num;
        }
    }
}


void print_the_matrix(double matrix[ROWS][COLS]) {
    int i, j;
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("%lf ", matrix[i][j]);
        }
        printf("\n");
    }
}
