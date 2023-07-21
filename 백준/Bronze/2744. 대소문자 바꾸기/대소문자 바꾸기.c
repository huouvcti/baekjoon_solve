#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char arr[100];

  scanf("%s", arr);

  int i = 0;
  while (1) {
    if (arr[i] == NULL) {
      break;
    }

    if(arr[i] >= 'A' && arr[i] <= 'Z'){
      arr[i] += 32;
    } else {
      arr[i] -= 32;
    }
    
    printf("%c", arr[i]);

    i++;
  }

  

  return 0;
}