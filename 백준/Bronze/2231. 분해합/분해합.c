#include <stdio.h>

int main(void) {
  int n;

  int gen = 0; 

  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    int i_copy = i;
    
    // 자리수 세기
    int i_count = 0;
    int i_tmp = i;
    while (i_tmp != 0) {
      i_tmp /= 10;
      ++i_count;
    }

    int sum = 0;
    sum += i_copy;
    while (i_copy > 0) {
      sum += i_copy % 10;
      i_copy /= 10;
    }

    if(sum == n){
      gen = i;
      break;
    }
  }

  if(gen == 0){
    printf("0");
  } else{
    printf("%d", gen);
  }

  return 0;
}