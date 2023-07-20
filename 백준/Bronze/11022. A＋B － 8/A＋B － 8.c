#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int count;
  int *sum;
  int *a, *b;

  scanf("%d", &count);

  sum = (int *)malloc(sizeof(int) * count);
  a = (int *)malloc(sizeof(int) * count);
  b = (int *)malloc(sizeof(int) * count);

  for (int i = 0; i < count; i++) {
    scanf("%d %d", &a[i], &b[i]);
    sum[i] = a[i] + b[i];
  }

  for (int i = 0; i < count; i++) {
    printf("Case #%d: %d + %d = %d\n", i + 1, a[i], b[i], sum[i]);
  }

  return 0;
}