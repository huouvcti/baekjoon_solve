#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
  int r;
  while (b != 0) {
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int lcm(int a, int b) { return (a * b) / gcd(a, b); }

int main() {
  int a, b;

  scanf("%d %d", &a, &b);

  if (a < b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
  }

  printf("%d\n%d", gcd(a, b), lcm(a, b));

  return 0;
}