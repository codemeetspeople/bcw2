#include <stdio.h>

int main() {
    int max;
    
    scanf("%d", &max);
    
    for ( int i = 0; i < max; i++ ) {
        printf("%d ", 1<<i);
    }
    printf("%d\n", 1<<max);
    
    return 0;
}