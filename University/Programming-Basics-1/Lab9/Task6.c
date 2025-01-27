#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBERS_COUNT 20
#define MIN_VALUE -10
#define MAX_VALUE 10

int getRandomNumber(int min, int max);
void writeNumbersToFile();
void readAndAnalyzeNumbers();

int main() {
    srand(time(NULL));

    writeNumbersToFile();

    readAndAnalyzeNumbers();

    return 0;
}

int getRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

void writeNumbersToFile() {
    FILE *file = fopen("numbers.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }

    for (int i = 0; i < NUMBERS_COUNT; i++) {
        int num = getRandomNumber(MIN_VALUE, MAX_VALUE);
        fprintf(file, "%d\n", num);
    }

    fclose(file);
    printf("Numbers have been written to file successfully!\n\n");
}

void readAndAnalyzeNumbers() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return;
    }

    int numbers[NUMBERS_COUNT];
    int count = 0;
    int max = MIN_VALUE - 1;
    int min = MAX_VALUE + 1;

    printf("Numbers from file:\n");
    while (count < NUMBERS_COUNT && fscanf(file, "%d", &numbers[count]) == 1) {
        printf("%d ", numbers[count]);

        if (numbers[count] > max) max = numbers[count];
        if (numbers[count] < min) min = numbers[count];

        count++;
    }

    fclose(file);

    printf("\nLargest number: %d", max);
    printf("\nSmallest number: %d\n", min);
}
