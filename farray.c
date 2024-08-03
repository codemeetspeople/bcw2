#include <stdio.h>

#define LEN 10

void arrayScan(FILE *file, int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        fscanf(file, "%d", &array[i]);
    }
}

void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int array[LEN];

    arrayScan(in, array, LEN);
    arrayPrint(out, array, LEN);
    
    fclose(in);
    fclose(out);

    return 0;
}
