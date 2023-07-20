#include <stdio.h>

int big(a, b, c){
  if(a > b && a>c){
    return a;
  } else if(b>c){
    return b;
  } else{
    return c;
  }
}

int main(void) {
  int a, b, c;
  int cash;

  scanf("%d %d %d", &a, &b, &c);

  
  
  if(a == b && a == c){
    cash = 10000 + a*1000;
  } else if(a==b || a==c){
    cash = 1000 + a*100;
  } else if(b==c){
    cash = 1000 + b*100;
  } else{
    cash = big(a,b,c)*100;
  }

  
  printf("%d", cash); 
  return 0;
}