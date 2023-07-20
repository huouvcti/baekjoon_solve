#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int count;

  scanf("%d", &count);

  for (int i = 0; i < count; i++) {
    for (int j = 0; j < count - i - 1; j++)
      printf(" ");
    for (int j = 0; j <= i; j++)
      printf("*");
    printf("\n");
  }

  return 0;
}