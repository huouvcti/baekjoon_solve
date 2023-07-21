#include <stdio.h>

// 6, 12, 18: 6의 배수
// 1, 7(1+6), 19(1+6+12), 37(1+6+12+18), 61 ...

int main(void) {
  long n;

  long sum = 1;
  int count = 1;

  scanf("%ld", &n);

  for (int i = 0;; i += 6) {

    sum += i;

    if (sum >= n)
      break;
    count++;

    // printf("%d %d %d\n", i, sum, count);
  }

  printf("%d\n", count);

  return 0;
}