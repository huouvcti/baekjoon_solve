#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char arr[100];

  scanf("%s", arr);

  int i = 0;
  while (1) {
    if (arr[i] == NULL) {
      break;
    }

    i++;
  }

  printf("%d", i);

  return 0;
}