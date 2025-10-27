            //Search in a row-wise and column-wise sorted matrix//


#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int target=7;
    int found=0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j]==target)
            {
              printf("Element %d found at position (%d %d)\n",target,i,j);
              found=1;
              break;
            }
            
        }
        if (found)
        {
           break;
        }
        
    }
    if (!found)
        {
            printf("Element %d not found in the matrix.\n",target);
        }
        
}