#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
  if ((*(int *)a) > (*(int *)b)) {
    return 1;
  } else if ((*(int *)a) == (*(int *)b)) {
    return 0;
  } else {
    return -1;
  }
}

int binarysearch_lower(int *arr, int size, int key) {
  int low = 0;
  int top = size - 1;
  int mid;

  while (low <= top) {
    mid = (low + top) / 2;
    if (key > arr[mid])
      low = mid + 1;
    else
      top = mid - 1;
  }

  return (low);
}

int binarysearch_upper(int *arr, int size, int key) {
  int low = 0;
  int top = size - 1;
  int mid;

  while (low <= top) {
    mid = (low + top) / 2;
    if (key < arr[mid])
      top = mid - 1;
    else
      low = mid + 1;
  }

  return (top);
}

int main() {
  int n, m, x;
  int *arr;

  scanf("%d", &n);

  arr = (int *)malloc(sizeof(int) * n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  qsort(arr, n, sizeof(int), compare);

  scanf("%d", &m);

  for (int i = 0; i < m; i++) {
    scanf("%d", &x);

    printf("%d ",
           binarysearch_upper(arr, n, x) - binarysearch_lower(arr, n, x) + 1);
  }
}
