#include <stdio.h>
#include <stdlib.h>

struct artikal {
  int sifra;
  char naziv;
  double cena;
} typedef Artikal;

struct prodavnica {
  char naziv;
  Artikal *artikli;
  int brojArtikala;
} typedef Prodavnica;

Prodavnica *p;

void postaviNaziv() {
  p -> naziv = (int*) malloc(sizeof(char) * 15);
  char tmpNaziv[15];
  gets(tmpNaziv);
  for (int i = 0; i < 15; i++) {
    if (tmpNaziv[i] != 0) {
      p -> naziv[i] = tmpNaziv[i];
    }
  }
}

void dodajArtikal() {
  p -> brojArtikala++;
  p -> artikli = (Artikal*) malloc(sizeof(Artikal) * brojArtikala);
  printf("Unesite sifru: ");
  scanf("%d", p -> (artikli + brojArtikala - 1) -> sifra);
  
}


int main() {

  p = (Prodavnica *p) malloc(sizeof(Prodavnica));

  printf("%d", a -> sifra);
  return 0;
}
