#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, m;

  int *arr;
  int num;

  scanf("%d %d", &n, &m);

  arr = (int *)malloc(sizeof(int) * n * m);

  for (int i = 0; i < n * m; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n * m; i++) {
    scanf("%d", &num);

    arr[i] += num;
  }

  for (int i = 0; i < n * m; i++) {
    printf("%d", arr[i]);

    if ((i + 1) % n == 0) {
      printf("\n");
    } else {
      printf(" ");
    }
  }

  return 0;
}