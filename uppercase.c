#include <stdio.h>

void readStr(FILE *in, char destination[]) {
    int current = 0;

    for ( ; fscanf(in, "%c", &destination[current]) == 1; current++ );
    destination[current] = '\0';
}

void strUpper(char target[]) {
    int offset = 'a' - 'A';

    for ( int i = 0; target[i] != '\0'; i++ ) {
        if ( target[i] >= 'a' && target[i] <= 'z' ) {
            target[i] -= offset;
        }
    }
}

void strLower(char target[]) {
    int offset = 'a' - 'A';

    for ( int i = 0; target[i] != '\0'; i++ ) {
        if ( target[i] >= 'A' && target[i] <= 'Z' ) {
            target[i] += offset;
        }
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char string[100];

    fscanf(in, "%99s", string);
    // readStr(in, string);
    printf("%s\n", string);

    strUpper(string);
    printf("%s\n", string);

    fprintf(out, "%s\n", string);

    strLower(string);
    printf("%s\n", string);
    fprintf(out, "%s\n", string);

    return 0;
}
