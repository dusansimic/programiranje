#include <stdio.h>
#include <math.h>

// u programiranju upoterba magicnih brojeva je losa praksa
// magicni brojevi pruzaju malo informacija za nekoga ko mozda mora kasnije da razume program
// dosta je bolje brojevima dodeliti imena
// #define identifikator lista - zamene (opciono)
// #define identifikator (parametri) lista - zamene
// #define identifikator (parametri,...) lista - zamene
// #define identifikator (...) lista - zamene

// direktiva define definise simbolicko ime koja je odredjena identifikatorima koji se sastoji od niza karaktera, nakon pravljena simbolickog imena svako pojavljivanje imena bice zamenjeno sadrzajem lista zamena
// identifikator konstante ima isti oblik kao ime promenljive, niz slova i brojeva koji uvek moraju pocinjati slovom
// tekst zamene moze biti bilo koji niz znakova, nije ogranicen samo na brojeve
// primer definisanja numericke konstante:

#define GODINA 23


void Godina()
{
  printf ("ja imam %i godine.\n", GODINA);
}
// direktiva define se ne koristi samo za definisanje numerickih vrednosti, moze se koristiti za definisanje string vrednosti
// primer definisanja string konstante:
#define IME "Ivan"

void Ime()
{
  printf("Ja se zovem %s.\n", IME);
}
// direktiva define se takodje moze koristiti za definisanje konstante upotrebom izraz
#define RACUN (234. / 23)

void Racun()
{
  printf("Vas racun iznosi %.2lf.\n", RACUN);
}
// simbolicke konstante mogu da imaju parametre, i to jedan ili vise parametara(zavisi od toga sta zelimo da radimo), za razliku od podprograma(funkcija) koja imaju parametre, za svakog parametar pored njegovog identifikatora mora da se navede njegov tip
// prilikom pravljena simbolickih konstanti koje imaju parametre navodi se samo lista indetifikatora bez tipova

#define XplusY(x, y) (x+y)

void XplusYfunc() {
  int x = 1, y = 2;
  printf("%i + %i = %i\n", x, y, XplusY(x,y));
}

// prilikom definisanja konstanti dozvoljeno je koriscenje sistemskih funkcija

#define XnaY(x, y) (pow(x,y))

void XnaYfunc() {
  int x = 3, y = 2;
  printf("%i^(%i) = %.lf\n", x, y, XnaY(x,y));
}

// pored sistemskih funkcija dozvoljeno koriscenje i korisnickih funkcija prilikom pravljena konstanti

#define XputaY(x,y) (pomnozi(x,y))

int pomnozi(int x, int y) {
  return x*y;
}

void XputaYfunc() {
  int x = 2, y = 4;
  printf("%i * %i je %i\n", x, y, XputaY(x, y));
}

void main() {
  Godina();
  Ime();
  Racun();
  XplusYfunc();
  XnaYfunc();
  XputaYfunc();
  while(getchar() != 27);
}
