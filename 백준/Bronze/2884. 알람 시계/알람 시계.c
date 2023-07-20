#include <stdio.h>

int main(void) {
  int H, M;

  scanf("%d %d", &H, &M);

  if(M-45 < 0){
    H -= 1;
    M = M + 60 - 45;
    if(H < 0){
      H = 23;
    }
  } else{
    M -= 45;
  }
  printf("%d %d", H, M); 
  return 0;
}