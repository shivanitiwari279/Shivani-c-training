//REVERSE WITH SAME ARRAY

#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    for (int i = 0 , j = 8; i < 8; i++, j--)
    {
        arr[j]=arr[7-i];
    }
    for (int i = 0 , j = 8; i < 8; i++, j--){
    printf("%d ", arr[j]);
    }
}