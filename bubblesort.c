#include<stdio.h>
void Bubble(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-i; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(void){
int list03[] = {5, 3, 8, 1, 2, 7};

    Bubble(list03, sizeof(list03)/sizeof(int));
}