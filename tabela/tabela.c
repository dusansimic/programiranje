#include <stdio.h>

int main () {

    float i, n, step;
    printf("Unesite min: ");
    scanf("%f", &i);
    printf("Unesite max: ");
    scanf("%f", &n);
    printf("Unesite step: ");
    scanf("%f", &step);

    printf("    x       y\n");
    printf(" ======= =======\n");

    for (i = 1; i <= n; i+=step) {
        float y = 100 + i + i * i;
        printf("%7.2f %7.2f\n", i, y);
    }

    return 0;
}
