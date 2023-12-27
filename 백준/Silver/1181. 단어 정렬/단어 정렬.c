#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
  if (strlen((char *)a) > strlen((char *)b)) {
    return 1;
  } else if (strlen((char *)a) == strlen((char *)b)) {
    return strcmp((char *)a, (char *)b);
  } else {
    return -1;
  }
}

int main() {
  int n;
  char str[20001][51];

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%s", str[i]);
  }

  qsort(str, n, 51, compare);

  for (int i = 0; i < n; i++) {
    if (i == 0) {
      printf("%s\n", str[i]);
    } else if (strcmp(str[i], str[i - 1]) != 0) {
      printf("%s\n", str[i]);
    }
  }

  return 0;
}