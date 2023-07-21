#include <stdio.h>

int main(void) {
  int n;
  int numArr[100];
  int count = 0;
  
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    scanf("%d", &numArr[i]);

    int is=0;
    for(int j=1; j<=numArr[i]; j++){
      if(numArr[i]%j == 0){
        is++;
      }
    }

    if(is == 2){
      count++;
    }
  }

  printf("%d\n", count);

  return 0;
}