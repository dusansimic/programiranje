#include <stdio.h>

typedef enum Types {
  ASC = 1,
  DESC
} Type;

void sort(int *p, int n, Type tip) {
  int i, j;
  if (tip == 1) {
    for (i = 0 ; i < ( n - 1 ); i++) {
      for (j = 0 ; j < n - i - 1; j++) {
        if (*(p+j) > *(p+j+1)) {
          int swap = *(p+j);
          *(p+j) = *(p+j+1);
          *(p+j+1) = swap;
        }
      }
    }
  } else {
    for (i = 0 ; i < ( n - 1 ); i++) {
      for (j = 0 ; j < n - i - 1; j++) {
        if (*(p+j) < *(p+j+1)) {
          int swap = *(p+j);
          *(p+j) = *(p+j+1);
          *(p+j+1) = swap;
        }
      }
    }
  }
}

void init(int *p, int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("Unesite %d. element niza: ", i+1);
    scanf("%d", &(*(p+i)));
  }
}

void print(int *p, int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf(" %d", *(p+i));
  }
  printf("\n");
}

void meni(int *p) {
    printf("1. Rastuce sortiranje\n");
    printf("2. Opadajuce sortiranje\n");
    printf("3. Init\n");
    printf("4. Prikazi\n");
    printf("5. Kraj\n");
    scanf("%d", p);
}

void main() {
  int fun = 0, n;
  printf("Unesite duzinu niza: ");
  scanf("%d", &n);
  int *p = malloc(sizeof(int) * n);
  while(fun != 5) {
    meni(&fun);
    switch(fun) {
      case 1:
        sort(p, n, fun);
        break;
      case 2:
        sort(p, n, fun);
        break;
      case 3:
        init(p, n);
        break;
      case 4:
        print(p, n);
        break;
    }
  }

  free(p);
}
