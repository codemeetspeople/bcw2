#include <stdio.h>

#define SIZE 5

void arrayPrint(int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void arrayScan(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        scanf("%d", &array[i]);
    }
}

void arrayInit(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}

int arraySum(int array[], int size) {
    int result = array[0];

    for ( int i = 1; i < size; i++ ) {
        result += array[i];
    }
    return result;
}


int main() {
    int array[SIZE];

    arrayScan(array, SIZE);
    printf("%d\n", arraySum(array, SIZE));
    
    // arrayPrint(array, SIZE);
    // arrayScan(array, SIZE);
    // arrayInit(array, SIZE);
    // arrayPrint(array, SIZE);

    return 0;
}
