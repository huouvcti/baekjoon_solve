#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *a;

int compare(const void *a, const void *b) {
  if (*(int *)a > *(int *)b) {
    return 1;
  } else if (*(int *)a == *(int *)b) {
    return 0;
  } else {
    return -1;
  }
}

int find(int num, int start, int end) {
  if (end < start)
    return 0;

  int middle = (start + end) / 2;
  if (num == a[middle])
    return 1;
  else if (num < a[middle])
    find(num, start, middle - 1);
  else
    find(num, middle + 1, end);
}

int main() {
  int n, m;

  int b;

  scanf("%d", &n);

  a = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  qsort(a, n, sizeof(int), compare);

  scanf("%d", &m);

  for (int i = 0; i < m; i++) {
    scanf("%d", &b);

    printf("%d\n", find(b, 0, n - 1));
  }

  return 0;
}