#include <stdio.h>
int max(int a,int b)
{ 
    return (a>b)?a:b;
}
int min(int a,int b)
{
     return (a<b)?a:b; 
}

int main() {
    int arr[4] = {2,3,-2,4};
    int max_prod=arr[0], min_prod=arr[0], result=arr[0];

    for(int i=1;i<4;i++){
        if(arr[i]<0){
            int temp = max_prod;
            max_prod = min_prod;
            min_prod = temp;
        }
        max_prod = max(arr[i], arr[i]*max_prod);
        min_prod = min(arr[i], arr[i]*min_prod);
        result = max(result, max_prod);
    }

    printf("Maximum product subarray: %d\n", result);
   
}