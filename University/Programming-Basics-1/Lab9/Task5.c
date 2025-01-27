#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 50

struct Person {
    char name[MAX_NAME];
    char surname[MAX_NAME];
    int age;
    float height;
    float weight;
};

void addPerson() {
    struct Person person;
    FILE *file = fopen("people.txt", "a");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter person's data:\n");
    printf("Name: ");
    scanf("%s", person.name);
    printf("Surname: ");
    scanf("%s", person.surname);
    printf("Age: ");
    scanf("%d", &person.age);
    printf("Height (m): ");
    scanf("%f", &person.height);
    printf("Weight (kg): ");
    scanf("%f", &person.weight);

    fprintf(file, "%s %s %d %.2f %.2f\n", 
            person.name, person.surname, person.age, 
            person.height, person.weight);

    fclose(file);
    printf("\nPerson added successfully!\n");
}

void readPeople() {
    struct Person person;
    FILE *file = fopen("people.txt", "r");
    
    if (file == NULL) {
        printf("Error opening file or file doesn't exist!\n");
        return;
    }

    printf("\nPeople in database:\n");
    printf("----------------------------------------\n");
    printf("Name\tSurname\tAge\tHeight\tWeight\n");
    printf("----------------------------------------\n");

    while (fscanf(file, "%s %s %d %f %f", 
            person.name, person.surname, &person.age, 
            &person.height, &person.weight) == 5) {
        printf("%s\t%s\t%d\t%.2f\t%.2f\n", 
                person.name, person.surname, person.age, 
                person.height, person.weight);
    }

    printf("----------------------------------------\n");
    fclose(file);
}

int main() {
    int choice;

    do {
        printf("\nPeople Database Menu:\n");
        printf("1. Add new person\n");
        printf("2. View all people\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPerson();
                break;
            case 2:
                readPeople();
                break;
            case 3:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
