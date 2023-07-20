#include <stdio.h>

int main(void) {
  int count;
  int h, w, n;
  int x=1, y=1;

  scanf("%d", &count);

  for (int i = 0; i < count; i++) {
    scanf("%d %d %d", &h, &w, &n);
    
    x = 1;
    y = 1;
    for (int j=1; j<n; j++){
      y++;
      
      if(y > h){
        y = 1;
        x += 1;
      }
    }
    printf("%d%02d\n", y, x);
  }

  return 0;
}