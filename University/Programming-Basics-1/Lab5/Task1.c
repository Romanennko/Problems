#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void fill_table_with_random_numbers(int *arr, int n);
void fill_table_with_zero_numbers(int *arr, int n);
void how_many_times(int *arr1, int *arr2, int n);
void print_table(int *arr, int n);

int main() {
  int array[SIZE];
  int histogram[SIZE + 1];

  fill_table_with_random_numbers(array, SIZE);
  fill_table_with_zero_numbers(histogram, SIZE + 1);

  how_many_times(array, histogram, SIZE);

  printf("An array populated with pseudorandom numbers:\n");
  print_table(array, SIZE);

  printf("\nHistogram of number occurrences:\n");
  print_table(histogram, SIZE + 1);

  return 0;
}

void fill_table_with_random_numbers(int *arr, int n) {
  srand(time(NULL));

  int i;
  for (i = 0; i < n; i++)
    arr[i] = rand() % 11;

  return;
}

void fill_table_with_zero_numbers(int *arr, int n) {
  int i;
  for (i = 0; i < n + 1; i++)
    arr[i] = 0;

  return;
}

void how_many_times(int *arr1, int *arr2, int n) {
  int i;
  for (i = 0; i < n; i++)
    arr2[arr1[i]]++;

  return;
}

void print_table(int *arr, int n) {
  int i;
  for (i = 0; i < n; i++)
    printf("Array[%d]: %d\n", i, arr[i]);

  return;
}
