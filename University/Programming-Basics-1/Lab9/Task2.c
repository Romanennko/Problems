#include <stdio.h>
#include <stdlib.h>

#define MAX 40

enum Boolean {
    FALSE,
    TRUE
};

void read_file_chars(FILE *file);

int main() {
    char filename[MAX];
    FILE *file;

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file!");
        return 1;
    }

    read_file_chars(file);

    if(fclose(file)) {
        perror("Error closing file!");
        return 1;
    }

    return 0;
}

void read_file_chars(FILE *file) {
    int inside_comment = FALSE;
    char ch;
    
    while ((ch = fgetc(file)) != EOF) {
        if (!inside_comment && ch == '/' && (ch = fgetc(file)) == '*') {
            inside_comment = TRUE;
            continue;
        }
        
        if (inside_comment) {
            if (ch == '*') {
                if ((ch = fgetc(file)) == '/') {
                    inside_comment = FALSE;
                    puts("");
                    continue;
                } else {
                    putchar('*');
                    putchar(ch);
                }
            } else {
                putchar(ch);
            }
        }
    }
}
