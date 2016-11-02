#include <stdio.h>

#define true 1
#define false 0

struct Artikal {
  char obrisan;
  int sifra;
  char naziv[15];
  float cena;
  int brKupljeno;
};

struct Artikal artikli[15];
int stanje = 0;
int brKupljeno = 0;

enum Funkcije { funINIT, funDodaj, funObrisi, funPronadji, funKupi, funIspisi, funKraj };

int meni() {
  int i;
  do {
    printf("Prodavnica\n");
    printf("\t1. Dodavanje novog artikla\n");
    printf("\t2. Brisanje artikla\n");
    printf("\t3. Pronalazenje artikla po sifri\n");
    printf("\t4. Kupi proizvod\n");
    printf("\t5. Ispis svih artikala\n");
    printf("\t6. Kraj rada programa\n");
    printf("> ");
    scanf("%i", &i);
  } while (i < funDodaj && i > funKraj);
  return i;
}

int dodaj() {
  printf("ok");
  if (stanje < 15) {
    printf("ok");
    int i;
    for (i = 0; i < sizeof(artikli); i++) {
      if (artikli[i].obrisan == false) {
        printf("Unesite sifru artikla (int) : ");
        scanf("%i", &artikli[i].sifra);
        printf("Unesite naziv artikla (char) : ");
        scanf("%s", &artikli[i].naziv);
        printf("Unesite cenu artikla (float) : ");
        scanf("%f", &artikli[i].cena);
        artikli[i].obrisan = true;
        stanje++;
        return true;
      }
    }
  }
  return false;
}

int obrisi(int sif) {
  int i;
  for (i = 0; i < sizeof(artikli); i++) {
    if (artikli[i].sifra == sif) {
      artikli[i].obrisan == false;
      stanje--;
      return true;
    }
  }
  return false;
}

int kupi(int sif) {
  int i;
  for (i = 0; i < sizeof(artikli); i++) {
    if (artikli[i].sifra == sif) {
      artikli[i].brKupljeno++;
      brKupljeno++;
      return true;
    }
  }
  return false;
}

struct Artikal pronadji(int sif) {
  int i;
  for (i = 0; i < sizeof(artikli); i++) {
    if (artikli[i].sifra == sif) {
      return artikli[i];
    }
  }
  struct Artikal a;
  a.sifra = -1;
  return a;
}

int elemenata() {
  int i;
  int br = 0;
  for (i = 0; i < sizeof(artikli); i++) {
    if (artikli[i].obrisan == true)
      br++;
  }
  return br;
}

void prikazi() {
  int i;
  for (i = 0; i < sizeof(artikli); i++) {
    if (artikli[i].obrisan) {
      printf("\n%10i %10s %5f", artikli[i].sifra, artikli[i].naziv, artikli[i].cena);
    }
  }
  printf("\n\n");
}

void main() {
  int sif;
  int fun = funINIT;
  do {
    fun = meni();
    switch (fun) {
      case funDodaj:
        if (dodaj())
          printf("Funkcija je uspesno izvrsena!\n\n");
        else
          printf("Funkcija nije uspesno izvrsena!\n\n");
        break;
      case funObrisi:
        printf("Unesite sifru artikla : ");
        scanf("%i", &sif);
        if (obrisi(sif))
          printf("Funkcija je uspesno izvrsena!\n\n");
        else
          printf("Funkcija nije uspesno izvrsena!\n\n");
        break;
      case funPronadji:
        printf("Unesite sifru artikla : ");
        scanf("%i", &sif);
        struct Artikal art = pronadji(sif);
        if (art.sifra >= 0)
          printf("Artikal je pronadjen!\n\n");
        else
          printf("Artikal nije pronadjen!\n\n");
        break;
      case funKupi:
        printf("Unesite sifru artikla : ");
        scanf("%i", &sif);
        if (kupi(sif))
          printf("Uspesno kupljen artikal!\n\n");
        else
          printf("Nije uspesno kupljen artikal!\n\n");
        break;
      case funIspisi:
        prikazi();
        break;
    }
  } while (fun < funKraj);
}