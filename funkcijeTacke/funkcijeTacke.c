#include <stdio.h>

#define XMAX 10
#define YMAX 5

struct Tacka {
  int x, y;
};

struct Tacka napraviTacku(int x, int y) {
  struct Tacka temp;
  temp.x = x;
  temp.y = y;
  return temp;
}

struct Tacka napraviTacku2(int x, int y) {
  struct Tacka temp = {x, y};
  return temp;
}

struct Tacka saberiTacke(struct Tacka t1, struct Tacka t2) {
  t1.x += t2.x;
  t1.y += t2.y;
  return t1;
}

struct Pravougaonik {
  struct Tacka p1, p2;
};

void main() {
  struct Pravougaonik pr, pr2;

  pr.p1 = napraviTacku(0, 0);
  pr.p2 = napraviTacku(5, 10);

  pr2.p1.x = 1;
  pr2.p1.y = 2;
  pr2.p2.x = 3;
  pr2.p2.y = 4;

  struct Tacka srednja;

  srednja = napraviTacku(
    (pr.p1.x + pr.p2.x) / 2,
    (pr.p1.y + pr.p2.y) / 2
  );

  printf("Srednja tacka xy: %i-%i", srednja.x, srednja.y);
}
