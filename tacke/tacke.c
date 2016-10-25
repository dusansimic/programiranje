#include <stdio.h>


struct {
  int x;
  int y;
} t3, t4;

struct Tacka {
  int x, y;
};

void main() {
  struct Tacka t1;

  t1.x = 5;
  t1.y =10;

  printf("t1.x= %3i   t1.y= %3i\n", t1.x, t1.y);

  struct Tacka t2 = {1, 2};

  printf("t2.x= %3i   t2.y= %3i\n", t2.x, t2.y);

  t3.x = 32;
  t3.y = 56;

  printf("t3.x= %3i   t3.y= %3i\n", t3.x, t3.y);
}
