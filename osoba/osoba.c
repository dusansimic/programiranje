#include <stdio.h>

struct Osoba {
  char ime[15];
  char prezime[15];
};

void main() {
  int n; // broj osoba
  printf("Koliko osoba zelite da upisete : ");
  scanf("%i", &n);
  struct Osoba o[n];
  int i;
  char temp[15];
  for (i = 0; i < n; i++) {
    printf("\n%i. osoba :\n", i+1);
    printf("\tUnesite ime : ");
    scanf("%s", &o[i].ime);
    /*int j = 0;
    while (temp[j]) {
      if(temp[j] != 0)
        o[i].ime[j] = temp[j++];
    }*/
    printf("\tUnesite prezime : ");
    scanf("%s", &o[i].prezime);
    /*j = 0;
    while (temp[j]) {
      if(temp[j] != 0)
        o[i].prezime[j] = temp[j++];
    }*/
  }
  printf("Lista osoba :\n");
  for (i = 0; i < n; i++) {
    printf("\t%i. %s %s\n", i+1, o[i].ime, o[i].prezime);
  }
  int duzinaNiza = i;
}
