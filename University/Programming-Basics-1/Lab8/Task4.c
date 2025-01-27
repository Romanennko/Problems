#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum CoordSystem {
    CARTESIAN,
    POLAR
};

struct CartesianCoord {
    double x;
    double y;
};

struct PolarCoord {
    double r;
    double theta;
};

union CoordUnion {
    struct CartesianCoord cart;
    struct PolarCoord pol;
};

struct Point {
    enum CoordSystem type;
    union CoordUnion coord;
};

struct Point cartesian_to_polar(struct Point p) {
    struct Point result;
    result.type = POLAR;
    
    result.coord.pol.r = sqrt(p.coord.cart.x * p.coord.cart.x + 
                             p.coord.cart.y * p.coord.cart.y);
    result.coord.pol.theta = atan2(p.coord.cart.y, p.coord.cart.x);
    
    return result;
}

struct Point polar_to_cartesian(struct Point p) {
    struct Point result;
    result.type = CARTESIAN;
    
    result.coord.cart.x = p.coord.pol.r * cos(p.coord.pol.theta);
    result.coord.cart.y = p.coord.pol.r * sin(p.coord.pol.theta);
    
    return result;
}

void print_point(struct Point p) {
    if (p.type == CARTESIAN) {
        printf("Cartesian coordinates: (%.2f, %.2f)\n", 
               p.coord.cart.x, p.coord.cart.y);
    } else {
        printf("Polar coordinates: (r=%.2f, θ=%.2f rad = %.2f deg)\n", 
               p.coord.pol.r, p.coord.pol.theta, 
               p.coord.pol.theta * 180 / M_PI);
    }
}

int main() {
    struct Point p;
    int choice;
    
    printf("Choose coordinate type for input:\n");
    printf("1. Cartesian coordinates\n");
    printf("2. Polar coordinates\n");
    scanf("%d", &choice);
    
    if (choice == 1) {
        p.type = CARTESIAN;
        printf("Enter x: ");
        scanf("%lf", &p.coord.cart.x);
        printf("Enter y: ");
        scanf("%lf", &p.coord.cart.y);
        
        printf("\nOriginal point:\n");
        print_point(p);
        
        printf("\nConverted to polar coordinates:\n");
        print_point(cartesian_to_polar(p));
        
    } else if (choice == 2) {
        p.type = POLAR;
        printf("Enter radius (r): ");
        scanf("%lf", &p.coord.pol.r);
        printf("Enter angle in radians (θ): ");
        scanf("%lf", &p.coord.pol.theta);
        
        printf("\nOriginal point:\n");
        print_point(p);
        
        printf("\nConverted to cartesian coordinates:\n");
        print_point(polar_to_cartesian(p));
        
    } else {
        printf("Invalid choice!\n");
        return 1;
    }
    
    return 0;
}
