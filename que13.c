//check if array is shorted and rotated
#include <stdio.h>
int main(){
    int arr[7]={4,5,6,7,1,2,3};
    int count=0;
    for(int i=0;i<6;i++){
        if(arr[i]>arr[i+1]){
            count++;
        }
    }
    if(count<=1){
        printf("Araay is sorted and rotated\n");
    }
    else{
        printf("Array is not sorted and rotated\n");
    }
    return 0;
}