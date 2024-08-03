#include <stdio.h>

#define LEN 100

void strCopy(char source[], char destination[]) {
    int i = 0;

    for ( ; source[i] != '\0'; i++ ) {
        destination[i] = source[i];
    }
    destination[i] = '\0';

}

int main() {
    char source[LEN] = "Hello, world!";
    char destination[LEN];

    strCopy(source, destination);

    printf("%s\n", destination);

    return 0;
}
