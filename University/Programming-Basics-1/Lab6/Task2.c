#include <stdio.h>
#include <string.h>

void sorted_word(char *word, int len);
void its_anagram(char *fw, char *sw, int len);

int main() {
  char first_word[50], second_word[50];

  printf("Enter the first word: ");
  scanf("%s", first_word);
  while (getchar() != '\n')
    ;

  printf("Enter the second word: ");
  scanf("%s", second_word);
  while (getchar() != '\n')
    ;

  if (strlen(first_word) != strlen(second_word))
    puts("These words are not anagrams");
  else {
    sorted_word(first_word, strlen(first_word));
    sorted_word(second_word, strlen(second_word));

    its_anagram(first_word, second_word, strlen(first_word));
  }
  return 0;
}

void sorted_word(char *word, int len) {
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (tolower(word[i]) < tolower(word[j])) {
        char temp = tolower(word[i]);
        word[i] = tolower(word[j]);
        word[j] = temp;
      }
    }
  }
}

void its_anagram(char *fw, char *sw, int len) {
  for (int i = 0; i < len; i++) {
    if (fw[i] != sw[i]) {
      puts("\nThese words are not anagrams");
      return;
    }
  }

  puts("\nThese words are anagrams");
}
