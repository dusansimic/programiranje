// pocetak zaglavlja dijagram2.h

int v1, v2;
enum Stanja { A, B, C, D, E };
enum Funkcije { stNULL, aa, bb, proverii, v1do, v1od, v2do, v2od, stanjee, kraj };
enum Vrednosti {
  v1Korak = 1,
  v2Korak = 2,
  vTop = 5,
  vBot = -5
};

int biranje();

int funa(enum Stanja);

int funb(enum Stanja);

int proveri(enum Stanja);

int v1dodaj(enum Stanja);

int v2dodaj(enum Stanja);

int v1oduzmi(enum Stanja);

int v2oduzmi(enum Stanja);

void print(enum Stanja);

// kraj zaglavlja dijagram2.h
