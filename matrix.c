#include <stdio.h>

#define SIZE 3

void matrixPrint(int matrix[SIZE][SIZE], int size) {
    int last = size - 1;

    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < last; col++ ) {
            printf("%d ", matrix[row][col]);
        }
        printf("%d\n", matrix[row][last]);
    }
}

void matrixScan(int matrix[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < size; col++ ) {
            scanf("%d", &matrix[row][col]);
        }
    }
}

void matrixCopy(int source[SIZE][SIZE], int target[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < size; col++ ) {
            target[row][col] = source[row][col];
        }
    }
}


int main() {
    int matrix[SIZE][SIZE];
    int copy[SIZE][SIZE];

    matrixScan(matrix, SIZE);
    matrixPrint(matrix, SIZE);
    matrixCopy(matrix, copy, SIZE);
    matrixPrint(copy, SIZE);

    return 0;
}
