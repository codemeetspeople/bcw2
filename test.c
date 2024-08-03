#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int value;
    int counter = 0;

    for ( ; fscanf(in, "%d", &value) == 1 && counter < 100; ) {
        counter += 1;
    }
    fprintf(out, "%d\n", counter);
    
    fclose(in);
    fclose(out);

    return 0;
}
