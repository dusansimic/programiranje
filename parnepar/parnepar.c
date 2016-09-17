#include <stdio.h>

void main() {
  int n;
  int par, nepar;
  par = 0;
  nepar = 0;
  printf("Unesite duzinu niza: ");
  scanf("%i", &n);
  int niz[n];
  for (int i = 0; i < n; i++) {
    printf("Unesite %i. element niza: ", i+1);
    scanf("%i", &niz[i]);
  }
  printf("Parni brojevi:\n");
  for (int i = 0; i < n; i++) {
    if (niz[i] % 2 == 0) {
      printf("{%i} ", niz[i]);
      par++;
    }
  }
  printf("Ukupno elemenata: %i", par);
  printf("\n\nNeparni brojevi:\n");
  for (int i = 0; i < n; i++) {
    if (niz[i] % 2 == 1) {
      printf("{%i} ", niz[i]);
      nepar++;
    }
  }
  printf("Ukupno elemenata: %i", nepar);
}
