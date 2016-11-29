#include <stdio.h>

void unesiteNiz(int *p, int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("Unesite %d. element niza: ", i + 1);
    scanf("%d", &(*(p+i)));
  }
}

int *izracunajSumu(int *p, int n) {
  int i, suma;
  suma = 0;
  for (i = 0; i < n; i++) {
    suma+=*(p+i);
  }
  return suma;
}

void main() {
  int *p, n, *suma;
  printf("Unesite duzinun niza: ");
  scanf("%d", &n);
  p = malloc(sizeof(int) * n);
  unesiteNiz(p, n);
  *suma = izracunajSumu(p, n);
  printf("Suma elemenata niza je %d.", *suma);
  free(p);
  while (getchar() != 27);
}
