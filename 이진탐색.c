#include <stdio.h>

int list[] = {2, 6, 11, 18, 20, 22, 27, 29, 32, 34, 38, 41, 42, 45, 47};
int count;

int binary_search(int low, int high, int key) {
    int middle;
    if (low <= high) {
        middle = (low + high) / 2;
        count++;
        if (key == list[middle])
            return count;
        else if (key > list[middle])
            return binary_search(middle + 1, high, key);
        else if (key < list[middle])
            return binary_search(low, middle - 1, key);
    }
    return -1; // 이 부분에서 검색 실패를 나타내는 -1을 반환.
}

int main() {
    int key, result, n;
    n = sizeof(list) / sizeof(int);
    printf("search data: ");
    scanf("%d", &key);
    result = binary_search(0, n - 1, key);
    if (result == -1)
        printf("search failed");
    else
        printf("search succeeded / search counter: %d", result);
    return 0;
}

//high와 low값을 정해놓고 입력 받은 값이 middle 값보다 크면 오른쪽 작으면 왼쪽 나뉘어서
// 또 나뉜 거에서 middle 값과 비교해서 자르고 잘라서 몇 번만에 찾았는지 알려주는 알고리즘