#include <stdio.h>

int contains_abba(char input[]) {
  for (int i = 0; i <= 6; i++) {
    if (input[i] == 'a' && input[i + 1] == 'b' && input[i + 2] == 'b' &&
        input[i + 3] == 'a') {
      return 1;
    }
  }
  return 0;
}

int main() {
  char chars[10];

  for (int i = 0; i < 10; i++) {
    printf("Enter character %d (a or b): ", i + 1);
    if (scanf(" %c", &chars[i]) != 1 || getchar() != '\n' ||
        (chars[i] != 'a' && chars[i] != 'b')) {
      puts("Error: Invalid input!");
      return 1;
    }
  }

  if (contains_abba(chars)) {
    printf("\nThe sequence 'abba' was found in the string!\n");
  } else {
    printf("\nThe sequence 'abba' was not found in the string!\n");
  }

  return 0;
}
