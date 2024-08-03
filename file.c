#include <stdio.h>

int main() {
    FILE *source = fopen("data.txt", "r");
    FILE *destination = fopen("result.txt", "w");
    int x, y;

    fscanf(source, "%d %d", &x, &y);
    fclose(source);

    fprintf(destination, "%d\n", x+y);
    fclose(destination);

    return 0;
}
