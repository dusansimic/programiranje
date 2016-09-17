#include <stdio.h>

void main() {
  int n, i;
  int suma = 0;
  printf("Unesite duzinu niza: ");
  scanf("%i", &n);
  int niz[n];
  for (i = 0; i < n; i++) {
    printf("Unesite %i. element niza: ", i+1);
    scanf("%i", &niz[i]);
  }
  printf("\n\n");
  for (i = 0; i < n; i++) {
    printf("{%i} ", niz[i]);
    suma+=niz[i];
  }
  printf("\n\n%i", suma);
}
