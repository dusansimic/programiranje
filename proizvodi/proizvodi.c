#include <stdio.h>

#define MAX 10
#define DUZ_NAZ 10
#define DUZ_BARKOD 8
#define true 1
#define false 0

struct Proizvod {
  char barkod[DUZ_BARKOD];
  char naziv[DUZ_NAZ];
  float cena;
};

struct Fabrika {
  char naziv[DUZ_NAZ];
  struct Proizvod proizvodi[MAX];
};

struct Fabrika fab;

void setNazivFabrike(char naz[]) {
  int i;
  for (i = 0; naz[i] != 0; i++)
    fab.naziv[i] = naz[i];
}

void DodajProizvod() {
  char bk[36];
  do {
    printf("Unesite barkod (XX-YY-ZZ gde je X i Z slova, a Y brojevi): ");
    scanf("%s", &bk);
    if (bk[0] >= 'A' && bk[0] <= 'Z' && bk[1] >= 'A' && bk[1] <= 'Z' && bk[6] >= 'A' && bk[6] <= 'Z' && bk[7] >= 'A' && bk[7] <= 'Z' && bk[3] >= '0' && bk[3] <= '9' && bk[4] >= '0' && bk[4] <= '9' && bk[2] == '-' && bk[5] == '-')
      break;
    else
      printf("Uneti barkod nije validan!\nUnesite pnovo!\n");
  } while(true);
  printf("Unesite na koje mesto zelite da dodate proizvod: ");
  int i;
  scanf("%i", &i);
  i--;
  int j;
  for (j = 0; bk[j] != 0; j++)
    fab.proizvodi[i].barkod[j] = bk[j];
  printf("Unesite naziv proizvoda: ");
  scanf("%s", &fab.proizvodi[i].naziv);
  printf("Unesite cenu proizvoda: ");
  scanf("%f", &fab.proizvodi[i].cena);
}

void sortiraj(int smer) {
  int i, j;
  if (smer == true) {
    for (i = 0 ; i < ( MAX - 1 ); i++) {
      for (j = 0 ; j < MAX - i - 1; j++) {
        if (fab.proizvodi[j].cena > fab.proizvodi[j+1].cena) {
          struct Proizvod swap = fab.proizvodi[j];
          fab.proizvodi[j] = fab.proizvodi[j+1];
          fab.proizvodi[j+1] = swap;
        }
      }
    }
    printf("Uspesno sortirano rastucim poretkom.\n");

  } else if (smer == false) {
    for (i = 0 ; i < ( MAX - 1 ); i++) {
      for (j = 0 ; j < MAX - i - 1; j++) {
        if (fab.proizvodi[j].cena < fab.proizvodi[j+1].cena) {
          struct Proizvod swap = fab.proizvodi[j];
          fab.proizvodi[j] = fab.proizvodi[j+1];
          fab.proizvodi[j+1] = swap;
        }
      }
    }
    printf("Uspesno sortirano rastucim poretkom.\n");
  }
  else
    printf("Smer koji ste uneli je netacan!");
}

void prikaziProizvode() {
  int i;
  for (i = 0; i < MAX; i++) {
    printf("\n%i. %s %s %f", i+1, fab.proizvodi[i].barkod, fab.proizvodi[i].naziv, fab.proizvodi[i].cena);
  }
  printf("\n\n");
}

void main() {
  printf("Unesite naziv fabrike: ");
  char naz[DUZ_NAZ];
  scanf("%s", &naz);
  setNazivFabrike(naz);
  DodajProizvod();
  DodajProizvod();
  DodajProizvod();
  prikaziProizvode();
  printf("Rastuce (1) ili opadajuce (0): ");
  int a;
  sortiraj(scanf("%i", &a));
  prikaziProizvode();
  while(1);
}
