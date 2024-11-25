#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void fill_array_random(int arr[], int size, int min, int max);

void print_array(int arr[], int size);

void swap_halves(int arr[], int size);


int main() {
    int array[SIZE];

    fill_array_random(array, SIZE, 0, 20);

    printf("Original array:\n");
    print_array(array, SIZE);

    swap_halves(array, SIZE);

    printf("\nArray after swapping halves:\n");
    print_array(array, SIZE);

    return 0;
}


void fill_array_random(int arr[], int size, int min, int max) {
    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max - min + 1) + min;
    }
}


void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void swap_halves(int arr[], int size) {
    int mid = size / 2;
    for (int i = 0; i < mid; i++) {
        int temp = arr[i];
        arr[i] = arr[mid + i];
        arr[mid + i] = temp;
    }
}
