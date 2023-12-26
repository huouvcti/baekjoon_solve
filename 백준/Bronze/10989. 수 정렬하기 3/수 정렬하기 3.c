#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int input;

  int count[10001] = {
      0,
  };

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &input);
    count[input]++;
  }

  for (int i = 1; i < 10001; i++) {
    if (count[i] != 0) {
      for (int j = 0; j < count[i]; j++) {
        printf("%d\n", i);
      }
    }
  }

  return 0;
}