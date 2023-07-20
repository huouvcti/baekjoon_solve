#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d\n", &a, &b);
  printf("%0.9f\n", (double)a/b);
  return 0;
}