#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void replace_pattern(char *sentence, char *pattern, char *replacement);
void print_result(char *words[], int count);


int main() {
    char sentence[256], pattern[50], replacement[50];

    printf("Enter the sentence: ");
    scanf("%[^\n]s", sentence);
    while(getchar() != '\n');

    printf("Enter the pattern: ");
    scanf("%s", pattern);
    while(getchar() != '\n');

    printf("Enter the replacement: ");
    scanf("%s", replacement);
    while(getchar() != '\n');

    replace_pattern(sentence, pattern, replacement);

    return 0;
}


void replace_pattern(char *sentence, char *pattern, char *replacement) {
    int word_count = 0;
    char *words[256];
    char *word = strtok(sentence, " ");

    while (word != NULL) {
        if (strcmp(word, pattern) == 0) {
            word = replacement;
        }

        words[word_count] = word;
        word_count++;
        word = strtok(NULL, " ");
    }

    print_result(words, word_count);
}


void print_result(char *words[], int count) {
    printf("\nResult: ");
    for (int i = 0; i < count; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");
}
