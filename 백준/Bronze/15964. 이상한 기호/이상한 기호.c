#include <stdio.h>

int hj(int a, int b) { return (a + b) * (a - b); }

int main() {
  int a, b;

  scanf("%d %d", &a, &b);

  printf("%d", hj(a, b));
  return 0;
}