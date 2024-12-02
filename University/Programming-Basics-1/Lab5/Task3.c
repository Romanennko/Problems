#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 30
#define RANGE 9

void fill_table_with_random_numbers(int *arr, int n);
void fill_table_with_zero_numbers(int *arr, int n, int range);
void print_table(int *arr, int n);
void counting_sort(int *arr, int n, int range);

int main() {
  int array[SIZE];

  fill_table_with_random_numbers(array, SIZE);

  printf("Original array:\n");
  print_table(array, SIZE);

  counting_sort(array, SIZE, RANGE);

  printf("\nSorted array:\n");
  print_table(array, SIZE);

  return 0;
}

void fill_table_with_random_numbers(int *arr, int n) {
  srand(time(NULL));
  for (int i = 0; i < n; i++) {
    arr[i] = rand() % RANGE;
  }
}

void fill_table_with_zero_numbers(int *arr, int n, int range) {
  for (int i = 0; i < range; i++) {
    arr[i] = 0;
  }

  return;
}

void print_table(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%3d", arr[i]);
  }
  printf("\n");
}

void counting_sort(int *arr, int n, int range) {
  int histogram[range];
  int sorted[n];

  fill_table_with_zero_numbers(histogram, SIZE, RANGE);

  for (int i = 0; i < n; i++) {
    histogram[arr[i]]++;
  }

  for (int i = 1; i < range; i++) {
    histogram[i] += histogram[i - 1];
  }

  for (int i = n - 1; i >= 0; i--) {
    sorted[--histogram[arr[i]]] = arr[i];
  }

  for (int i = 0; i < n; i++) {
    arr[i] = sorted[i];
  }
}
