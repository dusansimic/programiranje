#include <stdio.h>

enum Stanja { ISKLJUCEN, SPREMAN, POKVAREN };
enum Operacije { opINIT, opUKLJUCI, opISKLJUCI, opPOKVARI, opPOPRAVI, opDOPUNI, opISPRAZNI, opUSLUZI, opPRIKAZI, opKRAJ };
enum Vrednosti {
  brMAX = 10,
  brMIN = 0
};
enum Stanja stanje = ISKLJUCEN;
int brojac = 0, napici = 0;
int op = opINIT;

void meni() {
  do {
    printf("=====AUTOMAT=====\n");
    printf("\t1. ukljuci\n");
    printf("\t2. iskljuci\n");
    printf("\t3. pokvari\n");
    printf("\t4. popravi\n");
    printf("\t5. dopuni\n");
    printf("\t6. isprazni\n");
    printf("\t7. usluzi\n");
    printf("\t8. prikazi\n");
    printf("\t9. kraj\n");
    printf("=================\n");
    printf("> ");
    scanf("%i", &op);
  } while (op < opUKLJUCI && op > opKRAJ);
}

void prikazi() {
  printf("Stanje: ");
  switch (stanje) {
    case ISKLJUCEN:
      printf("ISKLJUCEN");
      break;
    case SPREMAN:
      printf("SPREMAN");
      break;
    case POKVAREN:
      printf("POKVAREN");
  }
  printf("\nNapitaka: %i\n", napici);
  printf("Prodato: %i\n", brojac);
}

int ukljuci() {
  int uspesno = 0;
  if (stanje == ISKLJUCEN) {
    stanje = SPREMAN;
    uspesno = 1;
  }
  return uspesno;
}

int iskljuci() {
  int uspesno = 0;
  if (stanje == SPREMAN) {
    stanje = ISKLJUCEN;
    uspesno = 1;
  }
  return uspesno;
}

int pokvari() {
  int uspesno = 0;
  if (stanje == SPREMAN) {
    stanje = POKVAREN;
    uspesno = 1;
  }
  return uspesno;
}

int popravi() {
  int uspesno = 0;
  if (stanje == POKVAREN) {
    napici = brMIN;
    stanje = ISKLJUCEN;
    uspesno = 1;
  }
  return uspesno;
}

int dopuni() {
  int uspesno = 0;
  if (stanje == ISKLJUCEN && napici < brMAX) {
    napici++;
    uspesno = 1;
  }
  return uspesno;
}

int isprazni() {
  int uspesno = 0;
  if (stanje == ISKLJUCEN) {
    napici = brMIN;
    uspesno = 1;
  }
  return uspesno;
}

int usluzi() {
  int uspesno = 0;
  if (stanje == SPREMAN && napici > brMIN) {
    napici--;
    brojac++;
    uspesno = 1;
  }
  return uspesno;
}

void main() {
  do {
    meni();
    switch (op) {
      case opUKLJUCI:
        if (ukljuci())
          printf("Operacija je uspesno izvrsena!\n");
        else
          printf("Operacija nije uspesno izvrsena!\n");
        break;
      case opISKLJUCI:
        if (iskljuci())
          printf("Operacija je uspesno izvrsena!\n");
        else
          printf("Operacija nije uspesno izvrsena!\n");
        break;
      case opPOKVARI:
        if (pokvari())
          printf("Operacija je uspesno izvrsena!\n");
        else
          printf("Operacija nije uspesno izvrsena!\n");
        break;
      case opPOPRAVI:
        if (popravi())
          printf("Operacija je uspesno izvrsena!\n");
        else
          printf("Operacija nije uspesno izvrsena!\n");
        break;
      case opDOPUNI:
        if (dopuni())
          printf("Operacija je uspesno izvrsena!\n");
        else
          printf("Operacija nije uspesno izvrsena!\n");
        break;
      case opISPRAZNI:
        if (isprazni())
          printf("Operacija je uspesno izvrsena!\n");
        else
          printf("Operacija nije uspesno izvrsena!\n");
        break;
      case opUSLUZI:
        if (usluzi())
          printf("Operacija je uspesno izvrsena!\n");
        else
          printf("Operacija nije uspesno izvrsena!\n");
        break;
      case opPRIKAZI:
        prikazi();
    }
  } while (op != opKRAJ);
}
