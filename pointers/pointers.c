#include <stdio.h>

void main() {
  // definisanje promenljive i
  int i = 1;
  int j = 2;

  // definisanje pokazivaca p
  int *p;

  // dodeljivanje adrese pokazivacu p
  // netacno
  // p = i;
  // tacno
  p = &i;

  printf("       i= %d\n", i);
  printf("      &i= %p\n\n", &i);
  printf("       j= %d\n", j);
  printf("      &j= %p\n\n", &j);

  printf("      *p= %d\n", *p);
  printf("      &p= %p\n", &p);
  printf("   &(*p)= %p\n\n", &(*p));

  int *p2;
  *p2 = *p;
  printf("     *p2= %d\n", *p2);
  printf("     &p2= %p\n", &p2);
  printf("  &(*p2)= %p\n\n", &(*p2));

  while (getchar() != '\n')
    ;
}
