#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char symbol;

    for ( ; fscanf(in, "%c", &symbol) == 1; ) {
        fprintf(out, "%c", symbol);
    }

    fclose(in);
    fclose(out);

    return 0;
}
