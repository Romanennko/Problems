#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        perror("Error opening file!");
        return 1;
    }

    int count_chars = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
        count_chars++;
    }

    fclose(file);
    printf("\nTotal characters: %d\n", count_chars);
    return 0;
}
