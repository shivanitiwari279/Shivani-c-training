#include<stdio.h>
#include<string.h>
int main(){
    char str[]="hellohii";
    int freq[256]={0};
    int ln=strlen(str);
    for (int i = 0; i < ln; i++)
    {
        freq[str[i]]++;
    }
    int fount=0;
    for (int i = 0; i < ln; i++)
    {
        if(freq[str[i]]==1){
              printf("%c",str[i]);
              fount=0;
              break;
        }    
    }
   
}