//TRIPLET PAIRS

 #include<stdio.h>
int main(){
    int arr[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    int pairs;
    int x=30;
    for (int i = 0; i < 12; i++)
    {
       for (int j = i+1; j < 12; j++)
       {
        for (int k = i+2; k < 12; k++)
        {
           if (arr[i]+arr[j]+arr[k]==x)
           {
            pairs++;
            printf("(%d %d %d)\n",arr[i],arr[j],arr[k]);
           } 
        }
           
       }
        
    }
       
    printf("%d",pairs);
}    