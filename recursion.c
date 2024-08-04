#include <stdio.h>

void progression(int n) {
    if ( n == 1 ) {
        printf("%d\n", n);
        return;
    }
    printf("%d ", n);

    progression(n-1);
}


int factorial(int n) {
    if ( n <= 0 ) {
        return -1;
    }
    if ( n == 1 ) {
        return 1;
    }

    return n * factorial(n-1);
}


int fibonacci(int n, unsigned int *counter) {
    *counter += 1;

    if ( n < 0 ) {
        // should be negative n calculations
        return -1;
    }
    if ( n <= 1 ) {
        return n;
    }
    
    return fibonacci(n-1, counter) + fibonacci(n-2, counter);
}


int fibonacci_loop(int n) {
    if ( n < 0 ) {
        // should be negative n calculations
        return -1;
    }
    if ( n <= 1 ) {
        return n;
    }

    int first = 0, second = 1;

    for ( int i = 1; i < n; i++ ) {
        int tmp = first;

        first = second;
        second = tmp + first;
    }

    return second;
}



int main() {
    unsigned int *counter;

    *counter = 0;

    printf("%d\n", fibonacci(40, counter));
    printf("calls count: %u\n", *counter);

    return 0;
}
