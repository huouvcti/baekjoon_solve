#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num;
  char s[100];

  scanf("%d", &num);

  for (int j = 0; j < num; j++) {
    scanf("%s", s);

    for (int i = 0; i < 1000; i++) {
      if (i == 0) {
        printf("%c", s[i]);
      }

      if (s[i] < 'A' || s[i] > 'Z') {
        printf("%c\n", s[i - 1]);
        break;
      }
    }
  }

  return 0;
}