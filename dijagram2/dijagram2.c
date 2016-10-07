#include <stdio.h>

int v1, v2;
enum Stanja { A, B, C, D, E };
enum Funkcije { stNULL, aa, bb, proverii, v1do, v1od, v2do, v2od, stanjee, kraj };
enum Vrednosti {
  v1Korak = 1,
  v2Korak = 2,
  vTop = 5,
  vBot = -5
};

int biranje() {
  int fun;
  do {
    printf("Odaberite funkciju:\n");
    printf("\t1. A\n");
    printf("\t2. B\n");
    printf("\t3. Proveri\n");
    printf("\t4. v1 Dodaj\n");
    printf("\t5. v1 Oduzmi\n");
    printf("\t6. v2 Dodaj\n");
    printf("\t7. v2 Oduzmi\n");
    printf("\t8. Stanje\n");
    printf("\t9. Kraj\n");
    printf("> ");
    scanf("%i", &fun);
  } while (fun < 1 && fun > 9);
  return fun;
}

int funa(enum Stanja s) {
  if (s == B) {
    v1 = 0;
    v2 = 0;
    return 1;
  }
  return 0;
}

int funb(enum Stanja s) {
  if (s != B)
    return 1;
  return 0;
}

int proveri(enum Stanja s) {
  if (s == B) {
    if (v1 > v2) {
      s = C;
      return s;
    } else if (v1 < v2) {
      s = D;
      return s;
    } else {
      s = E;
      return s;
    }
  }
  return s;
}

int v1dodaj(enum Stanja s) {
  if (v1 + v1Korak <= vTop && s == B) {
    v1+=v1Korak;
    return 1;
  }
  return 0;
}

int v2dodaj(enum Stanja s) {
  if (v2 + v2Korak <= vTop && s == B) {
    v2+=v2Korak;
    return 1;
  }
  return 0;
}

int v1oduzmi(enum Stanja s) {
  if (v1 - v1Korak >= vBot && s == B) {
    v1-=v1Korak;
    return 1;
  }
  return 0;
}

int v2oduzmi(enum Stanja s) {
  if (v2 - v2Korak >= vBot && s == B) {
    v2-=v2Korak;
    return 1;
  }
  return 0;
}

void print(enum Stanja s) {
  switch(s) {
    case A:
      printf("Trenutno stanje je: A\n");
      break;
    case B:
      printf("Trenutno stanje je: B\n");
      break;
    case C:
      printf("Trenutno stanje je: C\n");
      break;
    case D:
      printf("Trenutno stanje je: D\n");
      break;
    case E:
      printf("Trenutno stanje je: E\n");
      break;
  }
  printf("v1 = %i\n", v1);
  printf("v2 = %i\n", v2);
}

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
