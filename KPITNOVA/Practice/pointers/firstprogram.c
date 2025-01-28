#include <stdio.h>
int main() {
  int p = 5;
  int *q;
  q = &p;
  printf("%p\n", q);
  printf("%p\n", &p);
  printf("%d", *q);
}