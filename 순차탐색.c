#include <stdio.h>

int search(int list[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (key == list[i])
            return i + 1;
    }
    return -1;
}

int main() {
    int list[] = {9, 5, 8, 3, 7};
    int result, n, key;
    printf("탐색할 데이터: ");
    scanf("%d", &key);
    n = sizeof(list) / sizeof(int);
    result = search(list, n, key);
    if (result == -1)
        printf("탐색실패");
    else
        printf("탐색성공/탐색 횟수는 %d", result);
    return 0;
}
