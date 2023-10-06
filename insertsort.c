//#include <tclDecls.h>
#include<stdio.h>
int sorted[100];

void Insert(int arr[], int n) {
    int i = 0;
    int j = 0;
    int key = 0;

    for (i = 1; i < n; i++)
    {
        key = arr[i];

        for(j = i-1;j>=0;j--)
        {
            if(arr[j]>key)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j+1]=key;
    }
}
int main(void) {

    int list02[] = {5, 3, 8, 1, 2, 7};

    Insert(list02, sizeof(list02)/sizeof(int));

}
