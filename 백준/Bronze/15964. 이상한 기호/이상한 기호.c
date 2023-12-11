#include <stdio.h>

long long hj(long long a, long long b) { return (a + b) * (a - b); }

int main() {
  long long a, b;

  scanf("%lld %lld", &a, &b);

  printf("%lld", hj(a, b));
  return 0;
}