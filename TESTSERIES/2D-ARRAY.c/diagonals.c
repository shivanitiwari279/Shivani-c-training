#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("The diagonals are:\n");
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
        if (arr[i]==arr[j])
        {
           printf("%d\n",arr[i][j]);
        }
        
       }
       
    }
    
}