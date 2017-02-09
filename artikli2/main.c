#include <stdio.h>
#include <stdlib.h>

#define NAME_SIZE 20

struct artikal {
  int sifra;
  char naziv[NAME_SIZE];
  double cena;
} typedef Artikal;

struct prodavnica {
  char naziv[NAME_SIZE];
  Artikal *artikli;
  int brojArtikala;
} typedef Prodavnica;

Prodavnica *p;

void postaviNaziv() {
  char tmpNaziv[NAME_SIZE];
  printf("Unesite naziv prodavnice: ");
  scanf("%s", tmpNaziv);
  for (int i = 0; i < NAME_SIZE; i++) {
    if (tmpNaziv[i] != 0) {
      p->naziv[i] = tmpNaziv[i];
    }
  }
}

void dodajArtikal() {
  if (p->brojArtikala) {
    p->brojArtikala++;
    Artikal *temp = (Artikal*) realloc(p->artikli, sizeof(Artikal) * p->brojArtikala);
    printf("Unesite sifru artikla: ");
    scanf("%d", &((temp + (p->brojArtikala) - 1)->sifra));
    printf("Unestie naziv artikla: ");
    char tmpNaziv[NAME_SIZE];
    scanf("%s", tmpNaziv);
    for (int i = 0; i < NAME_SIZE; i++) {
      if (tmpNaziv[i] != 0) {
        (temp + (p->brojArtikala) - 1)->naziv[i] = tmpNaziv[i];
      }
    }
    printf("Unesite cenu artikla: ");
    scanf("%lf", &((temp + (p->brojArtikala) - 1)->cena));
    p->artikli = (Artikal*) realloc(temp, sizeof(Artikal) * p->brojArtikala);
  } else {
    p->brojArtikala++;
    p->artikli = (Artikal*) malloc(sizeof(Artikal));
    printf("Unesite sifru artikla: ");
    scanf("%d", &(p->artikli->sifra));
    printf("Unestie naziv artikla: ");
    char tmpNaziv[NAME_SIZE];
    scanf("%s", tmpNaziv);
    for (int i = 0; i < NAME_SIZE; i++) {
      if (tmpNaziv[i] != 0) {
        p->artikli->naziv[i] = tmpNaziv[i];
      }
    }
    printf("Unesite cenu artikla: ");
    scanf("%lf", &(p->artikli->cena));
  }
}

void obrisiZaSifru() {
  int sifra;
  printf("Unesite sifru artikla za brisanje: ");
  scanf("%d", &sifra);
  char brisi = 0;
  for (int i = 0; i < p->brojArtikala; i++) {
    if (p->artikli[i].sifra == sifra) {
      brisi = 1;
      break;
    }
  }
  int counter = 0;
  if (brisi) {
    p->brojArtikala--;
    Artikal *temp = (Artikal*) malloc(sizeof(Artikal) * p->brojArtikala);
    for (int i = 0; i < p->brojArtikala; i++) {
      if (p->artikli[i].sifra != sifra) {
        temp[counter] = p->artikli[i];
        counter++;
      }
    }
    printf("Artikal sa sifrom %d je obrisan.\n", sifra);
    return;
  }
  printf("Artikal sa sifrom %d ne postoji.\n", sifra);
}

void ispisiArtikle() {
  printf("            %s", p->naziv);
  printf("   #| sifra|               naziv|  cena|\n");
  for (int i = 0; i < p->brojArtikala; i++) {
    printf("%4d|", i+1);
    printf("%6d|", p->artikli[i].sifra);
    printf("%20s|", p->artikli[i].naziv);
    printf("%3.2lf|\n", p->artikli[i].cena);
  }
}


int main() {

  p = (Prodavnica*) malloc(sizeof(Prodavnica));

  postaviNaziv();
  dodajArtikal();
  dodajArtikal();
  dodajArtikal();
  ispisiArtikle();
  obrisiZaSifru();
  ispisiArtikle();

  free(p->artikli);
  free(p);

  return 0;
}
