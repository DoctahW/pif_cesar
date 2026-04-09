#include <stdio.h>
typedef struct {
  int x;
  int y;
} Pontos;

Pontos somar_pontos(Pontos a, Pontos b);

int main() {
  Pontos p1, p2;

  scanf("%d %d", &p1.x, &p1.y);
  scanf("%d %d", &p2.x, &p2.y);

  Pontos p3 = somar_pontos(p1, p2);

  printf("%d %d\n", p1.x, p1.y);
  printf("%d %d\n", p2.x, p2.y);
  printf("%d %d\n", p3.x, p3.y);

  return 0;
}

Pontos somar_pontos(Pontos a, Pontos b) {
  Pontos r;

  r.x = a.x + b.x;
  r.y = a.y + b.y;

  return r;
}
