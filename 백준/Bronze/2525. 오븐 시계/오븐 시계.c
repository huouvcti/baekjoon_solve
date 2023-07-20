#include <stdio.h>

int main(void) {
  int H, M;
  int time;

  scanf("%d %d", &H, &M);
  scanf("%d", &time);

  H += time / 60;
  M += time % 60;
  
  if(M > 59){
    H += M/60;
    M %= 60;
  }
    
  if(H > 23){
    H %= 24;
  }

  
  printf("%d %d", H, M); 
  return 0;
}