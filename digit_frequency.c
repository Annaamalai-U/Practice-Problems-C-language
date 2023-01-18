#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char token[999];
    gets(&token);
    int a;
    for(int i=0;i<=9;i++){
         a=0;
        for(int j=0;j<strlen(token); j++){
           if(token[j]== '0'+ i){
            a++;
           }
        }
        printf("%d ",a);
    }
    }
