//find all pairs with a sum
#include <stdio.h>
int main(){
    int arr[5]={2,4,3,5,7};
    int sum=7;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j]==sum){
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}
