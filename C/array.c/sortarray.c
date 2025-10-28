#include<stdio.h>
int main(){
    int arr[5]={4,0,3,5,0};
    int j=0;
  for (int i = 0; i < 5; i++)
  {
    if (arr[i]!=0)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j++;
    }
    
  }
  
  printf("Sorted Array:");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ",arr[i]);
  }
  
}