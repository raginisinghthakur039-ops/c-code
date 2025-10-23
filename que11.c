//find union and intersection of arrays
#include <stdio.h>
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={2,4,6,8,10};

    //finding union
    printf("Union elements are:\n");
    for(int i=0;i<5;i++){
        printf("%d\n",arr1[i]);
    }
    for(int j=0;j<5;j++){
        int found=0;
        for(int i=0;i<5;i++){
            if(arr2[j]==arr1[i]){
                found=1;
                break;
            }
        }
        if(!found){
            printf("%d\n",arr2[j]);
        }
    }

    //finding intersection
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