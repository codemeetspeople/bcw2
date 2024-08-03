#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int value;
    int counter = 0;

    for ( ; fscanf(in, "%d", &value) == 1 ; counter++ ) {
        fprintf(out, "%d ", value);
    }
    printf("%d numbers was copied...\n", counter);

    return 0;
}
