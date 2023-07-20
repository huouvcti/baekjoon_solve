#include <stdio.h>

int main(void) {
  int number[10] = {0,};
  int a, b, c;
  int result;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  result = a*b*c;
  
  while(result > 0){
    number[result%10] += 1;
    result /= 10;
  }

  for(int i=0; i<10; i++){
    printf("%d\n", number[i]);
  }
  
  return 0;
}