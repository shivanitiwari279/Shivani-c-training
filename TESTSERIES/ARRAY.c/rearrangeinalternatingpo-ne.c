#include <stdio.h>
int main() {
    int arr[7] = {1, 2, -3, -4, 5, -6, 7};
    int pos[7], neg[7], p=0, q=0;

    for(int i=0;i<7;i++){
        if(arr[i]>=0) 
        {
            pos[p++] = arr[i];
        }
        
        else 
        {
            neg[q++] = arr[i];
        }
    }
    
    int i=0, j=0, k=0;
    while(i<p && j<q){
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }
    while(i<p)
    {
     arr[k++] = pos[i++];
    }
    while(j<q) 
    {
     arr[k++] = neg[j++];
    }

    for(int i=0;i<7;i++)
    {
      printf("%d ", arr[i]);
    } 
   
}