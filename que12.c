

//move all negative numbers to beginning and positive to end in an array
#include <stdio.h>
int main(){
    int arr[7]={-1,2,-3,4,5,-6,7};
    int left=0;
    int right=6;
    while(left<right){
        //if left is negative ,move left pointer to right

        if(arr[left]<0){
            left++;
        }
        //if right is positive , move right pointer to left
        else if(arr[right]>=0){
            right--;
        }
        //if left is positive and right is negative , swap them
        else{
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
    }
    //printing the modified array
    for(int i=0;i<7;i++){
        printf("%d\n",arr[i]);
    }

}