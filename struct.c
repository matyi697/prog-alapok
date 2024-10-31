#include<stdio.h>

typedef struct {
    int ora;
    int perc;
    int masodperc;
} ido;

void printTime(ido time) {
    printf("%d : %d : %d\n", time.ora, time.perc, time.masodperc);
}

int main() {
    ido time1;
    time1.ora = 1;
    time1.perc = 30;
    time1.masodperc = 10;

    ido time2 = {2, 5, 3};
        time2 = {ora=2, perc=5, masodperc=3};
    printTime(time1);
    return 0;
}