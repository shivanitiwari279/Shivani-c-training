#include<stdio.h>
int main(){
    int arr[7]={1,0,2,1,1,0,2};
    int low=0;
    int mid=0;
    int high=6;
    
while (mid<=high)
{
   if (arr[mid]==0)
   {
    int temp=arr[low];
    arr[low]=arr[mid];
    arr[mid]=temp;
    low++;
    mid++;
   }
   else if (arr[mid]==1)
   {
    mid++;
   }
   else
   {
    int temp=arr[mid];
    arr[mid]=arr[high];
    arr[high]=temp;
    high--;
   }
}
  printf("Sorted Array:");
  for (int i = 0; i < 7; i++)
  {
    printf("%d ",arr[i]);
  }
  
}
