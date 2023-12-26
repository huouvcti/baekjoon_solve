#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  char str[50];

  scanf("%d", &n);
  scanf("%s", str);

  int res = 0;
  int ar;
  for (int i = 0; i < n; i++) {
    ar = (str[i] - 96);

    for (int j = 0; j < i; j++) {
      ar *= 31;
    }

    res += ar;
  }

  res %= 1234567891;

  printf("%d\n", res);

  return 0;
}