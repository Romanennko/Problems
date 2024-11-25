#include <stdio.h>

#define SIZE 5

void fill_array(int arr[], int size);

void print_array(int arr[], int size);

void reverse_array(int arr[], int size);


int main() {
    int array[SIZE];

    printf("Enter %d integers:\n", SIZE);
    fill_array(array, SIZE);

    printf("\nOriginal array:\n");
    print_array(array, SIZE);

    reverse_array(array, SIZE);
    printf("\nReversed array:\n");
    print_array(array, SIZE);

    return 0;
}


void fill_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}


void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void reverse_array(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
