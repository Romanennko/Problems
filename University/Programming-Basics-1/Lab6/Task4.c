#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_words(char *sentence);

int main() {
  char user_sentence[256];

  printf("Enter the sentence: ");
  scanf("%[^\n]s", user_sentence);
  while (getchar() != '\n')
    ;

  reverse_words(user_sentence);

  return 0;
}

void reverse_words(char *sentence) {
  char *words[256];
  int word_count = 0;

  char *word = strtok(sentence, " ");
  while (word != NULL) {
    words[word_count] = word;
    word_count++;
    word = strtok(NULL, " ");
  }

  printf("\nResult: ");
  for (int i = word_count - 1; i >= 0; i--) {
    printf("%s ", words[i]);
  }
}
