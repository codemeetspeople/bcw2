#include <stdio.h>

typedef struct {int day; int month; int year;} Date;

void printDate(Date *date) {
    printf("%d.%d.%d\n", date->day, date->month, date->year);
}

void changeDate(Date *date, int day, int month, int year) {
    date->day = day;
    date->month = month;
    date->year = year;
}

int main() {
    Date bd = {18, 3, 1970};
    
    printDate(&bd);
    changeDate(&bd, bd.day, bd.month, 1975);
    printDate(&bd);

    return 0;
}
