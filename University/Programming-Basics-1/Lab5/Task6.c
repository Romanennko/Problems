#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20
#define RANGE 9

void fill_table_with_random_numbers(int *arr, int n);
void sort_table(int *arr, int n);
void print_table(int *arr, int n);

double calculate_median(int *arr, int n);
double calculate_first_quartile(int *arr, int n);
double calculate_third_quartile(int *arr, int n);

int main() {
  int table[SIZE];

  fill_table_with_random_numbers(table, SIZE);

  sort_table(table, SIZE);

  printf("Sorted array:\n");
  print_table(table, SIZE);

  double median = calculate_median(table, SIZE);
  double first_quartile = calculate_first_quartile(table, SIZE);
  double third_quartile = calculate_third_quartile(table, SIZE);

  printf("\nMedian: %.2f\n", median);
  printf("First quartile: %.2f\n", first_quartile);
  printf("Third quartile: %.2f\n", third_quartile);

  return 0;
}

void fill_table_with_random_numbers(int *arr, int n) {
  srand(time(NULL));

  for (int i = 0; i < n; i++) {
    arr[i] = (rand() % RANGE) - 4;
  }
}

void sort_table(int *arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void print_table(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

double calculate_median(int *arr, int n) {
  if (n % 2 == 0) {
    return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
  } else {
    return arr[n / 2];
  }
}

double calculate_first_quartile(int *arr, int n) {
  int index = n / 4;
  return arr[index];
}

double calculate_third_quartile(int *arr, int n) {
  int index = 3 * n / 4;
  return arr[index];
}
