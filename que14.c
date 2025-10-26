//subarray with giving sum (two pointer approach)
#include <stdio.h>
int main(){
    int arr[7]={1,2,3,7,5,6,4};
    int n=7;
    int sum=12;
    int curr_sum=0;
    int start=0;
    for(int end=0;end<n;end++){
        curr_sum+=arr[end];
        while(curr_sum>sum){
            curr_sum-=arr[start];
            start++;
        }
        if(curr_sum==sum){
            printf("Subarray with given sum found from index %d to %d\n",start,end);
            return 0;
        }


    }
    printf("No subarray with given sum found\n");
    return 0;
}