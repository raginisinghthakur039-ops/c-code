////find the 'kth' max and min element of an array
#include <stdio.h>
int main(){
    int arr[7]={7,10,4,3,20,15,8};
    int k=3;
    //sorting the array in ascending order
    for (int i=0;i<7-1;i++){
        for(int  j=0;j<7-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("The %dth minimum element is %d\n",k,arr[k-1]);
    printf("The %dth maximum element is %d\n",k,arr[7-k]);
    return 0;
}
