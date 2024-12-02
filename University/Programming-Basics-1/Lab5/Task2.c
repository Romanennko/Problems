#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 30

void fill_table_with_random_numbers(int *arr, int n);
void print_table(int *arr, int n);
void insertion_sort(int *arr, int n);

int main() {
  int array[SIZE];

  fill_table_with_random_numbers(array, SIZE);

  printf("\nOriginal array:\n");
  print_table(array, SIZE);

  insertion_sort(array, SIZE);
  printf("\nSorted array:\n");
  print_table(array, SIZE);

  return 0;
}

void fill_table_with_random_numbers(int *arr, int n) {
  srand(time(NULL));

  int i;
  for (i = 0; i < n; i++)
    arr[i] = rand() % 9;

  return;
}

void print_table(int *arr, int n) {
  int i;
  for (i = 0; i < n; i++)
    printf("%3d", arr[i]);
  printf("\n");

  return;
}

void insertion_sort(int *arr, int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}
