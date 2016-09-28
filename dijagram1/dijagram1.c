/*
  nije mi bas najjasnije sta je profesor hteo sa ovim dodaj i oduzmi
  funkcijama pa ako imas leksa ideju odradi nes pos ja sam od ovde dogurao
  i nzm sta dalje
*/

#include <stdio.h>

enum Operacije { opINIT, opX, opY, opZ, opW, opDO, opOD, opST, opKR };
enum Stanja { stNull, A, B, C, D };
enum Vrednosti {
  KORAK = 20,
  DOLE = 0,
  GORE = 80
};
int vrednost = 80;

int Biranje() {
  int op = opINIT;

  do {
    printf("Izaberite operaciju:\n");
    printf("\t1. FunX\n");
    printf("\t2. FunY\n");
    printf("\t3. FunZ\n");
    printf("\t4. FunW\n");
    printf("\t5. Dodaj\n");
    printf("\t6. Oduzmi\n");
    printf("\t7. Status\n");
    printf("\t8. Kraj\n");
    printf("> ");
    scanf("%i", &op);
    if (op < opX || op > opKR) {
      printf("\nOperacija koju ste uneli nije validna!\nPokusajte ponovo!\n\n");
    }
  } while (op < opX || op > opKR);
}

enum Operacije funX(enum Stanja stanje) {
  if (stanje == C) {
    stanje = A;
  } else {
    return stNull;
  }
  return stanje;
};

enum Operacije funY(enum Stanja stanje) {
  if (stanje == B || stanje == D) {
    stanje = C;
    vrednost = GORE;
  } else {
    return stNull;
  }
  return stanje;
};

enum Operacije funZ(enum Stanja stanje) {
  if (stanje == A) {
    stanje == B;
    vrednost = DOLE;
  } else {
    return stNull;
  }
  return stanje;
};

enum Operacije funW(enum Stanja stanje) {
  if (stanje == A) {
    stanje = D;
    vrednost = DOLE;
  } else {
    return stNull;
  }
  return stanje;
};

enum Operacije funDodaj(enum Stanja stanje) {
  if (stanje == A && vrednost + KORAK <= GORE) {
    vrednost+=KORAK;
  }
  return stanje;
};

enum Operacije funOduzmi(enum Stanja stanje) {
  if (stanje == A && vrednost - KORAK >= DOLE) {
    vrednost-=KORAK;
  }
  return stanje;
};

enum Operacije funStatus() {
  printf("\nStanje: Trenutna vrednost je %i.\n\n", vrednost);
};

void main() {
  int op = opINIT;
  enum Stanja stanje = C;
  enum Stanja tempStanje;

  do {
    op = Biranje();
    switch (op) {
      case opX:
        stanje = funX(stanje);
        if (stanje == stNull) {
          printf("\nOperacija nije mogla biti izvrsena!\nNiste u odgovarajucem stanju!\nPokusajte ponovo!\n\n");
        } else {
          printf("\nOperacija je uspesno izvrsena.\n\n");
        }
        break;
      case opY:
        stanje = funY(stanje);
        if (stanje == stNull) {
          printf("\nOperacija nije mogla biti izvrsena!\nNiste u odgovarajucem stanju!\nPokusajte ponovo!\n\n");
        } else {
          printf("\nOperacija je uspesno izvrsena.\n\n");
        }
        break;
      case opZ:
        stanje = funZ(stanje);
        if (stanje == stNull) {
          printf("\nOperacija nije mogla biti izvrsena!\nNiste u odgovarajucem stanju!\nPokusajte ponovo!\n\n");
        } else {
          printf("\nOperacija je uspesno izvrsena.\n\n");
        }
        break;
      case opW:
        stanje = funW(stanje);
        if (stanje == stNull) {
          printf("\nOperacija nije mogla biti izvrsena!\nNiste u odgovarajucem stanju!\nPokusajte ponovo!\n\n");
        } else {
          printf("\nOperacija je uspesno izvrsena.\n\n");
        }
        break;
      case opDO:
        stanje = funDodaj(stanje);
        if (stanje == tempStanje) {
          printf("\nOperacija nije mogla biti izvrsena!\nNiste u odgovarajucem stanju!\nPokusajte ponovo!\n\n");
        } else {
          printf("\nOperacija je uspesno izvrsena.\n\n");
        }
        break;
      case opOD:
        stanje = funOduzmi(stanje);
        if (stanje == tempStanje) {
          printf("\nOperacija nije mogla biti izvrsena!\nNiste u odgovarajucem stanju!\nPokusajte ponovo!\n\n");
        } else {
          printf("\nOperacija je uspesno izvrsena.\n\n");
        }
        break;
      case opST:
        funStatus();
        break;
    }
  } while (op != opKR);
}
