#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 30


void fill_table_with_random_numbers(int *tab, int rozmiar);

void print_table(int *tab, int n);

double average_table(int *tab, int n);

double standard_deciation(int *tab, int n, double average);


int main()
{
    int table[N];

    fill_table_with_random_numbers(table, N);
    print_table(table, N);

    double average = average_table(table, N);
    printf("\nAverage: %.5f\n", average);

    printf("\nStandard deviation: %lf\n", standard_deciation(table, N, average));

    return 0;
}


void fill_table_with_random_numbers(int *tab, int rozmiar) {
    srand(time(NULL));

    int i;
    for (i = 0; i < rozmiar; i++)
        tab[i] = -100 + rand()%201;

    return;
}


void print_table(int *tab, int n) {
    int i;

    printf("Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("\n");

    return;
}

double average_table(int *tab, int n) {
    double sum = 0, average;

    int i;
    for (i = 0; i < n; i++)
        sum += tab[i];

    average = sum / n;

    return average;
}

double standard_deciation(int *tab, int n, double average) {
    double sum = 0;

    int i;
    for (i = 0; i < n; i++)
        sum += pow((tab[i] - average), 2);

    return sqrt(sum / n);
}
