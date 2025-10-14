//kadane's algorithm-maximum subarray sum
#include <stdio.h>
int main(){
    int arr[6]={1,-5,3,-4,5,7};
    int maxSum=arr[0];
    for(int i=0;i<6;i++){
        int currSum=0; // Initialize currSum for each new starting point
        for(int j=i;j<6;j++){ // Inner loop starts from 'i'
            currSum=currSum+arr[j];
            if(currSum>maxSum) {
                maxSum=currSum;
            }
        }
    }
    printf("%d",maxSum);
}
// maximum subarray sum is 12