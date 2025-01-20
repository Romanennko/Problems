#include <stdio.h>
#define SIZE 8

struct personal_data {
    char first_name[SIZE];
    int number1;
    char last_name[SIZE];
    int number2;
};

void show_sizes(const struct personal_data *);
void show_addresses(const struct personal_data *);

int main()
{
   struct personal_data person;
   printf("\nThe structure 'personal_data' has a size of %d byte(s).\n\n", sizeof(person));
   show_sizes(&person);
   puts("");
   puts("");
   show_addresses(&person);
   return 0;
}

void show_sizes(const struct personal_data *data)
{
   puts("******* S I Z E S   O F   M E M B E R S *********");
   printf("            first_name: %d byte(s). \n",sizeof(data->first_name));
   printf("            number1: %d byte(s).\n",sizeof(data->number1));
   printf("            last_name: %d byte(s). \n",sizeof(data->last_name));
   printf("            number2: %d byte(s).\n",sizeof(data->number2));
   printf("  Total size of personal_data: %d byte(s).\n",sizeof(data->first_name)+sizeof(data->last_name)+sizeof(data->number1)+sizeof(data->number2));
   puts("***************************************************");
   return;
}

void show_addresses(const struct personal_data *data)
{
   puts("********* A D D R E S S E S   O F   M E M B E R S ************");
   printf("       address of first_name: %p. \n",data->first_name);
   printf("    address of number1: %p. \n",&data->number1);
   printf("   address of last_name: %p. \n",data->last_name);
   printf("    address of number2: %p. \n",&data->number2);
   puts("***************************************************");
   return;
}
