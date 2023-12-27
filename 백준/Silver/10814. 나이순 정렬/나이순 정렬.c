#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct info {
  int age;
  char name[101];
  int date;
};

int compare(const void *a, const void *b) {
  struct info *info1 = (struct info *)a;
  struct info *info2 = (struct info *)b;

  if (info1->age > info2->age) {
    return 1;
  } else if (info1->age == info2->age) {
    if (info1->date > info2->date) {
      return 1;
    } else if (info1->date == info2->date) {
      return 0;
    } else {
      return -1;
    }
  } else {
    return -1;
  }
}

int main() {
  int n;

  scanf("%d", &n);

  struct info *info_arr = (struct info *)malloc(sizeof(struct info) * n);

  for (int i = 0; i < n; i++) {
    scanf("%d %s", &info_arr[i].age, info_arr[i].name);

    info_arr[i].date = i;
  }

  struct info temp;
  char temp_name[101];

  qsort(info_arr, n, sizeof(struct info), compare);

  for (int i = 0; i < n; i++) {
    printf("%d %s\n", info_arr[i].age, info_arr[i].name);
  }

  return 0;
}