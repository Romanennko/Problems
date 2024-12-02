#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define RANGE 11

void fill_table_with_random_numbers(int *tab, int n);
void fill_table_with_zero_numbers(int *tab, int n);
void how_many_times(int *tab1, int *tab2, int n);
void print_table(int *tab, int n);

int main() {
  int table[SIZE];
  int histogram[RANGE];

  fill_table_with_random_numbers(table, SIZE);
  fill_table_with_zero_numbers(histogram, RANGE);

  how_many_times(table, histogram, SIZE);

  printf("An array populated with pseudorandom numbers:\n");
  print_table(table, SIZE);

  printf("\nHistogram of number occurrences:\n");
  print_table(histogram, RANGE);

  return 0;
}

void fill_table_with_random_numbers(int *tab, int n) {
  srand(time(NULL));

  for (int i = 0; i < n; i++) {
    tab[i] = (rand() % RANGE) - 5;
  }
}

void fill_table_with_zero_numbers(int *tab, int n) {
  for (int i = 0; i < n; i++) {
    tab[i] = 0;
  }
}

void how_many_times(int *tab1, int *tab2, int n) {
  for (int i = 0; i < n; i++) {
    tab2[tab1[i] + 5]++;
  }
}

void print_table(int *tab, int n) {
  for (int i = 0; i < n; i++) {
    printf("Array[%d]: %d\n", i, tab[i]);
  }
}
