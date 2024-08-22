#include <stdio.h>

int digits(int n) {
    int digits = 0;
    
    for ( ; n > 0; n /= 10, digits++ );
    return digits;
}

int main() {
    int size;
    int maxDigits;

    scanf("%d", &size);

    maxDigits = digits(size*size);

    for ( int i = 0, counter = 1; i < size; i++, counter++ ) {
        for ( int j = 1; j < size; j++, counter++ ) {
            printf("%*d ", maxDigits, counter);
        }
        printf("%*d\n", maxDigits, counter);
    }

    return 0;
}
