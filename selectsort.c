//#include <tclDecls.h>
#include<stdio.h>

int sorted[100];

void Select(int arr[], int n)
{
    int i,j,min, temp;

    for(i = 0;i <n - 1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j] < arr[min])
            {
                min=j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
int main(void) {
    int list01[] = {5, 3, 8, 1, 2, 7};

    Select(list01, sizeof(list01)/sizeof(int));
}
