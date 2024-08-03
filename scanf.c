#include <stdio.h>

int main() {
    int x, y;
    int value;

    for ( ; ; ) {
        if ( scanf("%d", &x) == 1 ) {
            printf("%d\n", x*x);
        } else {
            return 0;
        }
    }

    return 0;
}
