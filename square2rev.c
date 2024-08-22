#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int i = size - 1; i >= 0; i-- ) {
        int counter = size * i + 1;
        
        for ( int j = 1; j < size; j++, counter++ ) {
            printf("%d ", counter);
        }
        printf("%d\n", counter);
    }
    
    return 0;
}
