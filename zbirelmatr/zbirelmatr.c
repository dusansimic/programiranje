#include <stdio.h>

void main() {
  int n;
  printf("Unesite velicinu kvadratne matrice: ");
  scanf("%i", &n);
  int matr[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("matr[%i][%i] = ", i, j);
      scanf("%i", &matr[i][j]);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%3i", matr[i][j]);
    }
    printf("\n");
  }
  int suma = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j < n-i-1)
        suma+=matr[i][j];
    }
  }
  printf("Suma brojeva iznad dijagonale je: %i\n\n", suma);
}
