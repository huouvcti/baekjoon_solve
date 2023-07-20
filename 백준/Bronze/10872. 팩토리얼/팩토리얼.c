#include <stdio.h>

int main(void)
{
  int n;
  long long result=1;
  
  scanf("%d", &n);

  int i=1;
  while(i <= n){
    result *= i;
    i++;
  }
  printf("%lld", result);
  
	return 0;
}