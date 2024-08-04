#include <stdio.h>

int main() {
    unsigned char a;        // 0 ... 255
    unsigned short int x;   // 0 ... 65535
    unsigned int b;         // 0 ... 4294967295
    unsigned long c;        // 0 ... 18446744073709551615
    unsigned long long d;   // 0 ... 18446744073709551615

    char e;        // -128 ... 127
    int f;         // -2147483648 ... 2147483647
    short int y;   // -32768 ... 32767
    long g;        // -9223372036854775808 ... 9223372036854775807
    long long h;   // -9223372036854775808 ... 9223372036854775807

    a = 255;
    b = 4294967295;
    c = 18446744073709551615;
    d = 18446744073709551615;

    e = 127;
    f = 2147483647;
    g = 9223372036854775807;
    h = 9223372036854775807;

    printf("%u\n", a);
    printf("%u\n", b);
    printf("%lu\n", c);

    printf("%c\n", e);
    printf("%d\n", f);
    printf("%ld\n", g);

    printf("size of char: %lu\n", sizeof(a)*8);
    printf("size of int: %lu\n", sizeof(b)*8);
    printf("size of short int: %lu\n", sizeof(x)*8);
    printf("size of long: %lu\n", sizeof(c)*8);
    printf("size of long long: %lu\n", sizeof(d)*8);

    return 0;
}
