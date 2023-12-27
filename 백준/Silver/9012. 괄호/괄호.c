#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n;
  char str[51];

  scanf("%d", &n);

  for (int j = 0; j < n; j++) {
    scanf("%s", str);

    int c = 0;
    for (int i = 0; i < strlen(str); i++) {
      if (str[i] == '(')
        c++;
      else if (str[i] == ')')
        c--;

      if (c < 0)
        break;
    }

    printf("%s", c == 0 ? "YES\n" : "NO\n");
  }
}
