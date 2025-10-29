//missing number in array [1 to n]
#include <stdio.h>
int main(){
    int arr[]={1,2,4,5};
    int n=5;
    int sum =0;
    int i,total;
    for(i=0;i<n-1;i++){
        sum+=arr[i];    //sum of given no.
    }
    total=n*(n+1)/2;   //sum of 1 to n
    printf("%d",total-sum);
    return 0;
} 
