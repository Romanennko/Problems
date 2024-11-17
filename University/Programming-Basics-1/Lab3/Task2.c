#include <stdio.h>

char *thisDay(int day_num) {
  char *result;

  switch (day_num) {
  case 1:
    result = "Monday";
    break;
  case 2:
    result = "Tuesday";
    break;
  case 3:
    result = "Wednesday";
    break;
  case 4:
    result = "Thursday";
    break;
  case 5:
    result = "Friday";
    break;
  case 6:
    result = "Saturday";
    break;
  case 7:
    result = "Sunday";
    break;
  default:
    result = "Non-existent day";
    break;
  }

  return result;
}

int main() {
  int day_number;

  printf("Enter the day number (1-7): ");
  if (scanf("%d", &day_number) != 1 || getchar() != '\n' || day_number < 1 ||
      day_number > 7) {
    puts("Error: Invalid input!");
    return 1;
  }

  printf("\nA day with a number %d is: %s\n", day_number, thisDay(day_number));

  return 0;
}
