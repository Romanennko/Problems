#include <stdio.h>
#include <string.h>

#define MAX_WORD 100
#define NUM_WORDS 10

void inputWords(char array[NUM_WORDS][MAX_WORD]);
void printWords(char array[NUM_WORDS][MAX_WORD]);
void findLongestWord(char array[NUM_WORDS][MAX_WORD], char longest[MAX_WORD]);

int main() {
    char array[NUM_WORDS][MAX_WORD];
    char longest[MAX_WORD] = "";

    inputWords(array);
    printWords(array);
    findLongestWord(array, longest);

    printf("\nLongest word: %s\n", longest);

    return 0;
}


void inputWords(char array[NUM_WORDS][MAX_WORD]) {
    printf("Enter 10 words:\n");
    for (int i = 0; i < NUM_WORDS; i++) {
        printf("Word %d: ", i + 1);
        scanf("%s", array[i]);
    }
}


void printWords(char array[NUM_WORDS][MAX_WORD]) {
    printf("\nEntered words:\n");
    for (int i = 0; i < NUM_WORDS; i++) {
        printf("%s\n", array[i]);
    }
}


void findLongestWord(char array[NUM_WORDS][MAX_WORD], char longest[MAX_WORD]) {
    for (int i = 0; i < NUM_WORDS; i++) {
        if (strlen(array[i]) > strlen(longest)) {
            strcpy(longest, array[i]);
        }
    }
}
