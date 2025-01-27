#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_FILENAME_LENGTH 256

#define ROWS 4
#define COLS 4

#define MIN_RANDOM_NUMBER -10
#define MAX_RANDOM_NUMBER 10

void fill_matrix_random_numbers(int matrix[ROWS][COLS]);
int write_matrix_to_file(int matrix[ROWS][COLS], char *filename);
int read_matrix_from_file(int matrix[ROWS][COLS], char *filename);

int main() {
    int matrix[ROWS][COLS];
    char filename[MAX_FILENAME_LENGTH];

    printf("Enter filename: ");
    scanf("%s", filename);

    fill_matrix_random_numbers(matrix);

    if (write_matrix_to_file(matrix, filename)) {
        return 1;
    }
    
    if (read_matrix_from_file(matrix, filename)) {
        return 1;
    }

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

int write_matrix_to_file(int matrix[ROWS][COLS], char *filename) {
    FILE *file;

    file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file!");
        return 1;
    }

    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            fprintf(file, "%3d", matrix[i][j]);
        }
        fprintf(file, "\n");
    }

    if (fclose(file)) {
        perror("Error closing file!");
        return 1;
    }

    return 0;
}

int read_matrix_from_file(int matrix[ROWS][COLS], char *filename) {
    FILE *file;

    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file!");
        return 1;
    }

    printf("\nMatrix read from file:\n");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    if (fclose(file)) {
        perror("Error closing file!");
        return 1;
    }

    return 0;
}
