#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b;
  int *arr[15];

  int n;

  scanf("%d", &n);
  for (int x = 0; x < n; x++) {
    scanf("%d", &a);
    scanf("%d", &b);

    a++;

    for (int i = 0; i < a; i++) {
      arr[i] = malloc(sizeof(int) * (b + 5));
    }

    for (int i = 0; i < a; i++) {
      for (int j = 0; j < b + 1; j++) {
        arr[i][j] = 0;
        if (j == 0) {
          arr[i][j] = 0;
        } else if (i == 0) {
          arr[i][j] = j;
        } else if (j == 1) {
          arr[i][j] = 1;
        } else {
          arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
      }
    }

    // for (int i = 0; i < a; i++) {
    //   for (int j = 0; j < b + 1; j++) {
    //     printf("%d ", arr[i][j]);
    //   }
    //   printf("\n");
    // }

    printf("%d\n", arr[a - 1][b]);
  }

  return 0;
}