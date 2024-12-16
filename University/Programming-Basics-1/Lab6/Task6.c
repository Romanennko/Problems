#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void check_protocol(char *url, char *protocol);

int main() {
  char url[256], protocol[50];

  printf("Enter the URL: ");
  scanf("%s", url);
  while (getchar() != '\n')
    ;

  check_protocol(url, protocol);

  printf("\nProtocol: %s\n", protocol);

  return 0;
}

void check_protocol(char *url, char *protocol) {
  int count = 0;

  for (int i = 0; i < strlen(url) - 2; i++) {
    if (url[i] == ':' && url[i + 1] == '/' && url[i + 2] == '/') {
      strncpy(protocol, url, i);
      break;
    }
  }
}
