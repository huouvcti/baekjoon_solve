#include <stdio.h>

int main(void) {
  int num;
  int numArr[5];

  while (1) {
    scanf("%d", &num);

    if (num == 0)
      break;

    int i = -1;
    while (num > 0) {
      i++;
      numArr[i] = num % 10;
      num /= 10;
    }

    int is = 0;
    for(int j=0; j<i; j++){
      if(numArr[j] != numArr[i-j]){
        is++;
      }
    }

    if(is == 0){
      printf("yes\n");
    } else {
      printf("no\n");
    }
  }

  return 0;
}