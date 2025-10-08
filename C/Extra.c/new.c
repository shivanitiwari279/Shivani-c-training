// #include<stdio.h>
// float squarearea(float side);
// float circlearea(float rad);
// float ractanglearea(float a, float b );

// int main(){
//     float side=8.5;
//     float rad=2.2;
//     float a=5.0;
//     float b=6.0;
    
//     printf (" area of suqare : %f\n" ,side*side);
//     printf (" area of circle :%f\n", 3.14*rad*rad);
//     printf("area of ractangle :%f\n",a*b ); 
//      return 0;
// }

// float squarearea(float side){
//     return side*side ;
// }
// float circlearea(float rad){
//     return 3.14*rad*rad ;

// }
// float ractanglearea(float a, float b ){
//     return a*b ;
// }

// #include<stdio.h>

// void calculateprice(float value);

// int main(){
//     float value = 100.00;
//     calculateprice(value);

// }

// void calculateprice(float value){
//     value= value +( 0.18*value);
//     printf("%d" , value);
// }



// #include<stdio.h>
// int main(){
//     int arr[4];
//     for (int i = 0; i < 4; i++)
//     {
//      printf("Enter element no :%d\n", i+1);
//      scanf("%d", &arr[i]);
//     }
    
//     printf("%d",arr[2]);
    
// }

// REVERSE

// #include<stdio.h>
// int main(){
//     int arr[4];
//     for (int i = 0; i <= 3; i++)
//     {
//      printf("Enter element no :%d\n", i+1);
//      scanf("%d", &arr[i]);
//     }

//     for (int i = 3; i >=0; i--)
//     {
//         printf("%d ", arr[i]);
//     }
// } 

// #include<stdio.h>
// int main(){
//     int marks[6]={89,45,32,90,19,20};
//     for (int i = 0; i < 6; i++)
//     {
//         if (marks[i]<35)
//         {
//            printf("%d ", marks[6]);
//         }
        
//     }
    
// }

// ADDRESS

// #include<stdio.h>
// int main(){
//     int arr[6]={2,4,5,7,1,8};
//     printf("%p\n",&arr[0]);
//     printf("%p\n",&arr[1]);
//     printf("%p\n",&arr[2]);
//     printf("%p\n",&arr[3]);
//     printf("%p\n",&arr[4]);
//     printf("%p\n",&arr[5]);

// }


#include<stdio.h>
int main(){
	int num=65;
	for(int i=0;i<4;i++){
	for(int j=0;j<=i;j++){
		printf("%d", num++);
	}
	printf("\n");
	}
}
