#include<stdio.h>
int main(){
    int sum=97;
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
          printf(" ");
        }
        for ( int k = 4; k > i; k--)
        {
        printf("%c", sum++);
        }
        for ( int l = 4; l >= i; l--)
        {
        printf("%c", sum++);
        }
        printf("\n");
    }
    
}