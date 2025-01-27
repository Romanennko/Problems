#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

int compare_rows(char *first_text_file, char *second_text_file);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <first_text_file> <second_text_file>\n", argv[0]);
        return 1;
    }

    char *first_text_file = argv[1];
    char *second_text_file = argv[2];

    compare_rows(first_text_file, second_text_file);

    return 0;
}

int compare_rows(char *first_text_file, char * second_text_file) {
    FILE *first_file;
    if ((first_file = fopen(first_text_file, "r")) == NULL) {
        perror("Error opening first file!");
        return 1;
    }

    FILE *second_file;
    if ((second_file = fopen(second_text_file, "r")) == NULL) {
        perror("Error opening second file!");
        return 1;
    }

    char first_line[MAX_LINE_LENGTH];
    char second_line[MAX_LINE_LENGTH];

    int line_number = 1;
    while (fgets(first_line, sizeof(first_line), first_file) != NULL && fgets(second_line, sizeof(second_line), second_file) != NULL) {
        if (strcmp(first_line, second_line) == 0) {
            printf("Line %d: %s", line_number, first_line);
        }
        line_number++;
    }

    if (fclose(first_file) || fclose(second_file)) {
        perror("Error closing files!");
        return 1;
    }   

    return 0;
}
