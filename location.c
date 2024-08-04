#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Location;

void printLocation(Location loc) {
    printf("(%g, %g)", loc.x, loc.y);
}

int locationEqual(Location a, Location b) {
    return a.x == b.x && a.y == b.y;
}

double locationDistance(Location a, Location b) {
    return hypot(a.x-b.x, a.y-b.y);
}

int main() {
    Location a = {1.0, 2.0};
    Location b = {2.0, 4.0};
    Location c = {1.0, 2.0};

    printf("Distance between ");
    printLocation(a);
    printf(" and ");
    printLocation(b);
    printf(" = %g\n", locationDistance(a, b));

    return 0;
}
