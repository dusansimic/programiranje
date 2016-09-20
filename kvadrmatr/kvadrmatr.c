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
  for (i = 0; i < n; i++) {
    printf("%i ", matr[i][i]);
  }
}
