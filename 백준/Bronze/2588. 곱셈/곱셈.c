#include <stdio.h>

int main(void) {
  int x, y;
  int first, second, third;

  scanf("%d", &x);
  scanf("%d", &y);

  first = x * (y%10);
  second = x * (y%100/10);
  third = x * (y%1000/100);
  
  printf("%d\n%d\n%d\n", first, second, third);
  printf("%d\n", first+second*10+third*100);

  return 0;
}