//REVERSE

// #include<stdio.h>
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int brr[7];
//     for (int i = 0; i < 7; i++)
//     {
//      brr[i]=arr[6-i] ;
//     }
//      for (int i = 0; i <7; i++){
//     printf("%d ",brr[i]);
//     }

// }

//REVERSE WITH SAME ARRAY

// #include<stdio.h>
// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8};
//     for (int i = 0 , j = 8; i < 8; i++, j--)
//     {
//         arr[j]=arr[7-i];
//     }
//     for (int i = 0 , j = 8; i < 8; i++, j--){
//     printf("%d ", arr[j]);
//     }
// }


//PALINDROME OR NOT

// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,3,2};
//     int i;
//     for (int i = 0; i < 5/2; i++)
//     {
//         if (arr[i]!=arr[5-i-1])
//         {
//             printf(" Not Palindrome! \n");
//         }
        
//     }
       
//     printf(" Palindrom! \n");
// }

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4 ,5};
    int i;

    for(i = 0; i < 5/2; i++) {
        if(arr[i] != arr[5 - i - 1]) {
            printf("Not Palindrome\n");
            return 0;   
        }
    }

    printf("Palindrome\n");  
    return 0;
}