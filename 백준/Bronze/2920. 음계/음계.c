#include <stdio.h>

int main(void) {
  int n[8];
  int isMixed = 0;
  
  scanf("%d %d %d %d %d %d %d %d", &n[0], &n[1], &n[2], &n[3], &n[4], &n[5], &n[6], &n[7]);
  
  for(int i=1; i<8; i++){
    if(!(n[i-1]+1 == n[i] || n[i-1]-1 == n[i])){
      isMixed = 1;
    }
  }

  if(!isMixed){
    if(n[0] < n[1]){
      printf("ascending");
    } else {
      printf("descending");
    }
  } else {
    printf("mixed");
  }
  
  return 0;
}