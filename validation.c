#include <stdio.h>

int main() {
    int x;

    if ( scanf("%d", &x) == 1 ) {
        printf("%d\n", x);
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}