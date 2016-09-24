#include <stdio.h>

void main() {
    int n;
    scanf("%d", &n);
    int n1 = n;
    int fact = 1;
    while (n > 0)
        fact *= n--;
    printf("Faktorijel broja %d je %d.", n1, fact);
}
