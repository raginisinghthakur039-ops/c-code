//find intersection of two sorted arrays
#include <stdio.h>
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={2,4,6,8,10};
    printf("Intersection elements are:\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr1[i]==arr2[j]){
                printf("%d\n",arr1[i]);
            }
        }
    }
    return 0;
}