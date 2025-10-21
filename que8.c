//merge two sorted arrays without using extra space
#include <stdio.h>
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[5]={2,4,6,8,10};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr1[i]>arr2[j]){
                //swap
                int temp=arr1[i];
                arr1[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }
    //printing the merged arrays
    printf("first arrray:\n");
    for(int i=0;i<5;i++){
        printf("%d",arr1[i]);
    }
    printf("\nsecond array:\n");
    for(int i=0;i<5;i++){
        printf("%d",arr2[i]);
    }
    return 0;
}