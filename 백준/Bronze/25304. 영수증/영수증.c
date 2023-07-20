#include <stdio.h>

int main(void) {
  int cost, count;
  int a, b;
  int sum=0;

  scanf("%d", &cost);
  scanf("%d", &count);

  for(int i=0; i<count; i++){
    scanf("%d %d", &a, &b);
    sum += a*b;
  }

  if(sum == cost){
    printf("Yes");
  } else {
    printf("No");
  }
  
  return 0;
}