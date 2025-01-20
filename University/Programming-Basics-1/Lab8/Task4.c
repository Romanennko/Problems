#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct coordinates_system {
  double x, y;
  double r, phi;
};

struct coordinates_system get_point(void);
struct coordinates_system convert(struct coordinates_system);
void display(struct coordinates_system);

int main(void) {
  struct coordinates_system point;
  point = get_point();
  point = convert(point);
  display(point);
  return 0;
}

struct coordinates_system get_point(void) {
  struct coordinates_system temp_point;
  printf("Enter x coordinate: ");
  scanf("%lf", &temp_point.x);
  printf("Enter y coordinate: ");
  scanf("%lf", &temp_point.y);
  puts("********************************");
  return temp_point;
}

struct coordinates_system convert(struct coordinates_system point) {
  point.r = sqrt(point.x * point.x + point.y * point.y);
  point.phi = atan2(point.y, point.x);
  return point;
}

void display(struct coordinates_system point) {
  printf("x = %.4lf, y = %.4lf \n", point.x, point.y);
  puts("********************************");
  printf("r = %.4lf, phi = %.4lf rad, phi = %.4lf degrees\n", point.r,
         point.phi, (point.phi * 180) / M_PI);
}
