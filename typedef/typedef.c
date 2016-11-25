#include <stdio.h>

enum Dani {
  PONEDELJAK = 1,
  UTORAK,
  SREDA,
  CETVRTAK,
  PETAK,
  SUBOTA,
  NEDELJA
};

typedef enum GodDoba { // naziv niza konstanti
  PROLECE,
  LETO,
  JESEN,
  ZIMA
} Sezona; // tip podatka

void main() {
  enum Dani dan;
  // tip podatka je Sezona
  Sezona sezona;

  dan = SREDA;
  sezona = ZIMA;

  switch (sezona) {
    case PROLECE:
      printf("PROLECE\n");
      break;
    case LETO:
      printf("LETO\n");
      break;
    case JESEN:
      printf("JESEN\n");
      break;
    case ZIMA:
      printf("ZIMA\n");
      break;
  }
  while (getchar() != '\n');
}
