#include<stdio.h>
int main(){
    int arr[8]={1,2,3,1,4,3,5,6};
    for (int  i = 0; i < 8; i++)
    {
        for (int j = i+1; j < 8; j++){
            if (arr[i]==arr[j]){
            printf("The duplicate element is %d\n",arr[i]);
            break;
        }
        
    }
    
}
}

