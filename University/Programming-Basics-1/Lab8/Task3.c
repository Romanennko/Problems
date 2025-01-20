#include <stdio.h>
#include <stdlib.h>

struct complex {
    double real;
    double imag;
};

struct complex get_input(void);
struct complex add(struct complex z1, struct complex z2);
struct complex subtract(struct complex z1, struct complex z2);
struct complex multiply(struct complex z1, struct complex z2);
void display(const struct complex, int count);

int main()
{
    struct complex z1, z2, z3, z4, z5;
    z1 = get_input();
    z2 = get_input();
    printf("Complex numbers in algebraic form: \n");
    display(z1, 1);
    display(z2, 2);
    printf("z3 = z1 + z2 in algebraic form: \n");
    z3 = add(z1, z2);
    display(z3, 3);
    printf("z4 = z1 - z2 in algebraic form: \n");
    z4 = subtract(z1, z2);
    display(z4, 4);
    printf("z5 = z1 * z2 in algebraic form: \n");
    z5 = multiply(z1, z2);
    display(z5, 5);
    return 0;
}

struct complex get_input(void)
{
    struct complex temp;
    printf("Enter real part: ");
    scanf("%lf", &temp.real);
    printf("Enter imaginary part: ");
    scanf("%lf", &temp.imag);
    return temp;
}

struct complex add(struct complex z1, struct complex z2)
{
    struct complex s;
    s.real = z1.real + z2.real;
    s.imag = z1.imag + z2.imag;
    return s;
}

struct complex subtract(struct complex z1, struct complex z2)
{
    struct complex s;
    s.real = z1.real - z2.real;
    s.imag = z1.imag - z2.imag;
    return s;
}

struct complex multiply(struct complex z1, struct complex z2)
{
   struct complex s;
   s.real = (z1.real * z2.real - z1.imag * z2.imag);
   s.imag = (z1.real * z2.imag + z1.imag * z2.real);
   return s;
}

void display(const struct complex info, int count)
{
   if (info.imag > 0)
      printf("z%d = %lf + %lfi \n", count, info.real, info.imag);
   else
      printf("z%d = %lf %lfi \n", count, info.real, info.imag);
   return;
}
