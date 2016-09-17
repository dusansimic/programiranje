#include <stdio.h>

void main() {

    int i, n;
    n = 999;
    for (i = 100; i <= 999; i++) {
        int prvacif = i / 100;
        int drugacif = (i / 10) % 10;
        int trecacif = i % 10;
        prvacif = prvacif*prvacif*prvacif;
        drugacif = drugacif*drugacif*drugacif;
        trecacif = trecacif*trecacif*trecacif;
        int zbir = prvacif + drugacif + trecacif;
        if (zbir == i) {
            printf("%i ", i);
        }
    }
}
