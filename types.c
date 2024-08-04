#include <stdio.h>

#define INT_8 "%c\n"
#define INT_16 "%d\n"
#define INT_32 "%d\n"
#define INT_64 "%ld\n"

typedef char int8;
typedef short int int16;
typedef int int32;
typedef long int64;

int main() {
    int8 a = 64;
    int16 b = 16999;
    int32 c = 200000000;
    int64 d = 900000000000;

    printf(INT_8, a);
    printf(INT_16, b);
    printf(INT_32, c);
    printf(INT_64, d);

    return 0;
}