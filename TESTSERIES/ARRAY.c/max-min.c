    //...............MAXIMUM ELEMENT OF ARRAY...........


// #include<stdio.h>
// int main(){
//     int arr[6]={2,3,8,5,4,0};
//     int max=arr[0];
//     for (int i = 0; i < 6; i++)
//     {
//         if (max<arr[i])
//         {
//             max=arr[i];
            
//         }
        
//     }
//      printf("%d",max);
// }

//...............MINIMUM ELEMENT OF ARRAY...........



#include<stdio.h>
int main(){
    int arr[6]={2,3,8,5,4,9};
    int min=arr[0];
    for (int i = 6; i >=0 ; i--)
    {
        if (min>arr[i])
        {
            min=arr[i];
            
        }
        
    }
     printf("%d",min);
}

