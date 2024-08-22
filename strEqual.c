#include <stdio.h>

int strEqual(char str1[], char str2[]) {
    for ( int i = 0; str1[i] == str2[i]; i++ ) {
        if ( str1[i] == '\0' ) {
            return 1;
        }
    }
    return 0;
}

int main() {
    if ( strEqual("asdfghjkl1234!", "asdfghjkl1234!")) {
        printf("equal!\n");
    } else {
        printf("not equal!\n");
    }

    return 0;
}
