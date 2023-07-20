#include <stdio.h>

int main(void) {
  int num[5];
  int result;

  scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

  result = (num[0]*num[0])+(num[1]*num[1])+(num[2]*num[2])+(num[3]*num[3])+(num[4]*num[4]);
  result %= 10;

  printf("%d", result);
  
  return 0;
}