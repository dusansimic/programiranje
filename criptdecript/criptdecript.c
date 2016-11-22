#include <stdio.h>

void encripting(char *string) {
  printf("Encripted: ");
  while (*string != 0) {
    if (*string >= 'A' && *string < 'Z') {
      *string+=33;
      if (*string == 'z' + 1) {
        *string = 'a';
      }
    } else if (*string >= 'a' && *string <= 'z') {
      *string-=31;
      if (*string == 'Z' + 1) {
        *string = 'A';
      }
    }
    printf("%c", *string);
    string++;
  }
  printf("\n");
}

void decripting(char *string) {
  printf("Decripted: ");
  while (*string != 0) {
    if (*string >= 'A' && *string <= 'Z') {
      *string+=31;
      if (*string == 'a' - 1) {
        *string = 'z';
      }
    } else if (*string >= 'a' && *string <= 'z') {
      *string-=33;
      if (*string == 'A' - 1) {
        *string = 'Z';
      }
    }
    printf("%c", *string);
    string++;
  }
  printf("\n");
}

void main() {
  char string[128];
  printf("Unesite string: ");
  gets(string);
  encripting(&string[0]);
  decripting(&string[0]);
  while (getchar() != '\n') {}
}
