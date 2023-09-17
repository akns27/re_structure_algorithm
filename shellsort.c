#include <stdio.h>

void insertsort(int list[], int first, int last, int gap) {
  int i, j, key;
  for (i = first + gap; i <= last; i = i + gap) {
    key = list[i];
    for (j = i - gap; j >= first && key < list[j]; j = j - gap) {
      list[j + gap] = list[j];
      printf("Step %d: ", j + gap);
      for (int k = 0; k <= last; k++) {
        printf("%d ", list[k]);
      }
      printf("\n");
    }
    list[j + gap] = key;
  }
}

int main() {
  int list[] = {10, 8, 6, 20, 4, 3, 22, 1, 0, 15, 16};
  int i, j, n, gap;
  n = sizeof(list) / sizeof(int);

  for (gap = n / 2; gap > 0; gap = gap / 2) {
    if ((gap % 2) == 0)
      gap++;

    for (i = 0; i < gap; i++) {
      printf("Sorting with gap %d, starting from index %d:\n", gap, i);
      insertsort(list, i, n - 1, gap);
    }
  }

  // 정렬된 배열 출력
  printf("Sorted Array: ");
  for (i = 0; i < n; i++) {
    printf("%d ", list[i]);
  }
  printf("\n");

  return 0;
}
