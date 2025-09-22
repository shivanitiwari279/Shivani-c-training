// #include<stdio.h>
// int sum( int a , int b){
//     a=15;
//     b=35;
//     int c= a+b;
//     return c;
// }
 
// int main()
// {
//     int a=10;
//     int b=25;
//     int data=sum(&a,&b);

//     printf("%d \n", data);
//     printf("%d \n",a+b);
// }



// #include<stdio.h>
// int sum( int *a , int *b){
//     *a=15;
//     *b=35;
//     int c=(*a)+(*b);
//     return c;
// }
 
// int main()
// {
//     int a=10;
//     int b=25;
//     int data=sum(&a,&b);

//     printf("%d \n", data);
//     printf("%d \n",a+b);
// }



//  #include<stdio.h>
//  int main(){
// int arr[5]={1,2,3,5,4};
// int *p=arr;
// printf("%d ",*(p));
// printf("%d ",*(p+1));
// printf("%d ",*(p+2));
// printf("%d ",*(p+3));
// printf("%d ",*(p+4));

//  }



// #include<stdio.h>
// int main(){
//     int a=5;
//     int b=10;
//     int swap;
//     swap=a;
//     a=b;
//     b=swap;
//     printf("%d %d" ,a , b);

//}


// #include<stdio.h>
// int swap (int *x , int *y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main ()
// {
//     int x = 20;
//     int y = 10;
//     int data = swap(&x , &y);
//     printf("%d\n" , x );
//     printf("%d" , y);

// }

    

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
    int arr2[6]={1,5,3,4,8,6};
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



