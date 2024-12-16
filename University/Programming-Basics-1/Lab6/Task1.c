#include <stdio.h>
#include <string.h>

void revers(char *w, char *rw, int len);
void its_palindrome(char *w, char *rw, int len);

int main() {
  char word[50], revers_word[50];

  printf("Enter the word: ");
  scanf("%s", word);
  while (getchar() != '\n')
    ;

  revers(word, revers_word, strlen(word));

  its_palindrome(word, revers_word, strlen(word));

  return 0;
}

void revers(char *w, char *rw, int len) {
  strcpy(rw, w);

  for (int i = 0; i < len / 2; i++) {
    char temp = rw[i];
    rw[i] = rw[len - i - 1];
    rw[len - i - 1] = temp;
  }

  return;
}

void its_palindrome(char *w, char *rw, int len) {
  for (int i = 0; i < len; i++) {
    if (tolower(w[i]) != tolower(rw[i])) {
      puts("\nWord is not palindrome");
      return;
    }
  }

  puts("\nWord is palindrome");
  return;
}
