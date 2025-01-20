#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DL 50
#define N 5

struct personal_data {
  char first_name[DL];
  char last_name[DL];
};

void input_data(struct personal_data *person);
void print_data(const struct personal_data *person);
void sort_by_last_name(struct personal_data arr[], int n);
void sort_by_first_name(struct personal_data arr[], int n);
void swap(struct personal_data *a, struct personal_data *b);

int main(void) {
  struct personal_data people[N];

  for (int i = 0; i < N; i++) {
    printf("Enter data for person %d:\n", i + 1);
    input_data(&people[i]);
  }

  printf("\nData before sorting:\n");
  for (int i = 0; i < N; i++) {
    print_data(&people[i]);
  }

  sort_by_last_name(people, N);
  printf("\nData sorted by last name:\n");
  for (int i = 0; i < N; i++) {
    print_data(&people[i]);
  }

  sort_by_first_name(people, N);
  printf("\nData sorted by first name:\n");
  for (int i = 0; i < N; i++) {
    print_data(&people[i]);
  }

  return 0;
}

void input_data(struct personal_data *person) {
  printf("Enter first name: ");
  fgets(person->first_name, DL, stdin);
  person->first_name[strcspn(person->first_name, "\n")] = 0;

  printf("Enter last name: ");
  fgets(person->last_name, DL, stdin);
  person->last_name[strcspn(person->last_name, "\n")] = 0;
}

void print_data(const struct personal_data *person) {
  printf("Name: %s %s\n", person->first_name, person->last_name);
}

void sort_by_last_name(struct personal_data arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (strcmp(arr[i].last_name, arr[j].last_name) > 0) {
        swap(&arr[i], &arr[j]);
      }
    }
  }
}

void sort_by_first_name(struct personal_data arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (strcmp(arr[i].first_name, arr[j].first_name) > 0) {
        swap(&arr[i], &arr[j]);
      }
    }
  }
}

void swap(struct personal_data *a, struct personal_data *b) {
  struct personal_data temp = *a;
  *a = *b;
  *b = temp;
}
