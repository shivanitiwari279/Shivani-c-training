//SECOND MAXIMUM/LARGEST

#include<stdio.h>
int main(){
   int arr[6]={1,5,11,24,3,8};
   int max=arr[0];
   int Smax=arr[0];

   for (int i=0; i < 6; i++)
   {
      if (max<arr[i])
      {
         max=arr[i];
      }
      
   }
   
      for (int i = 0; i < 7; i++)
      {
         if (arr[i]!=max && Smax<arr[i])
         {
            Smax=arr[i];
         }
         
      }
   
      printf("%d",Smax) ;
}
