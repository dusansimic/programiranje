#include <stdio.h>

void main() {
  enum poredak {
    ASC = 1,
    DESC
  };
  int i, j, n, unetiporedak;
  printf("Unesite duzinu niza: ");
  scanf("%i", &n);
  int niz[n];
  for (i = 0; i < n; i++) {
    printf("Unesite %i. element niza: ", i+1);
    scanf("%i", &niz[i]);
  }
  printf("Unesite poredak\n\t1 = ASC\n\t2 = DESC\n");
  scanf("%i", &unetiporedak);
  printf("Elementi niza pre sortiranja:\n");
  for (i = 0; i < n; i++) {
    printf("{%i} ", niz[i]);
  }
  if (unetiporedak == ASC) {
    for (i = 0 ; i < ( n - 1 ); i++) {
      for (j = 0 ; j < n - i - 1; j++) {
        if (niz[j] > niz[j+1]) {
          int swap = niz[j];
          niz[j] = niz[j+1];
          niz[j+1] = swap;
        }
      }
    }
    printf("Elementi niza posle sortiranja:\n");
    for (i = 0; i < n; i++) {
      printf("{%i} ", niz[i]);
    }
  } else if (unetiporedak == DESC) {
    for (i = 0 ; i < ( n - 1 ); i++) {
      for (j = 0 ; j < n - i - 1; j++) {
        if (niz[j] < niz[j+1]) {
          int swap = niz[j];
          niz[j] = niz[j+1];
          niz[j+1] = swap;
        }
      }
    }
    printf("Elementi niza posle sortiranja:\n");
    for (i = 0; i < n; i++) {
      printf("{%i} ", niz[i]);
    }
  } else {
    printf("Poredak koji ste uneli je netacan!");
  }
}
