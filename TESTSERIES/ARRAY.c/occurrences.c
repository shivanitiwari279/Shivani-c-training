#include<stdio.h>
int main(){
    int arr[7]={1,2,3,2,1,2,4};
    int x;
    int occurrence=0;
    printf("Enter an element :",x);
    scanf("%d",&x);

    for (int i = 0; i < 7; i++)
    {
        if (arr[i]==x)
        {
           arr[i]=x;
           occurrence++; 
        }
        
    }
        printf("element %d occure %d times\n",x,occurrence);
    
}

