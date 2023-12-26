#include <stdio.h>
#include <stdlib.h>

int main() {
  long long M = 1234567891;
  int n;
  char str[50];

  scanf("%d", &n);
  scanf("%s", str);

  int res = 0;
  int a;
  long long r = 1;
  for (int i = 0; i < n; i++) {
    a = str[i] - 96;

    res = (res + a * r) % M;

    r = (r * 31) % M;
  }

  res %= M;

  printf("%d\n", res);

  return 0;
}