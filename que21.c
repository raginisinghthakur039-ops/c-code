//reverse a string
#include <stdio.h>
#include <string.h>
 int main(){
     char str[]= "hello";
        int ln= strlen(str);
        for(int i=ln-1;i>=0;i--){
            printf("%c",str[i]);
        }
 }
 //output: olleh
