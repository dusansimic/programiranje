#include <stdio.h>
#include <stdlib.h>

struct artikal {
  int sifra;
  char naziv[15];
  double cena;
} typedef Artikal;

struct prodavnica {
  char naziv[15];
  Artikal *artikli;
  int brojArtikala;
} typedef Prodavnica;

Prodavnica *p;

void postaviNaziv() {
  char tmpNaziv[15];
  scanf("%s", tmpNaziv);
  for (int i = 0; i < 15; i++) {
    if (tmpNaziv[i] != 0) {
      p -> naziv[i] = tmpNaziv[i];
    }
  }
}

void dodajArtikal() {
  if (p -> brojArtikala) {
    p -> brojArtikala++;
    Artikal *temp = (Artikal*) malloc(sizeof(Artikal) * p -> brojArtikala);
    *temp = *(Artikal*) p -> artikli;
    free(p -> artikli);
    printf("Unesite sifru artikla: ");
    scanf("%d", &((temp + (p -> brojArtikala) - 1) -> sifra));
    printf("Unestie naziv artikla: ");
    char tmpNaziv[15];
    scanf("%s", tmpNaziv);
    for (int i = 0; i < 15; i++) {
      if (tmpNaziv[i] != 0) {
        (temp + (p -> brojArtikala) - 1) -> naziv[i] = tmpNaziv[i];
      }
    }
    printf("Unesite cenu artikla: ");
    scanf("%lf", &((temp + (p -> brojArtikala) - 1) -> cena));
    p -> artikli = (Artikal*) malloc(sizeof(Artikal) * p -> brojArtikala);
    p -> *artikli = *(Artikal*) temp;
    free(temp);
  } else {
    p -> brojArtikala++;
    p -> artikli = (Artikal*) malloc(sizeof(Artikal));
    printf("Unesite sifru artikla: ");
    scanf("%d", &(p -> artikli -> sifra));
    printf("Unestie naziv artikla: ");
    char tmpNaziv[15];
    scanf("%s", tmpNaziv);
    for (int i = 0; i < 15; i++) {
      if (tmpNaziv[i] != 0) {
        p -> artikli -> naziv[i] = tmpNaziv[i];
      }
    }
    printf("Unesite cenu artikla: ");
    scanf("%lf", &(p -> artikli -> cena));
  }
}

void ispisiArtikle() {
  for (int i = 0; i < p -> brojArtikala; i++) {
    printf("Artikal %d.\n", i+1);
    printf("Sifra: %d\n", p -> (artikli + i) -> sifra);
    printf("Naziv: %s\n", p -> (artikli + i) -> naziv);
    printf("Cena: %lf\n", p -> (artikli + i) -> cena);
  }
}


int main() {

  p = (Prodavnica *p) malloc(sizeof(Prodavnica));

  postaviNaziv();
  dodajArtikal();
  dodajArtikal();
  ispisiArtikle();

  free(p -> artikli);
  free(p);

  return 0;
}
