#include <stdio.h>

int main()
{
    int count;

    printf("Enter a number between 1 and 10:  ");
    if (scanf("%d", &count) != 1 || count <= 0 ||count > 10) {
        puts("ERROR!!!");
        return 1;
    }

    for (count; count > 0; count--) {
        switch (count) {
            case 10:
                puts("Ten!");
                break;
            case 9:
                puts("Nine!");
                break;
            case 8:
                puts("Eight!");
                break;
            case 7:
                puts("Seven!");
                break;
            case 6:
                puts("Six!");
                break;
            case 5:
                puts("Five!");
                break;
            case 4:
                puts("Four!");
                break;
            case 3:
                puts("Tree!");
                break;
            case 2:
                puts("Two!");
                break;
            case 1:
                puts("One!");
                break;
        }
    }
    puts("START!!!");

    return 0;
}
