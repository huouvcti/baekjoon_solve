#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, m;
  char arr[50][50];

  scanf("%d %d", &n, &m);

  for (int i = 0; i < n; i++) {
    scanf("%s", arr[i]);
  }

  int min_check = n * m; // Initialize with a large value

  for (int i = 0; i <= n - 8; i++) {
    for (int j = 0; j <= m - 8; j++) {
      int count_WB = 0;
      int count_BW = 0;
      for (int x = 0; x < 8; x++) {
        for (int y = 0; y < 8; y++) {
          if (arr[i + x][j + y] != ((x + y) % 2 == 0 ? 'W' : 'B')) {
            count_WB++;
          }
          if (arr[i + x][j + y] != ((x + y) % 2 == 0 ? 'B' : 'W')) {
            count_BW++;
          }
        }
      }

      min_check = (count_WB < min_check) ? count_WB : min_check;
      min_check = (count_BW < min_check) ? count_BW : min_check;
    }
  }

  printf("%d", min_check);

  return 0;
}