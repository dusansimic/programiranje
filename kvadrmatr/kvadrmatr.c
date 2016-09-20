#include <stdio.h>

void main() {
  int n, i, j;
  printf("Unesite duzinu kvadratne matrice: ");
  scanf("%i", &n);
  int matr[n][n];
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("matr[%i][%i] = ", i, j);
      scanf("%i", &matr[i][j]);
    }
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%3i", matr[i][j]);
    }
    printf("\n");
  }
  printf("\n\n");
  int suma = 0;
  for (i = 0; i < n; i++) {
    /*
    printf("%i ", matr[i][i]);
    suma+=matr[i][i];
    */
    printf("%i ", matr[n-i-1][i]);
    suma+=matr[n-i-1][i];
  }
  printf("\nsuma: %i", suma);
}
