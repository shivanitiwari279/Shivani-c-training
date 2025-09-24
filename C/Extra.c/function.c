// #include<stdio.h>
// int add(int a, int b){
//     a=60;
//     b=30;
//     return a+b ;
// }
// int main(){
//     int a =3;
//     int b=9;
//     int sum=add(a,b);
//     printf("%d\n",a+b);
//     printf("%d\n",sum);
// }

// #include<stdio.h>
// int factorial(int a){
//    int fact=1;
//    for (int i = 2; i <= a; i++)
//    {
//     fact=fact*i;
//    }
//    return fact;
// }
// int main(){
//     int n=7;
//     int r=4;
//     int ncr=factorial (n)/(factorial (r) *factorial (n-r));
//     printf("%d",ncr);
// }


// #include<stdio.h>
// int factorial(int a){
//    int fact=1;
//    for (int i = 2; i <= a; i++)
//    {
//     fact=fact*i;
//    }
//    return fact;
// }
   
//    int combination(int i, int j){
//     int icj=factorial (i)/(factorial (j) *factorial (i-j));
//    return icj;
//}


int main(){
    int n=7;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0;j <= i; j++)
        {
        int ncr=combination(i,j);
         printf("%d",ncr);
        }
        printf("\n");
        }
        
    }
    
    
    
