#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5];
    for (int i = 1; i <= 5 ; i++)
    {
        brr[i]=arr[5-i];
        printf("%d ",brr[i]);
    }
    
}



