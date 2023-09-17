#include <stdio.h>
int sorted[100];
void merge(int list[],int left, int mid, int right)
{
  int i,j,k,l;
  i = left;//왼쪽 리스트의 첫번째주소
  j= mid+1;//오른쪽 리스트의 첫번째주소
  k = left;//새로 만든 리스트의 주소
  while(i<=mid && j<=right){
    if(list[i]<=list[j])
      sorted[k++]=list[i++];
    else
      sorted[k++] = list[j++];
  }
  if(i>mid)
  {
    for(l=j;l<=right;l++)
      sorted[k++]=list[l++];
  }
  else{
    for(l=i;l<=mid;l++)
      sorted[k++]=list[l++];
  }
  for(l=left;l<=right;l++)
    list[l]=sorted[l];
}
void mergesort(int list[],int left,int right)
{
  int mid;
  if(left<right)
  {
    mid=(left+right)/2;
    mergesort(list, left, mid);
    mergesort(list, mid+1, right);
    merge(list,left,mid,right);
  }
}
int main()
{
  int list[]={27,10,12,20,25,13,15,22};
  int n;
  n=sizeof(list)/sizeof(int);
  mergesort(list,0,n-1)
  for(int i=0; i<n; i++)
  
    printf("%d", list[i]);
  ]
}