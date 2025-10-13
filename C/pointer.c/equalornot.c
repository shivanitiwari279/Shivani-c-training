// #include<stdio.h>
// int main(){
//     int a=5;
//     int b=10;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("%d %d" ,a , b);
    
// }

// #include<stdio.h>
// int swap (int *x , int *y){
//     *x =*x+*y;
//     *y=*x-*y;
//     *x=*x-*y;
// }
// int main ()
// {
//     int x = 20;
//     int y = 10;
//     int data = swap(&x , &y);
//     printf("%d\n" , x );
//     printf("%d" , y);

// }

#include<stdio.h>
int main(){
    int arr1[6]={1,2,3,4,5,6};
    int arr2[6]={1,2,3,4,5,6};
    int *p1=arr1;
    int *p2=arr2;
    int flag=1;
    for (int i = 0; i < 6; i++)
    {
       if (*(p1+i)!=*(p2+i))
       {
        flag=0;
        break;
        printf("not equal");
       }  
    }
    printf("equal");
}


