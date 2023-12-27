#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n;

  scanf("%d", &n);

  if (n == 1) {
    printf("%d\n", n);
  } else {
    int num = 2;
    int i = 0;
    while (n >= (num * 2)) {
      num = num * 2;
      i++;
    }

    if (n == num) {
      printf("%d\n", num);
    } else {
      printf("%d\n", (n % num) * 2);
    }
  }
}
