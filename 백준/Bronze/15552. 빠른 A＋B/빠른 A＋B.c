#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int count;
  int *sum;
  int a, b;

  scanf("%d", &count);

  sum = (int *)malloc(sizeof(int) * count);

  for (int i = 0; i <count; i++) {
    scanf("%d %d", &a, &b);
    sum[i] = a + b;
  }

  for (int i = 0; i < count; i++) {
    printf("%d\n", sum[i]);
  }

  return 0;
}