#include <stdio.h>

/*
hack za razmenu mesta brojevima
*/
#define swap(a, b) do { \
  typeof(a) temp = a;   \
  a = b;                \
  b = temp;             \
} while (0)

/*void swap(int *a, int *b) {
  typeof(*a) temp = *a;
  *a = *b;
  *b = temp;
}*/

void main() {
  enum smerovi {
    ASC = 1,
    DESC
  };
  int n, m;
  printf("Unesite dimenzije matrice:\nN = ");
  scanf("%i", &n);
  printf("M = ");
  scanf("%i", &m);
  int i, j, k;
  int matr[n][m];
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("matr[%i][%i] = ", i, j);
      scanf("%i", & matr[i][j]);
    }
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("%3i", matr[i][j]);
    }
    printf("\n");
  }
  printf("\n\n");
  int input = 0;
  do {
    printf("Unesite 1 (rastuci) ili 2 (opadajuci) poredak: ");
    scanf("%i", &input);
  } while (input != ASC && input != DESC);
  if (input == ASC) {
    for (k = 0; k < m; k++) {
      for (i = n*k; i < n*m-1; i++) {
        for (j = i +1; j < n*m; j++) {
          if (!k) {
            if (matr[k][i] > matr[k][j])
              swap(matr[k][i], matr[k][j]);
          } else {
            if (matr[k][i%k] > matr[k][i%k])
              swap(matr[k][i], matr[k][j]);
          }
        }
      }
    }
  } else {

  }
  printf("\n\nPosle sortiranja:\n\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("%3i", matr[i][j]);
    }
    printf("\n");
  }
}
