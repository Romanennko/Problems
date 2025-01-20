#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define NUM_POINTS 10

struct Point {
    int x;
    int y;
};

int rand_in_range(int min, int max);
double distance(struct Point p1, struct Point p2);
void print_point(struct Point p);

int main() {
    srand(time(NULL));

    struct Point points[NUM_POINTS];

    for (int i = 0; i < NUM_POINTS; i++) {
        points[i].x = rand_in_range(-10, 10);
        points[i].y = rand_in_range(-10, 10);
    }

    printf("Points array:\n");
    for (int i = 0; i < NUM_POINTS; i++) {
        print_point(points[i]);
    }

    double max_distance = 0;
    int point1_index = 0, point2_index = 0;

    for (int i = 0; i < NUM_POINTS - 1; i++) {
        for (int j = i + 1; j < NUM_POINTS; j++) {
            double dist = distance(points[i], points[j]);
            if (dist > max_distance) {
                max_distance = dist;
                point1_index = i;
                point2_index = j;
            }
        }
    }

    printf("\nThe two farthest points are:\n");
    print_point(points[point1_index]);
    print_point(points[point2_index]);
    printf("The distance between them is: %.2f\n", max_distance);

    return 0;
}


int rand_in_range(int min, int max) {
    return min + rand() % (max - min + 1);
}


double distance(struct Point p1, struct Point p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}


void print_point(struct Point p) {
    printf("Point(%d; %d)\n", p.x, p.y);
}
