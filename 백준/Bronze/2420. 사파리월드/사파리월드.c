#include <stdio.h>

int main(void)
{
  long long a, b;
  long long result;
  
  scanf("%lld %lld", &a, &b);

  result = a - b;

  if(result < 0){
    result = result - 2*result;
  }
  printf("%lld", result);
  
	return 0;
}