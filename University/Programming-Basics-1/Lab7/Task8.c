#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARS 100
#define MAX_WORDS 10

void input_words(char words[MAX_WORDS][MAX_CHARS]);
void print_words(char words[MAX_WORDS][MAX_CHARS]);
void find_longest_word(char words[MAX_WORDS][MAX_CHARS], char longest_word[MAX_CHARS]);

int main() {
    char words[MAX_WORDS][MAX_CHARS];

    input_words(words);
    puts("\nWords entered:");
    print_words(words);

    char longest_word[MAX_CHARS];
    find_longest_word(words, longest_word);

    return 0;
}


void input_words(char words[MAX_WORDS][MAX_CHARS]) {
    int i;
    printf("Enter %d words:\n", MAX_WORDS);
    for ( i = 0; i < MAX_WORDS; i++) {
        printf("Word %d: ", i + 1);
        scanf("%s", words[i]);
    }
}

void print_words(char words[MAX_WORDS][MAX_CHARS]) {
    int i, j;
    for (i = 0; i < MAX_WORDS; i++) {
        printf("Word %d: %s\n", i + 1, words[i]);
    }
}

void find_longest_word(char words[MAX_WORDS][MAX_CHARS], char longest_word[MAX_CHARS]) {
    int i;
    for (i = 0; i < MAX_WORDS; i++) {
        if (strlen(words[i]) > strlen(longest_word)) {
            strcpy(longest_word, words[i]);
        }
    }
    printf("\nThe longest word is: %s\n", longest_word);
}
