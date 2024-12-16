#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double input_number();
void convert_comma_to_dot(char *number_with_comma);
void convert_dot_to_comma(char *number_with_dot);
void convert_double_to_str(double number);
void print_result(char *result);

int main() {
  double user_number_double = input_number();

  user_number_double += 0.001;

  convert_double_to_str(user_number_double);

  return 0;
}

double input_number() {
  char user_number_str[50];

  printf("Enter a real number: ");
  scanf("%s", user_number_str);

  convert_comma_to_dot(user_number_str);

  return atof(user_number_str);
}

void convert_comma_to_dot(char *number_with_comma) {
  for (int i = 0; number_with_comma[i] != '\0'; i++) {
    if (number_with_comma[i] == ',') {
      number_with_comma[i] = '.';
      break;
    }
  }
}

void convert_dot_to_comma(char *number_with_dot) {
  for (int i = 0; number_with_dot[i] != '\0'; i++) {
    if (number_with_dot[i] == '.') {
      number_with_dot[i] = ',';
      break;
    }
  }
}

void convert_double_to_str(double number) {
  char buffer[50];

  snprintf(buffer, 50, "%.10f", number);

  convert_dot_to_comma(buffer);

  print_result(buffer);
}

void print_result(char *result) { printf("\nResult: %s\n", result); }
