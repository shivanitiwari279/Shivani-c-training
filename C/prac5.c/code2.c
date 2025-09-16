// #include<stdio.h>
// int main(){
//     int arr[7]={1,3,4,6,-8,5,2}; 
//     int k=7;
//     for (int i = 0; i < 7 ; i++)
//     {
//       for (int j = 0; j < 7; j++)
//       {
//        if (arr[i]+arr[j]==k)
//        {
//         printf("%d %d",i,j);
//        }
//       }
//     }

//   }

#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int check=1;
    for (int i = 0; i < 5/2 ; i++)
    {
        if (arr[i]!=arr[5-1-i])
        {
          check=0;
          break;
        }
        
    }
    if (check)
    {
       printf("yes it is !");
    }
    else{
        printf("No, it's not !");
    }

}
