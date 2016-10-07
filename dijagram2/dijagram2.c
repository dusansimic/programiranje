// pocetak main.c

#include <stdio.h>
#include "file.c"

void main() {
  int stanje = A;
  int tempStanje;
  v1 = 0;
  v2 = 0;
  int fun;
  do {
    tempStanje = stanje;
    fun = biranje();
    switch (fun) {
      case aa:
        if (funa(stanje)) {
          stanje = A;
          printf("Operacija je uspesno izvrsena!\n");
        } else {
          printf("Operacija nije uspesno izvrsena!\n");
        }
        break;
      case bb:
        if (funb(stanje)) {
          stanje = B;
          printf("Operacija ja uspesno izvrsena!\n");
        } else {
          printf("Operacija nije uspesno izvrsena!\n");
        }
        break;
      case proverii:
        stanje = proveri(stanje);
        if (stanje != tempStanje) {
          printf("Operacija je uspesno izvrsena!\n");
        } else {
          printf("Operacija nije uspesno izvrsena!\n");
        }
        break;
      case v1do:
        if (v1dodaj(stanje)) {
          printf("Operacija je uspesno izvrsena!\n");
        } else {
          printf("Operacija nije uspesno izvrsena!\n");
        }
        break;
      case v1od:
        if (v1oduzmi(stanje)) {
          printf("Operacija je uspesno izvrsena!\n");
        } else {
          printf("Operacija nije uspesno izvrsena!\n");
        }
        break;
      case v2do:
        if (v2dodaj(stanje)) {
          printf("Operacija je uspesno izvrsena!\n");
        } else {
          printf("Operacija nije uspesno izvrsena!\n");
        }
        break;
      case v2od:
        if(v2oduzmi(stanje)) {
          printf("Operacija je uspesno izvrsena!\n");
        } else {
          printf("Operacija nije uspesno izvrsena!\n");
        }
        break;
      case stanjee:
        print(stanje);
        break;
    }
  } while (fun != kraj);
}

// kraj main.c
